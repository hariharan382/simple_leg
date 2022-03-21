#include <iostream>
#include "eigen/Eigen/Dense"
using namespace Eigen;
using namespace std;

MatrixXd m(2,2);

int main()
{
       m(0,0) = 3;
       m(1,0) = 2.5;
       m(0,1) = -1;
       m(1,1) = m(1,0) + m(0,1);
       cout << m << endl;
}