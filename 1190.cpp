#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	
	float matrix[12][12], quantityNumbers=0, k=0;
	float sumatory = 0;	
	char option;
	cin>>option;
	
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin>>matrix[i][j];
			if(j >= 12 - k){
				sumatory+=matrix[i][j];
				quantityNumbers++;
			}
		}
		if(i < 5){
			k++;
		}
		else if(i > 5){
			k--;
		}
	}	
	
	if(option == 'S'){
		cout<<fixed<<setprecision(1)<<sumatory<<'\n';
	}
	else{
		cout<<fixed<<setprecision(1)<<(sumatory/quantityNumbers)<<'\n';
	}
	
	return 0;
}
