
#include <iostream>;
using namespace std;
  #include <c.math>;
  int main()
  {
  int a,fax;
  int fac = 1;
  cout << "Welcome to the factorial program, please enter in the number you wish to factorize!" \n;
  cin >> a;
  while (fac<a)
                {
               fax = fac;
                fac += 1;
                fax = fac * fax;
                }
  cout << fax << " is your answer";
  return (               
  }
