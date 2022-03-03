#include <iostream>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;

// echo
class pigLatin
{
public:
    // string nextWord(string S, int i){
    //     string word = "";
    //     char l;
    //     l = S[i];

    //     while(l != ' ' && i < S.size()){
    //         word += l;
    //         i++;

    //         if(i < S.size()){
    //             l = S[i];
    //         }
    //     }
    //     return word+l;
    // }

    string converpiglatinsentence(string str)
    {
        string word("");
        string ans("");
        for (int i = 0; i <= str.size(); i++)
        {
            if (i == str.size())
            {
                ans += convertPigLatin(word);
            }
            else if (str[i] == ' ')
            {
                ans += convertPigLatin(word);
                word = "";
                ans += ' ';
            }
            else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            {
                ans += convertPigLatin(word);
                word = "";
                ans += str[i];
            }
            else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                word += str[i];
            }
        }
        return ans;
    }

    string convertPigLatin(string s)
    {
        string temp = "";
        string rem = "";
        int n = s.length();
        // return ans2;
        string ans1 = "";
        if (s == "")
        {
            return "";
        }

        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
        {
            ans1.append("y" + s);
        }
        // cout << ans1 << endl;
        if (s[n - 1] == 'a' || s[n - 1] == 'e' || s[n - 1] == 'o' || s[n - 1] == 'u' || s[n - 1] == 'i')
        {
            ans1.append("yay");
            // cout << ans1 << endl;
        }
        else
        {
            ans1.append("ay");
        }
        // cout << ans1 << endl;
        int m = ans1.size();
        if (ans1[0] == 'y' && ans1[m - 1] == 'y' && m > n)
        {
            return ans1;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                // Case-1:
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o')
                {
                    temp = s.substr(0, i);
                    rem = s.substr(i, s.size());
                    break;
                }
            }
            ans1 = "";
            ans1 = rem;
            ans1.append(temp + "ay");
        }

        return ans1;
    }

    // string PigLatinSentence(string S){
    //     int i = 0;
    //     int len = S.size();

    //     string word = "";
    //     string pWord = "";
    //     string pSen = "";
    //     string w = "";
    //     char l;
    //     while(i < len){
    //         w = nextWord(S, i);
    //         word = w.substr(0, w.size());
    //         l = w[w.size() - 1];
    //         i += word.size() + 1;
    //         pWord = convertPigLatin(word);
    //         pSen += pWord + l;
    //     }
    //     // cout << pWord << endl;
    //     return pSen;
    // }
};

int main()
{
    // string s;
    // cin >> s;
    pigLatin pig;
    // string ans = pig.convertPigLatin(s);
    // cout << ans;
    string newAns = pig.converpiglatinsentence("The quick brown fox...");
    cout << newAns << endl;
}