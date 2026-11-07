from pathlib import Path
import argparse
import json
import subprocess
import time
from datetime import datetime, timezone

parser = argparse.ArgumentParser()
parser.add_argument('--compiler', default='g++')
args = parser.parse_args()
root = Path(__file__).resolve().parent
build = root / 'build'
build.mkdir(exist_ok=True)
records = []
sources = sorted(root.glob('*/*.cpp'))
for source in sources:
    executable = build / (source.stem + '.exe')
    command = [args.compiler, '-std=c++14', '-Wall', '-Wextra', '-pedantic', '-DLOCAL_TEST', str(source), '-o', str(executable)]
    started = time.monotonic()
    compiled = subprocess.run(command, capture_output=True, text=True, timeout=30)
    if compiled.returncode or compiled.stderr:
        raise RuntimeError(f'{source.name}: {compiled.stderr}')
    result = subprocess.run([str(executable)], capture_output=True, text=True, timeout=10)
    if result.returncode:
        raise RuntimeError(f'{source.name}: {result.stderr}')
    print(result.stdout.strip(), flush=True)
    records.append({'source': source.relative_to(root).as_posix(), 'compile_exit': compiled.returncode, 'run_exit': result.returncode, 'output': result.stdout.strip(), 'compile_and_run_seconds': round(time.monotonic() - started, 3)})
if not records:
    raise RuntimeError('No solution files found')
report = {'checked_utc': datetime.now(timezone.utc).isoformat(), 'results': records}
(root / 'TEST_RESULTS.json').write_text(json.dumps(report, indent=2), encoding='utf-8')
print(f'All {len(records)} programs passed.', flush=True)
