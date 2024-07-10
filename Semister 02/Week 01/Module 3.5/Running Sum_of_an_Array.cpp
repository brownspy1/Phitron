// Created by M.Mahadi on 2024-07-10 23:43:41
#include <iostream>
#include <vector>
using namespace std;
void calculate(vector <int> v,int n){
    int cal = 0; 
    for (int i = 0; i < n; i++)
    {
        cal +=v[i];
        cout<<cal<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    calculate(v,n);
    return 0;
}