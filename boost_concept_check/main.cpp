#include <boost/concept_check.hpp>

template< class InputIterator >
void f()
{
  BOOST_CONCEPT_ASSERT((boost::InputIterator<InputIterator>));
}

int main()
{
}
