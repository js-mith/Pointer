#include<iostream>
using namespace std;

void f(const int * p){
   
}

int main() {
     int const i =10;
     int const * p = &i;

     cout << *p <<endl;

     int j =12;
     int*p3 = &j;
     f(p3);
     int const *p2 = &j;
     j++;
     cout<< j <<endl;
     return 0;
}