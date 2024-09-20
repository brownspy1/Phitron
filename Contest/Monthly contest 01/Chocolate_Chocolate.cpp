// // Created by M.Mahadi on 2024-09-20 Time:21-42-06
// #include <bits/stdc++.h>
// using namespace std;
// int chocolate(int peace,int wrap)
// {
//     if (peace < 3) return 0;


        
    
// } 
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int taka;
//         cin >> taka;
//         int pic = taka/5;
//         int wrap = pic/3;
//         cout << chocolate(pic,wrap);
//     }

//     return 0;
// }

// Created by M.Mahadi on 2024-09-20 Time:21-42-06
#include <bits/stdc++.h>
using namespace std;

int chocolate(int peace) {
    int total_chocolates = peace; 
    int wrap = peace; 

    
    while (wrap >= 3) {
        int new_chocolates = wrap / 3;
        total_chocolates += new_chocolates; 
        wrap = wrap % 3 + new_chocolates; 
    }

    return total_chocolates;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int taka;
        cin >> taka;
        int pic = taka / 5; 
        cout << chocolate(pic) << '\n'; 
    }

    return 0;
}
