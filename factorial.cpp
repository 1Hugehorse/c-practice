
#include <iostream>;
using namespace std;
  #include <c.math>;
  int main()
  {
  int a,answer;
  int fac = 1;
  cout << "Welcome to the factorial program, please enter in the number you wish to factorize!" \n;
  cin >> a;
  while (fac<a)
                {
               answer = fac;
                fac += 1;
                answer = fac * answer;
                }
  cout << fax << " is your answer";
  return(0);               
  }
