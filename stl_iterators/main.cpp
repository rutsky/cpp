#include <iterator>
#include <iostream>
#include <iomanip>

#include <vector>
#include <map>
#include <list>
#include <string>

template< class Container >
class TestIterators
{
private:
  typedef Container                           container_type;
  typedef typename container_type::value_type value_type;
  typedef typename container_type::iterator   iterator_type;

#define TEST(expr) (std::cout << #expr ": " << std::boolalpha << (expr) << "\n")

public:
  TestIterators()
  {
    container_type c;

    TEST(c.begin() == c.end());
    
    // Checking moving after containers end.
    TEST(--c.begin() == c.begin());
    TEST(--(--c.begin()) == --c.begin());
    TEST(--(--c.begin()) == c.begin());
    TEST(--c.begin() == c.end());

    // Checking moving before containers begin.
    TEST(++c.end() == c.end());
    TEST(++(++c.end()) == ++c.end());
    TEST(++(++c.end()) == c.end());
    TEST(++c.end() == c.begin());
  }

#undef TEST
};

/* The main program function */
int main()
{
  std::cout << "    std::vector<int>:\n";
  TestIterators<std::vector<int> > vector_of_int;
  std::cout << "\n";
  
  // Leads to segmentation fault on g++'s STL.
  //std::cout << "    std::map<int, int>:\n";
  //TestIterators<std::map<int, int> > map_of_int_to_int; 
  //std::cout << "\n";
  
  // Leads to segmentation fault on g++'s STL.
  //std::cout << "    std::multimap<int, int>:\n";
  //TestIterators<std::multimap<int, int> > multimap_of_int_to_int;
  //std::cout << "\n";
  
  std::cout << "    std::list<int>:\n";
  TestIterators<std::list<int> > list_of_int;
  std::cout << "\n";
  
  std::cout << "    std::string:\n";
  TestIterators<std::string> string;
  std::cout << "\n";
}
