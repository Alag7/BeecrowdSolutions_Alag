#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	float x;
	cin>>n;
	while(n--){
		cin>>x;
		int dias = 0;
		while(x > 1.0){
			dias++;
			x /= 2;
		}
		cout<<dias<<" dias\n";
	}
	return 0;
}
