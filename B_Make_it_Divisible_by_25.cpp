#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int t;
string s;

int main(){
    cin >> t;
    while(t--){
        cin >> s;
        int zeros = 0, leng = s.length(), ind = 0;
        bool five=false;
        if(((s[leng-1]-'0') + (s[leng-2]-'0')*10) % 25 == 0) cout << 0 << endl;
        else{
            for(int i=s.length()-1;i>=0;i--){
                char ch = s[i];
                if(ch == '0') zeros++;
                else if(ch == '5') five = true;
                if( ((ch == '2' || ch == '7') && five) || (ch == '5' && zeros==1) ){
                    ind = i;
                    break;
                }
                if(zeros > 1){
                    ind = i;
                    break;
                }
            }
            cout << leng-ind-2 << endl;
        }
    }
}