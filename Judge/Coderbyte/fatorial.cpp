#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  if(num == 1 || num == 0) num = 1;
  else{
    num *= FirstFactorial(num-1);
  }
  
  // code goes here  
  return num;

}

// keep this function call here
int main(void) { 

   
  cout << FirstFactorial(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
