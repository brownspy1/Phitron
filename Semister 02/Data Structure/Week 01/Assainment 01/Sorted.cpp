// // Created by M.Mahadi on 2024-07-08 21:13:57
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while (n--)
//     {
//         int count;
//         cin>>count;
//         int array[count];
//         int sor[count];
//         for (int i = 0; i < count; i++)
//         {
//             cin>>array[i];
//             sor[i]=array[i];
//         }
//         sort(sor,sor+count);
//         bool flag = true;
//         for (int i = 0; i < count-1; i++)
//         {
//             if (array[i]>array[i+1])
//             {
//                 flag = false;
//                 break;
                
//             }
            
            
//         }

//         if (flag) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
        
        
//     }
    
//     return 0;
// }
// Created by M.Mahadi on 2024-07-08 21:13:57
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int count;
        cin>>count;
        int array[count];
        int sor[count];
        for (int i = 0; i < count; i++)
        {
            cin>>array[i];
            sor[i]=array[i];
        }
        sort(sor,sor+count);
        bool flag = true;
        for (int i = 0; i < count; i++)
        {
            if (array[i]!=sor[i])
            {
                flag = false;
                break;
                
            }
            
            
        }

        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
    return 0;
}
