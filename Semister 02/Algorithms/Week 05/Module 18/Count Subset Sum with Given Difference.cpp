// Created by M.Mahadi on 2024-10-06 Time:20-14-52
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int diff;cin>>diff;
    int w = (diff+s)/2;
    int dp[n+1][w+1];
    dp[0][0] = 1;
    for (int i = 1; i <= w; i++)
    {
        dp[0][i] = 0;
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= w; j++){
                if (a[i-1] <= j)
                {
                    int op1 = dp[i-1][j-a[i-1]];
                    int op2 = dp[i-1][j];
                    dp[i][j] = op1+op2;
                }else
                {
                    int op = dp[i-1][j];
                    dp[i][j] = op;
                }
                
                
            }
         }
    cout<<dp[n][w];
    return 0;
}

/*তুমি যে সমস্যার সমাধানটি তৈরি করছো তা একদম ঠিক পথে। মূল চিন্তাটা হলো দুইটি subset খুঁজে বের করা, যাদের মধ্যে একটির সমষ্টি `s1` এবং অন্যটির সমষ্টি `s2`, এবং তাদের মধ্যে ডিফারেন্স `dif` হবে। তবে তোমার বর্তমান সলিউশনে কিছু ছোটখাটো ভুল এবং অপূর্ণতা থাকতে পারে।

তুমি সমাধানে যা করেছো, সেটার মূল সূত্র ছিল:
- \( s1 - s2 = dif \) ... (1)
- \( s1 + s2 = totalsum \) ... (2)

যখন তুমি দুইটি সমীকরণ যোগ করছো, তখন:
- \( 2s1 = totalsum + dif \)

এখানে থেকে \( s1 \)-এর মান পেয়ে যাচ্ছো:
- \( s1 = \frac{totalsum + dif}{2} \)

এখন, এখানে একটা গুরুত্বপূর্ণ বিষয় হলো:
1. \( (totalsum + dif) \) এই মানটি জোড় সংখ্যা হতে হবে, কারণ \( s1 \)-এর মান পূর্ণসংখ্যা হতে হবে। যদি এটি বিজোড় সংখ্যা হয়, তাহলে \( s1 \)-এর সমাধান সম্ভব নয়, অর্থাৎ কোনো সাবসেট পাওয়া যাবে না।
2. এরপর আমরা চেক করবো, \( s1 \)-এর সমষ্টি তৈরি করার কতগুলো উপায় আছে।

### কোড ব্যাখ্যা:
আমার ধারণা, তুমি Dynamic Programming (DP) ব্যবহার করে সাবসেটের সংখ্যা গণনা করতে চাচ্ছো। চলুন এটা একটু সুস্পষ্টভাবে দেখি:

### Step-by-step Process:
1. প্রথমে টোটাল অ্যারের সমষ্টি বের করবে।
2. তারপরে চেক করবে, \( totalsum + dif \) জোড় কিনা। যদি বিজোড় হয়, তাহলে কোনো সমাধান নেই।
3. এরপর \( s1 = (totalsum + dif) / 2 \) বের করবে।
4. \( s1 \)-এর সমষ্টি তৈরি করার উপায় বের করতে হবে। এজন্য DP ব্যবহার করবে।

### সম্ভাব্য কোড:

```cpp
// Created by M.Mahadi on 2024-10-06 Time:18-45-00
#include <bits/stdc++.h>
using namespace std;

int countSubsetsWithSum(vector<int> &arr, int n, int sum) {
    // DP array to store the count of subsets for each sum
    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    
    // Base case: There's one way to get sum 0 (by selecting no elements)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][sum];
}

int countSubsetDifference(vector<int> &arr, int diff) {
    int totalsum = accumulate(arr.begin(), arr.end(), 0);
    
    // Check if (totalsum + diff) is even
    if ((totalsum + diff) % 2 != 0) {
        return 0; // No solution exists
    }
    
    int s1 = (totalsum + diff) / 2;

    // Now count subsets with sum s1
    return countSubsetsWithSum(arr, arr.size(), s1);
}

int main() {
    vector<int> arr = {1, 1, 2, 3};
    int diff = 1;
    
    cout << "Number of subsets with given difference: " 
         << countSubsetDifference(arr, diff) << endl;

    return 0;
}
```

### কোড ব্যাখ্যা:
1. **`countSubsetsWithSum`**: এই ফাংশনটি \( s1 \) সমষ্টি তৈরি করার কয়টা subset আছে তা বের করবে। DP টেবিল ব্যবহার করা হয়েছে। \( dp[i][j] \) দেখায়, প্রথম `i` উপাদান নিয়ে \( j \)-এর সমান subset কয়ভাবে বানানো যায়।
2. **`countSubsetDifference`**: এখানে প্রথমে \( totalsum \) বের করা হয়েছে এবং চেক করা হয়েছে \( totalsum + diff \) জোড় কিনা। যদি বিজোড় হয়, তাহলে সমাধান নেই। এরপর \( s1 \)-এর মান বের করে, \( s1 \)-এর সমান subset তৈরির উপায় গণনা করা হচ্ছে।
3. যদি subset পাওয়া যায়, তাহলে তা প্রিন্ট করছে।

এইভাবে তোমার সমস্যার সমাধান সম্পূর্ণ করা যায়। আশা করি, এই ব্যাখ্যা তোমার সমাধান বুঝতে সহায়ক হবে।*/