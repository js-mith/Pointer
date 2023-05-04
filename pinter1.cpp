#include <iostream>
using namespace std;

int main()
{
    /*
    int i;

    cout << i << endl;

    i++;
    cout << i << endl;

    int *p = 0;
    cout << p << endl;

    cout << *p << endl;
    

   int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;
 cout<< p << endl;
 cout<< q <<endl;
  cout<< *p <<endl;

  int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;
*/

float f = 10.5;
float p = 2.5;
float * ptr = &f;
(*ptr)++;

*ptr = p;
cout<< *ptr << " " << f << " " << p;    
    return 0;
}