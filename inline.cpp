#include<iostream>
using namespace std;

/// @brief 
/// @param a 
/// @param b 
/// @return 
inline int max(int a , int b ){
    return (a > b)?a : b;
}

int main() {
     int a , b;
     cin >> a >>b;
     int c = max(a,b);
     cout <<c <<endl;
    
     return 0;
}