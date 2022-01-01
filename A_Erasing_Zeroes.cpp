#include <iostream>
using namespace std;
typedef long long ll;

int t, tracker, temptracker;
string s;
bool found1=false;

int main(){
    cin >> t;
    while (t--){
        tracker = 0;
        temptracker = 0;
        found1 = false;
        cin >> s;
        for(int i=0;i<s.length();i++){
            if(!found1 && int(s[i])==49){
                found1 = true;
            }else if(found1 && int(s[i])==48){
                temptracker++;
            }else if(found1 && int(s[i])==49){
                tracker += temptracker;
                temptracker = 0;
            }
        }
        cout << tracker << endl;
    }
    
}