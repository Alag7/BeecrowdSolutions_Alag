#include <bits/stdc++.h>
using namespace std;

bool game(string& me, string& enemy){
	if(me == enemy){
		return false;
	}
	if(me == "tesoura" and (enemy == "papel" or enemy == "lagarto")){
		return true;
	}
	else if(me == "papel" and (enemy == "pedra" or enemy == "Spock")){
		return true;
	}
	else if(me == "pedra" and (enemy == "lagarto" or enemy == "tesoura")){
		return true;
	}
	else if(me == "lagarto" and (enemy == "Spock" or enemy == "papel")){
		return true;
	}
	else if(me == "Spock" and (enemy == "tesoura" or enemy == "pedra")){
		return true;
	}
	
	return false;
}

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin>>n;
	string sheldon, raj;
	for(int i=1; i<=n; i++){
		cin>>sheldon>>raj;
		bool win = game(sheldon, raj), lose = game(raj, sheldon);
		cout<<"Caso #"<<i<<": ";
		if(win and !lose){
			cout<<"Bazinga!\n";
		}
		else if(lose and !win){
			cout<<"Raj trapaceou!\n";
		}
		else{
			cout<<"De novo!\n";
		}
	}
	return 0;
}
