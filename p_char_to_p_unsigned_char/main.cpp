int main()
{
  char *pChar = 0;
  unsigned char *pUChar = 0;
  
  //pChar = pUChar;                         // g++: error: invalid conversion from ‘unsigned char*’ to ‘char*’
  pChar = (char *)pUChar;
  //pChar = static_cast<char *>(pUChar);    // error: invalid static_cast from type ‘unsigned char*’ to type ‘char*’
  pChar = reinterpret_cast<char *>(pUChar);
}
