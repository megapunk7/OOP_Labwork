#include <iostream>
 
using namespace std;

inline int product(int x, int y)
{
   return x*y;
}
// Main function for the program
int main()
{
   cout << "product (20,10): " << product(20,10) << endl;
   cout << "product (0,200): " << product(0,20) << endl;
   cout << "product (100,1010): " << product(10,5) << endl;
   
   return 0;
}