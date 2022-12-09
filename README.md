# Paindor

[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=joaocsoliveira_paindor&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=joaocsoliveira_paindor)

Paindor is an experiment based on [Cherno's game engine series](https://www.youtube.com/playlist?list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT)

Pain = Dor

## Dependencies

- Bazel (Bezelisk) (https://bazel.build/install/bazelisk)

## Testing and Building

```bash

# build everything
bazel build //...

# test everything
bazel test //...

# run examples
bazel run //examples:example-001

```

## Maintenance

### Update compile_commands.json

```bash
bazel run @hedron_compile_commands//:refresh_all
```

### Coverage Report

```bash
bazel coverage --combined_report=lcov  //...
genhtml --output genhtml bazel-out/_coverage/_coverage_report.dat
```

To generate coverage data that SonarCloud can read:

```bash
./generate_coverage_files.sh
```
