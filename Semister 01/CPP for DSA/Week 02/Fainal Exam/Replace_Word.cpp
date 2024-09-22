// Created by M.Mahadi on 2024-06-27 19:50:26
#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    while (count--)
    {
        string word;
        string rep;
        cin>>word>>rep;
        int index = word.find(rep);
        int countr = rep.length();
        while (index !=-1)
        {
            word.replace(index,countr,"#");
            index = word.find(rep);
        }
            cout<<word<<endl;
        
    }
        
    
    return 0;
}