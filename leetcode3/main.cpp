#include <iostream>
#include <vector>
#include"solution.h"
using namespace std;



int main() {
    solution1 lei;
    vector<int>w(3,1);
    vector<vector<int>>a{3,w};
    a[0][0]=1;
    a[0][1]=4;
    a[0][2]=7;
    a[1][0]=2;
    a[1][1]=5;
    a[1][2]=8;
    a[2][0]=3;
    a[2][1]=6;
    a[2][2]=9;

   cout<<boolalpha<<lei.Find(1,a)<<endl;
    return 0;
}
