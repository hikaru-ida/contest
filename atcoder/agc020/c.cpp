#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define DEBUGP(val) cerr << #val << "=" << val << "\n"

using namespace std;
typedef long long int ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PI;

const int W = 4000100;
typedef bitset<W> bs;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  VI a(n);
  REP(i, 0, n) {
    cin >> a[i];
  }
  int tot = 0;
  REP(i, 0, n) {
    tot += a[i];
  }
  if (tot - a[n - 1] <= a[n - 1]) {
    cout << a[n - 1] << endl;
    return 0;
  }
  int margin = tot - 2 * a[n - 1];
  int lim = margin / 2;
  assert (lim < W);
  bs dp;
  dp[0] = true;
  REP(i, 0, n - 1) {
    dp |= dp << a[i];
  }
  int ma = -1, ma2 = -1;
  for(int j=lim;j>=0;--j){
    if (dp[j]) {
      ma = j;
      break;
    }
  }
  for(int j=lim;j>=0;--j){
    if (dp[margin - j]) {
      ma2 = j;
      break;
    }
  }
  assert (ma >= 0);
  assert (ma2 >= 0);
  cout << tot - a[n - 1] - max(ma, ma2) << endl;
}
