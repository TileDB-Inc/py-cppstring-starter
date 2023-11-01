Requirements:
- python (suggest >=3.9)
- C++ compiler (gcc, msvc, clang should work)

# Suggested Python installation

If you don't have a useable Python environment available, then:

1. Download and install miniforge: https://github.com/conda-forge/miniforge
2. Create a new environment
```
mamba create -n pbdemo "python<3.11" setuptools pip
mamba activate pbdemo
```

At that point, `pip install .` should work.

# Validating demo

After running `pip install .`, import Python module and check doc string is available

```
>>> from pbstring import pbstring
>>> pbstring.__doc__
'Hi!'
```

# CMake build

If you want to run the build via cmake directly, for more control, then do the following:

1. Install pybind11 (this must be done in the active environment for a cmake-driven build)

```
pip install "pybind11[global]"
```

2. Build the code
```
git clone <uri>
cd <repo>
mkdir bld
cmake ..
cmake --build .
```

3. Load the module from *within* the build directory:
```
cd bld
ls # you should see an extension like `pbstring.cpython-310-darwin.so`
python
>>> import pbstring
>>> pbstring.__doc__
'Hi!'
```
