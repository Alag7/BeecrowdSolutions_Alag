#include <bits/stdc++.h>
using namespace std;
	
int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	
	int a, b, c, slope, expected;
	cin>>a>>b>>c;
	
	slope = b-a;
	expected = a + 2*slope;
	
	if(c == expected){
		if(slope > 0){
			cout<<":)\n";
		}
		else{
			cout<<":(\n";
		}
	}
	else if(c > expected){
		cout<<":)\n";
	}
	else{
		cout<<":(\n";
	}
	
	return 0;
}
