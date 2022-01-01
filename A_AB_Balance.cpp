#include <iostream>
using namespace std;
typedef long long ll;

int t;
string s;

int cnt(string a, string b){
    int leng = b.length(), res = 0;
    for(int i=0;i<a.length()-leng;i++) {
        if(a.substr(i, leng) == b) res++;
    }
    return res;
}

int main() {
    cin >> t;
    while(t--){
        cin >> s;
        int ab = cnt(s, "ab");
        int ba = cnt(s, "ba");
        if(ab > ba)
        {
            int ind = 0;
            while(ab > ba)
            {
                if(s[ind] == 'a' && s[ind+1] == 'b')
                {
                    s[ind++] = 'b';
                    ab--;
                }
                else if(s[ind] == 'a' && s[ind+1] == 'a')
                {
                    s[ind++] = 'b';
                    ba++;
                }
                ind++;
            }
        }
        else
        {
            int ind = 0;
            while(ba > ab)
            {
                if(s[ind] == 'b' && s[ind+1] == 'a')
                {
                    s[ind] = 'a';
                    ba--;
                }
                ind++;
            }
        }
        cout << s << endl;
    }
}