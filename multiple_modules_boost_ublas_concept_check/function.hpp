namespace function
{
  template< class T >
  void f( T );

  template<>
  void f( int ) {}

  template<>
  void f( float ) {}

  template<>
  void f( double ) {}
}
