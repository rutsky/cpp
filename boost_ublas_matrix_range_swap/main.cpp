#include <iostream>

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main()
{
  namespace ublas = boost::numeric::ublas;
  typedef ublas::matrix<double> matrix_type;
  typedef ublas::vector<double> vector_type;
  
  matrix_type m1(3, 3), m2(3, 3);
  for (size_t r = 0; r < 3; ++r)
    for (size_t c = 0; c < 3; ++c)
      m1(r, c) = m1.size1() * r + c;
  
  m2 = -m1;
  
  std::cout << "m1: " << m1 << "\n";
  std::cout << "m2: " << m2 << "\n";
  
  ublas::matrix_range<matrix_type> mr1(m1, ublas::range(0, 2), ublas::range(0, 2));
  ublas::matrix_range<matrix_type> mr2(m2, ublas::range(1, 3), ublas::range(1, 3));
  
  std::cout << "mr1: " << mr1 << "\n";
  std::cout << "mr2: " << mr2 << "\n";
  
  mr1.swap(mr2);

  std::cout << "mr1: " << mr1 << "\n";
  std::cout << "mr2: " << mr2 << "\n";
  
  std::cout << "m1: " << m1 << "\n";
  std::cout << "m2: " << m2 << "\n";
}
