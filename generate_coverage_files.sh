bazel coverage --combined_report=lcov  //...

./bazel-out/k8-fastbuild/bin/core/Paindor_test

mkdir -p coverage-reports
find -L . -name '*.gcno' -exec gcov {} \;
mv *.gcov coverage-reports
