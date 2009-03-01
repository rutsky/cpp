namespace function
{
  template< class T >
  void f( T );

  template<>
  inline
  void f( int ) {}

  template<>
  inline
  void f( float ) {}

  template<>
  inline
  void f( double ) {}
  
  template< class T >
  struct S
  {
  };
  
  template< class T >
  bool operator==( S<T> const &a, S<T> const &b )
  {
    return false;
  }
}
