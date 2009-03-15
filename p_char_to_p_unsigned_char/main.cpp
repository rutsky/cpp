int main()
{
  char *pChar = 0;
  unsigned char *pUChar = 0;
  
  // g++ 4.3.3: error: invalid conversion from ‘unsigned char*’ to ‘char*’
  //pChar = pUChar;
  
  pChar = (char *)pUChar;
  
  // g++ 4.3.3: error: invalid static_cast from type ‘unsigned char*’ to type ‘char*’
  //pChar = static_cast<char *>(pUChar);
  
  pChar = reinterpret_cast<char *>(pUChar);
  
  // g++ 4.3.3: error: invalid conversion from ‘char*’ to ‘unsigned char*’
  //pUChar = pChar;
  
  pUChar = (unsigned char *)pChar;
  
  // g++ 4.3.3: error: invalid static_cast from type ‘char*’ to type ‘unsigned char*’
  //pUChar = static_cast<unsigned char *>(pChar);
  
  pUChar = reinterpret_cast<unsigned char *>(pChar);
}
