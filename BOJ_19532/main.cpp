#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	for (auto x = -999; x <= 999; ++x) {
		for (auto y = -999; y <= 999; ++y) {
			if (a * x + b * y == c &&
				d * x + e * y == f) {
				cout << x << ' ' << y;
				return 0;
			}
		}
	}

	return 0;
}