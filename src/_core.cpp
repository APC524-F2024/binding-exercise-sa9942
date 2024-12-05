#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  py::class_<IntegratorBase>(m, "IntegratorBase")
      .def("integrate", &IntegratorBase::integrate, py::arg("stepsize"),
           py::arg("steps"), py::arg("init_y"),
           "Integrates the system over a given number of steps with the "
           "specified initial conditions.")
      .def("compute_step", &IntegratorBase::compute_step, py::arg("t_n"),
           py::arg("y_n"), py::arg("h"))
      .def("__repr__",
           [](const IntegratorBase &) { return "<IntegratorBase>"; });

  py::class_<EulerIntegrator, IntegratorBase>(m, "EulerIntegrator")
      .def("__repr__",
           [](const EulerIntegrator &) { return "<EulerIntegrator>"; });

  py::class_<HarmonicOscillator, EulerIntegrator>(m, "HarmonicOscillator")
      .def(py::init<>(), "Constructs a Harmonic Oscillator.")
      .def("__repr__",
           [](const HarmonicOscillator &) { return "<HarmonicOscillator>"; });
}
