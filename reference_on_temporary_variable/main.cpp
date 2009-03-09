struct A
{
};

template< class T >
void f( T & )
{
}

int main()
{
  //f(A());
  // error: no matching function for call to ‘f(A)’
  // note: candidates are: void f(T&) [with T = A]
  
  A a;
  f(a);
}
