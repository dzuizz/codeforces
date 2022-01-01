/*********************************HEADER**********************************

Topic    : Graph Algorithm (Shortest Path Algorithm)
Problem  : https://vjudge.net/contest/455106
Last     : https://ideone.com/ZPCFVb

**************************************************************************/

/*
Data Structure:
- Vector -> an array (but dynamic)
- Queue -> FIFO (only access the first element)
- Priority_queue -> Priority (only access the priority) 
- Stack -> LIFO (only access the last element)
- Set -> Non-duplicating
- Multiset -> Duplicating
*/

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
using namespace std;

#define fi first
#define se second

typedef pair<int, int> ii;
typedef pair<ii, int> iii;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    
    iii students[n]; // {Time Enter, ID, Time Leave}
    int ans[n];
    memset(ans, 0, sizeof(ans));
    
    for(int i = 0; i < n; i++) {
      students[i].fi.se = i;
      cin >> students[i].fi.fi >> students[i].se;
    }
    sort(students, students + n); 
    
    int cur_time = students[0].fi.fi;
    int ind = 0;
    
    while(ind < n) {
      iii student = students[ind];
      if(student.fi.fi > cur_time) {
        cur_time = student.fi.fi;
      }
      if(student.se >= cur_time) {
        ans[student.fi.se] = cur_time;
        cur_time++;
      }
      ind++;
    }
    
    for(int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
}








