#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, v; cin>>n;
	vector<int>odd, even;
	while(n--){
		cin>>v;
		if(v%2){
			odd.push_back(v);
		}
		else{
			even.push_back(v);
		}
	}
	sort(even.begin(), even.end());
	sort(odd.rbegin(), odd.rend());
	for(auto& c : even){
		cout<<c<<'\n';
	}
	for(auto& c : odd){
		cout<<c<<'\n';
	}
	return 0;
}
