#include <bits/stdc++.h>
#include <iomanip>

typedef long long ll;
const int MOD = 1000000007;
#define endl "\n";
#define deb(x) cerr << #x << " is " << x << endl;
#define IOS ios:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
void resolve() {

	int n, k; cin >> n >> k;
	map<int, int> store;
	

	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		store[a] = i;
	}

	

	vector<int> locations;
	for (auto element : store) {
		locations.push_back(element.second);
	}


	int l = 1;

	for (int i = 1; i < locations.size(); ++i) {
	
		if (locations[i] - locations[i - 1] != 1) {
			l++;
		}
	}


	if (l <= k) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}
int main() {
	IOS;

	int t;
	cin >> t;
	while (t--) {
		resolve();
	}
}