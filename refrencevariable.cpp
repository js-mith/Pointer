#include<iostream>
using namespace std;
void increment(int& n){
    n++;
}
 // not to do this error
int& f(int i){
    int a = i;
    return a;
}

int main() {
     int i =10;

     int &k1 = f(i);
     increment(i);
     cout<< i <<endl;
     int &j=i;
     i++;
     cout << j <<endl;
     j++;
     cout<<i <<endl;

     int k = 100;
     j = k;
      cout<< j <<endl;
      cout<< i <<endl;
     return 0;
}