
#include <iostream>
using namespace std;



  int main()
    
  {
  int a,answer=1;
  int fac = 1;
  cout << "Welcome to the factorial program, please enter in the number you wish to factorize!";
  cin >> a;
  while (fac<a)
                {
                fac += 1;
                answer*=fac;
                cout << fac;
                }
    
  cout << answer << " is your answer";
    
  return(0);               
  }
