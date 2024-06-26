// #include <cassert>
// #include <iostream>
// #include "../include/matrix.h"
// #include "../include/tuple.h"

// using namespace std;

// void test_initialization_4x4()
// {
//     double val[16] = {1, 2, 3, 4,
//                       5.5, 6.5, 7.5, 8.5,
//                       9, 10, 11, 12,
//                       13.5, 14.5, 15.5, 16.5};

//     // test initialization
//     Matrix m = Matrix(4, val);

//     cout << m.to_string() << endl;

//     assert(m.get(0, 0) == 1);
//     assert(m.get(0, 3) == 4);
//     assert(m.get(1, 0) == 5.5);
//     assert(m.get(1, 2) == 7.5);
//     assert(m.get(2, 2) == 11);
//     assert(m.get(3, 0) == 13.5);
//     assert(m.get(3, 2) == 15.5);
// }

// void test_initialization_2x2()
// {
//     // 2x2 matrix
//     double val_2[4] = {-3, 5,
//                        1, -2};
//     Matrix m = Matrix(2, val_2);

//     cout << m.to_string() << endl;

//     assert(m.get(0, 0) == -3);
//     assert(m.get(0, 1) == 5);
//     assert(m.get(1, 0) == 1);
//     assert(m.get(1, 1) == -2);
// }

// void test_initialization_3x3()
// {
//     // 3x3 matrix
//     double val_3[9] = {-3, 5, 0,
//                        1, -2, -7,
//                        0, 1, 1};
//     Matrix m = Matrix(3, val_3);

//     cout << m.to_string() << endl;

//     assert(m.get(0, 0) == -3);
//     assert(m.get(1, 1) == -2);
//     assert(m.get(2, 2) == 1);
// }

// void test_equality()
// {
//     // equality
//     double a_val[16] = {1.0, 2, 3, 4,
//                         5, 6, 7, 8,
//                         9, 8, 7, 6,
//                         5, 4, 3, 2};

//     double b_val[16] = {1.0, 2, 3, 4,
//                         5, 6, 7, 8,
//                         9, 8, 7, 6,
//                         5, 4, 3, 2};

//     Matrix A = Matrix(4, a_val);
//     Matrix B = Matrix(4, b_val);

//     assert(A == B);
// }

// void test_inequality()
// {
//     double a_val[16] = {1.0, 2, 3, 4,
//                         5, 6, 7, 8,
//                         9, 8, 7, 6,
//                         5, 4, 3, 2};

//     double b_val[16] = {2, 3, 4, 5,
//                         6, 7, 8, 9,
//                         8, 7, 6, 5,
//                         4, 3, 2, 1};

//     Matrix A = Matrix(4, a_val);
//     Matrix B = Matrix(4, b_val);

//     assert(A != B);
// }

// int main()
// {
//     test_initialization_4x4();
//     test_initialization_2x2();
//     test_initialization_3x3();

//     test_equality();
//     test_inequality();

//     // b_val = new double[16]{
//     //     2, 3, 4, 5,
//     //     6, 7, 8, 9,
//     //     8, 7, 6, 5,
//     //     4, 3, 2, 1};

//     // B = Matrix(4, b_val);

//     // assert(A != B);

//     // // matrix multiplication
//     // a_val = new double[16]{
//     //     1, 2, 3, 4,
//     //     5, 6, 7, 8,
//     //     9, 8, 7, 6,
//     //     5, 4, 3, 2};

//     // b_val = new double[16]{
//     //     -2, 1, 2, 3,
//     //     3, 2, 1, -1,
//     //     4, 3, 6, 5,
//     //     1, 2, 7, 8};

//     // A = Matrix(4, a_val);
//     // B = Matrix(4, b_val);

//     // double *c_val = new double[16]{20, 22, 50, 48,
//     //                                44, 54, 114, 108,
//     //                                40, 58, 110, 102,
//     //                                16, 26, 46, 42};
//     // Matrix answer = Matrix(4, c_val);

//     // Matrix C = A * B;

//     // assert(C == answer);

//     // delete[] a_val;
//     // delete[] b_val;
//     // delete[] c_val;

//     // // multiply matrix by tuple
//     // a_val = new double[16]{
//     //     1, 2, 3, 4,
//     //     2, 4, 4, 2,
//     //     8, 6, 4, 1,
//     //     0, 0, 0, 1};

//     // A = Matrix(4, a_val);
//     // auto b = tuple::tuple(1, 2, 3, 1);

//     // assert(A * b == tuple::tuple(18, 24, 33, 1));

//     // delete[] a_val;
//     // delete[] b_val;
//     // delete[] c_val;

//     // // identity matrix
//     // Matrix identity = matrix::eye(4);
//     // a_val = new double[16]{
//     //     0, 1, 2, 4,
//     //     1, 2, 4, 8,
//     //     2, 4, 8, 16,
//     //     4, 8, 16, 32};

//     // A = Matrix4x4(a_val);

//     // assert(A * identity == A);

//     // delete[] a_val;
//     // delete[] b_val;
//     // delete[] c_val;

//     // // transpose
//     // A = Matrix4x4(new double[16]{0, 9, 3, 0,
//     //                              9, 8, 0, 8,
//     //                              1, 8, 5, 3,
//     //                              0, 0, 5, 8});

//     // Matrix A_tranpose = Matrix4x4(new double[16]{0, 9, 1, 0,
//     //                                              9, 8, 8, 0,
//     //                                              3, 0, 5, 5,
//     //                                              0, 8, 3, 8});

//     // assert(A.T() == A_tranpose);
//     // assert(identity.T() == identity);

//     // delete[] a_val;
//     // delete[] b_val;
//     // delete[] c_val;

//     // // inverting matrices

//     // // determinant of a 2x2
//     // A = Matrix2x2(new double[4]{1, 5, -3, 2});
//     // assert(A.determinant() == 17);

//     // // submatrix
//     // A = Matrix3x3(new double[9]{1, 5, 0,
//     //                             -3, 2, 7,
//     //                             0, 6, -3});
//     // B = Matrix2x2(new double[4]{-3, 2, 0, 6});

//     // assert(A.submatrix(0, 2) == B);

//     // A = Matrix4x4(new double[16]{
//     //     -6, 1, 1, 6,
//     //     -8, 5, 8, 6,
//     //     -1, 0, 8, 2,
//     //     -7, 1, -1, 1});

//     // B = Matrix3x3(new double[9]{-6, 1, 6, -8, 8, 6, -7, -1, 1});

//     // assert(A.submatrix(2, 1) == B);

//     // // minor
//     // A = Matrix3x3(new double[9]{3, 5, 0,
//     //                             2, -1, -7,
//     //                             6, -1, 5});

//     // assert(A.minor(1, 0) == 25);

//     // // cofactor
//     // A = Matrix3x3(new double[9]{3, 5, 0,
//     //                             2, -1, -7,
//     //                             6, -1, 5});

//     // assert(A.minor(0, 0) == -12 && A.cofactor(0, 0) == -12);
//     // assert(A.minor(1, 0) == 25 && A.cofactor(1, 0) == -25);

//     // // determinants of 3x3 and 4x4 matrices
//     // A = Matrix3x3(new double[9]{1, 2, 6,
//     //                             -5, 8, -4,
//     //                             2, 6, 4});

//     // assert(
//     //     A.cofactor(0, 0) == 56 && A.cofactor(0, 1) == 12 && A.cofactor(0, 2) == -46 && A.determinant() == -196);

//     // A = Matrix4x4(new double[16]{-2, -8, 3, 5,
//     //                              -3, 1, 7, 3,
//     //                              1, 2, -9, 6,
//     //                              -6, 7, 7, -9});

//     // assert(
//     //     A.cofactor(0, 0) == 690 && A.cofactor(0, 1) == 447 && A.cofactor(0, 2) == 210 && A.cofactor(0, 3) == 51 && A.determinant() == -4071);

//     // // check if a matrix is invertible
//     // A = Matrix4x4(new double[16]{6, 4, 4, 4,
//     //                              5, 5, 7, 6,
//     //                              4, -9, 3, -7,
//     //                              9, 1, 7, -6});

//     // assert(A.determinant() == -2120 && A.is_invertible());

//     // A = Matrix4x4(new double[16]{-4, 2, -2, -3,
//     //                              9, 6, 2, 6,
//     //                              0, -5, 1, -5,
//     //                              0, 0, 0, 0});

//     // assert(A.determinant() == 0 && !A.is_invertible());

//     // // inverse
//     // A = Matrix4x4(new double[16]{
//     //     -5, 2, 6, -8,
//     //     1, -5, 1, 8,
//     //     7, 7, -6, -7,
//     //     1, -3, 7, 4});

//     // B = Matrix4x4(new double[16]{0.21805, 0.45113, 0.24060, -0.04511,
//     //                              -0.80827, -1.45677, -0.44361, 0.52068,
//     //                              -0.07895, -0.22368, -0.05263, 0.19737,
//     //                              -0.52256, -0.81391, -0.30075, 0.30639});

//     // assert(A.determinant() == 532 && A.cofactor(2, 3) == -160 && A.cofactor(3, 2) == 105 && A.inverse() == B);

//     // A = Matrix4x4(new double[16]{8, -5, 9, 2,
//     //                              7, 5, 6, 1,
//     //                              -6, 0, 9, 6,
//     //                              -3, 0, -9, -4});

//     // B = Matrix4x4(new double[16]{-0.15385, -0.15385, -0.28205, -0.53846,
//     //                              -0.07692, 0.12308, 0.02564, 0.03077,
//     //                              0.35897, 0.35897, 0.43590, 0.92308,
//     //                              -0.69231, -0.69231, -0.76923, -1.92308});

//     // assert(A.inverse() == B);

//     // A = Matrix4x4(new double[16]{9, 3, 0, 9,
//     //                              -5, -2, -6, -3,
//     //                              -4, 9, 6, 4,
//     //                              -7, 6, 6, 2});

//     // B = Matrix4x4(new double[16]{-0.04074, -0.07778, 0.14444, -0.22222,
//     //                              -0.07778, 0.03333, 0.36667, -0.33333,
//     //                              -0.02901, -0.14630, -0.10926, 0.12963,
//     //                              0.17778, 0.06667, -0.26667, 0.33333});

//     // assert(A.inverse() == B);

//     // // matrix * inverse = identity
//     // A = Matrix4x4(new double[16]{3, -9, 7, 3,
//     //                              3, -8, 2, -9,
//     //                              -4, 4, 4, 1,
//     //                              -6, 5, -1, 1});

//     // assert(A.inverse() * A == identity);

//     return 0;
// }