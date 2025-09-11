#include <iostream>
using namespace std;

struct Distance {
    int km; 
    int m;  
};

int main() {
    Distance T1 = {10, 7};  
    Distance T2 = {2, 8};   
    Distance T3;

    T3.m = T1.m + T2.m;
    T3.km = T1.km + T2.km + (T3.m / 1000); 
