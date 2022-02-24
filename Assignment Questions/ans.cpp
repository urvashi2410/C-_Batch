#include <iostream>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;

class pigLatin
{
public:
    string convertPigLatin(string s)
    {
        string temp = "";
        string rem = "";
        int n = s.length();
        // return ans2;
        string ans1 = "";
        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
        {
            ans1.append("y" + s);
        }
        if (s[n - 1] == 'a' || s[n - 1] == 'e' || s[n - 1] == 'o' || s[n - 1] == 'u' || s[n - 1] == 'i')
        {
            ans1.append("yay");
        }
        else
        {
            ans1.append("ay");
        }
        if(ans1[0] == 'y' && ans1[n-1] == 'y'){
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
            ans1 = rem;
            ans1.append(temp + "ay");
        }

        return ans1;
    }
};

int main()
{
    string s;
    cin >> s;
    pigLatin pig;
    string ans = pig.convertPigLatin(s);
    cout << ans;
}