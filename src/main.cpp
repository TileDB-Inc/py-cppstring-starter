#include <pybind11/pybind11.h>

PYBIND11_MODULE(pbstring, m) {
    m.doc() = R"pbdoc(Hi!)pbdoc";
}
