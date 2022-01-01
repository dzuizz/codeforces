#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    /* Polycarp urgently needs a shovel! He comes to the shop and chooses an appropriate one. The shovel that Policarp chooses is sold for k burles. Assume that there is an unlimited number of such shovels in the shop.
    In his pocket Polycarp has an unlimited number of "10-burle coins" and exactly one coin of r burles (1 ≤ r ≤ 9).
    What is the minimum number of shovels Polycarp has to buy so that he can pay for the purchase without any change? It is obvious that he can pay for 10 shovels without any change (by paying the requied amount of 10-burle coins and not using the coin of r burles). But perhaps he can buy fewer shovels and pay without any change. Note that Polycarp should buy at least one shovel.
    */
    ll k, r;
    cin >> k >> r;
    cout << (k / 10) + (k % 10 >= r ? 1 : 0);
    return 0;   

}