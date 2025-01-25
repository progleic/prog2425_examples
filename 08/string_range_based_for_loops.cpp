#include <string>
#include <iostream>

using std::string;

int main()
{
   string s = "abcde";

   // Convert string to upper case
   for (char &c : s)
   {
      c = toupper(c);
   }

   // Iterate characters and print them
   for (char c : s)
   {
      std::cout << c;
   }
   std::cout << '\n';
}
