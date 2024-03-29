#include <iostream>
#include <string>
using namespace std;
int main()
{
  string string1, string2;
  cin >> string1 >> string2;
  if (string1 < string2)
      cout << "-1" << endl;

  else if (string1 > string2)
      cout << "1" << endl;

  else
      cout << "0" << endl;
    return 0;
}