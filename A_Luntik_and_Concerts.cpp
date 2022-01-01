#include <iostream>
using namespace std;
typedef long long ll;

int t, a, b, c, a2, b2, c2;

int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        a2 = a, b2 = b, c2 = c;
        a %= 2;
        b %= 2;
        c %= 2;
        if(a == 0)
        {
            if(b == 0)
            {
                if(c == 0)
                {
                    cout << "0\n";
                }
                else
                {
                    cout << "1\n";
                }
            }
            else
            {
                if(c == 0)
                {
                    cout << "0\n";
                }
                else
                {
                    cout << "1\n";
                }
            }
        }
        else
        {
           if(b == 0)
            {
                if(c == 0)
                {
                    cout << "1\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
            else
            {
                if(c == 0)
                {
                    cout << "1\n";
                }
                else
                {
                    cout << "0\n";
                }
            } 
        }
    }
}