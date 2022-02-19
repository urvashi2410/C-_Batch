#include <iostream>
#include<string>
#include<string.h>
#include<cctype>
using namespace std;

class pigLatin{
    public:
        string convertPigLatin(string s){
            string temp = "";
            string rem = "";
            string ans1 = "";
            string ans = "";
            for(int i = 0; i < s.length(); i++){
                // Case-1:
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o'){
                    if(i == 0){
                        ans1.append('y' + s);
                    }
                    else if(i == s.length()-1){
                        ans1.append("yay");
                    }
                    temp = s.substr(0, i);
                    rem = s.substr(i, s.size());
                    break;
                }
                else{
                    ans1.append("ay");
                }
            }
            if(ans == ""){
                string ans = rem;
                ans.append(temp);
                // ans.push_back('ay');
                ans.append("ay");
                return ans;
            }
            return ans1;
}
};

int main(){
    string s;
    cin >> s;
    pigLatin pig;
    string ans = pig.convertPigLatin(s);
    cout << ans;
}