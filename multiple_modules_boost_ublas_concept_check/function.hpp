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
}
