#include<iostream>
using namespace std;

int main() {
     int i = 10;
     cout<<&i<<endl;
     int * p = &i;

     cout<<sizeof(p) << endl;
     cout<< p <<endl;

     cout<< *p << endl;

     float f = 10.2;
     float * pf = &f;
     cout<< &f <<endl;
     cout<< pf <<endl; 

     cout<< *pf << endl;
     return 0;
}