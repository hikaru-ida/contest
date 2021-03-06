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

const int N = 10010, W = 10100;
int l;
int n;
int a[N];
int dp[N][W];
int main(void){
  cin >> l >> n;
  REP(i, 0, n) {
    cin >> a[i];
  }
  dp[0][0] = 0;
  REP(j, 1, W) {
    dp[0][j] = 0;
  }
  REP(i, 1, n + 1) {
    REP(j, 0, W) {
      dp[i][j] = dp[i-1][j];
      if (j >= a[i-1]) {
	dp[i][j] = max(dp[i][j], dp[i-1][j-a[i-1]] + 1);
      }
      if (j >= 1) {
	dp[i][j] = max(dp[i][j], dp[i][j - 1]);
      }
    }
  }
  cout << dp[n][l] << endl;

}
