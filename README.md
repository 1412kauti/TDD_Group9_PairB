# TDD_Group9_PairB

![CICD Workflow status](https://github.com/1412kauti/TDD_Group9_PairB/actions/workflows/cmake-multi-platform.yml/badge.svg) 
[![codecov](https://codecov.io/gh/1412kauti/TDD_Group9_PairB/graph/badge.svg?token=DW2YG5VPUI)](https://codecov.io/gh/1412kauti/TDD_Group9_PairB)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

# Team Roles
- Driver --> Kautilya Reddy Chappidi
- Navigator --> Vikram Setty

# Getting Started

## Clone Repository
```sh
git clone https://github.com/1412kauti/TDD_Group9_PairB.git
```
## Compiling
```sh
# Must re-run this command whenever any CMakeLists.txt file has been changed.
cmake -S ./ -B build/
```

## Building Program
```sh
# rebuild only files that are modified since the last build
cmake --build build/
# or rebuild everything from scracth
cmake --build build/ --clean-first
# to see verbose output, do:
cmake --build build/ --verbose
```

## Building Documentation
```sh
cmake --build build/ --target docs
# open a web browser to browse the doc
open docs/html/index.html
```
## Run program:
```sh
./build/app/shell-app
```

## Run Tests:
```sh
cd build/; ctest; cd -
# or if you have newer cmake
ctest --test-dir build/
```
## Clean
```sh
cmake --build build/ --target clean
```

## Clean and start over
```sh
rm -rf build/
```
