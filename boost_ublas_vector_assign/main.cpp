#include <iostream>

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main()
{
  typedef boost::numeric::ublas::matrix<double> matrix_type;
  typedef boost::numeric::ublas::vector<double> vector_type;
  
  vector_type v(3);
  v[0] = -1, v[1] = 3, v[2] = 4;
  
  std::cout << "v: " << v << "\n";
  std::cout << "v /= v[0]: " << (v /= v[0]) << "\n";
  std::cout << "v: " << v << "\n";
  std::cout << "v /= -1: " << (v /= -1) << "\n";
  std::cout << "v: " << v << "\n";
  
  /* Output:
    v: [3](-1,3,4)
    v /= v[0]: [3](1,3,4)
    v: [3](1,3,4)
    v /= -1: [3](-1,-3,-4)
    v: [3](-1,-3,-4)
   */
}
