//
// Created by Graham on 2022/3/28.
//
#include<iostream>
#include<vector>
#include "solution.h"
using namespace std;

bool solution1::Find(int target,vector<vector<int>>array){
    if(array.empty() || array[0].empty())return false;

    int i=0,j=array[0].size()-1;
    while(i<=array.size()-1&&j>=0)
    {
        if(array[i][j]==target)return true;
        if(array[i][j]>target) j--;
        else i++;
    }
    return false;
}