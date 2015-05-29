#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)

using namespace std;
typedef long long int ll;
typedef vector<int> VI;
typedef pair<int, int> PI;
const double EPS=1e-9;




int main(void){
  int p;
  cin >> p;
  typedef unsigned long long ull;
  ull sum = 1;
  REP (i, 0, p) {
    sum *= 10;
  }
  sum = sum;
  ull t = 6;
  REP (i, 0, p - 1) {
    t *= 9;
  }
  sum -= t;
  sum --;
  cout << sum << endl;
}
