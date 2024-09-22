// Created by M.Mahadi on 2024-07-05 21:20:03
// Time Complexity Grammar has 2 rule
// 1 . always calculator for wrest case
// 2 . Ignore the constant like: N*2,N/2

#include <iostream>
using namespace std;
int add(int n,int x){
    int n = 100; //O(1)
    int x = 10; //O(1)
    int add = n+x; //O(1)
    // this programm total Time Complexity is O(1)
}
void forloop(){
    int N ; //O(1)
    cin>>N; //O(1)
    for (int i = 0; i < N; i++)
    {
        cout<<"Hello world"<<endl; // O(N)
    }
    //O(1+1+N) jehetu N sorbocco tai O(N)
    // this programm total Time Complexity is O(N)
}
void loop(){
    int N;//O(1)
    int M;//O(1)
    cin>>N>>M;//O(1)
    for (int i = 0; i < N; i++)
    {
        cout<<"Hello world"<<endl; // O(N)
    }
    for (int i = 0; i < M*2; i++)
    {
        cout<<"This is me!"<<endl; // O(M)
    }
    // O(1+1+1+N+M*2) jehetu constant value ignore tai M O(1) is so small so its ignore and O(N+M)
    // this programm total Time Complexity is O(N+M)
    
}
int main(){
    
    return 0;
}