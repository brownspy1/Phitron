// // Created by M.Mahadi on 2024-04-27 11:20:41
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char s[10001];
//     int count = 26;
//     scanf("%s",&s);
//     for (int i = 0; i <count; i++)
//     {
//         int a=0;
//         if (s[i]!=s[i+1])
//         {
//             printf("%c - 1\n",s[i]);
//         }else{
//             a++;
//             printf("%c - %d\n",s[i],a);
//         }
        
//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
    char word[10001]; // Space to store the input word (up to 10000 letters)
    int counts[26] = {0};  // Our "tally sheet" for letters 'a' to 'z'


    scanf("%s", word);

    // Go through the word letter by letter
    for (int i = 0; word[i] != '\0'; i++) {
        char letter = word[i];

        // Only count lowercase letters
        if (letter >= 'a' && letter <= 'z') {
            counts[letter - 'a']++; // Clever trick to map 'a' to 0, 'b' to 1, etc.
        }
    }


    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c - %d\n", 'a' + i, counts[i]);
        }
    }

    return 0;
}
