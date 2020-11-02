# EIGEN COMPILATION FAILURE WITH NVCC

Stub demonstrating a compilation failure with nvcc and eigen (no CUDA device code involved).

Expected error message :

```
/home/narvorpi/work/misc/code/nvcc_eigen/src/main.cpp(11): error: no instance of overloaded function "Eigen::seq" matches the argument list
            argument types are: (int, int)
```

## Tested on :

- Ubuntu 18.04
- Eigen version 3.3.? (commit 9d11e2c03)
- NVCC version 11.1
- GCC version 7.5.0


