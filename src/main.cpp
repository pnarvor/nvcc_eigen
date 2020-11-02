#include <Eigen/Dense>
using Mat4 = Eigen::Matrix<float,4,4>;
using Vec3 = Eigen::Matrix<float,3,1>;

int main()
{
    Mat4 m;

    // both compile with gcc
    // won't compile with nvcc
    Vec3 v0 = m(Eigen::seq(0,2), 0);

    // compile with nvcc
    Vec3 v1 = m(Eigen::seqN(0,3), 0);

    return 0;
}


