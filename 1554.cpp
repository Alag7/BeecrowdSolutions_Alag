/*
Explanation:
Input Parsing: The program starts by reading the number of test cases t. For each test case, it reads the number of balls n and the position of the white ball (x, y) on the pool table.
Euclidean Distance Calculation: The function distanciaEuclidiana computes the distance between the white ball and each of the balls using the formula:
𝑑=sqrt((𝑥1−𝑥2)^2+(𝑦1−𝑦2)^2) 
Closest Ball Calculation: For each test case, the program iterates over all the balls, calculates the distance between the white ball and the current ball, and checks if this ball is closer than the previously found closest ball. It keeps track of the closest ball index and its distance.
Output: After processing all balls, the program outputs the number of the closest ball for each test case.
Complexity:
Time Complexity: For each test case, the algorithm processes n balls, and for each ball, it computes the distance to the white ball. This results in a time complexity of O(t×n), where t is the number of test cases and n is the number of balls.
Space Complexity: The space complexity is O(1), since the algorithm only uses a few variables to store distances and positions.
*/

#include <bits/stdc++.h>
using namespace std;

double distanciaEuclidiana(int x, int y, int x2, int y2){
	int a = x-x2, b = y-y2;
	return sqrt(a*a + b*b);
}

int main(int argc, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, n, x, y, x2, y2, pos;
	double distanciaMinima, d;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>x>>y;
		distanciaMinima = INT_MAX;
		for(int j=1; j<=n; j++){
			cin>>x2>>y2;
			d = distanciaEuclidiana(x, y, x2, y2);
			if(d < distanciaMinima){
				pos = j;
				distanciaMinima = d;
			}
		}
		cout<<pos<<'\n';
	}
	
	
	return 0;
}
