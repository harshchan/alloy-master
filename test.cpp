#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,a,b;
    map<int,int>v;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        v.insert({a,b});
    }
    set<int> st_val, numb;
    for(auto x:v)
    {
        st_val.insert(x.second);
    }
    for(int i=0;i<n;i++)
    {
        numb.insert(i);
    }
    vector<int>result;
    set_difference(st_val.begin(), st_val.end(), numb.begin(), numb.end(), inserter(result, result.end()));
    int x=result[0];
    vector<int> fin;
    fin.push_back(x);
    for(i=0;i<n;i++)
    {   
        fin.push_back(v[x]);
        x=v[x];
    }
    
    for(int i=0;i<n;i++)
                   cout<<fin[i]<<endl;
    return 0;
}

