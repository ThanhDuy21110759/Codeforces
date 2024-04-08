#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int arr[10][10] = {0};
	int x, y;
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			cin >> arr[i][j];
			if (arr[i][j] != 0){
				x = i;
				y = j;
			}
		}
	}
	cout << abs(x - 3) + abs(y - 3);
}
