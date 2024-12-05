# Binding Exercise.

## Author : Prof. Henry Schreiner

[![Actions Status][actions-badge]][actions-link]

To complete this homework, finish these two files:

- CMakeLists.txt (add the skbuild branch)
- src/\_core.cpp (add the binding definition)

Each requires about 5 lines of code added. Hint: you only need to bind the final
class, HarmonicOscillator; no need to teach pybind11 about anything else.
Lists/tuples autoconvert to std::vector, and Eigen autoconverts to numpy (due to
the includes I've added at the top).

There's a C++ version you can compile directly and compare with
`cmake -S . -B build && cmake --build build && ./build/main`. Tests, noxfile,
etc. have been provided.

<!-- prettier-ignore-start -->
[actions-badge]:            https://github.com/se-for-sci/binding-exercise-sa9942/workflows/CI/badge.svg
[actions-link]:             https://github.com/se-for-sci/binding-exercise-sa9942/actions

<!-- prettier-ignore-end -->
