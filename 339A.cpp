#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;
int Int_String(string ch){
	int res = 0;
	stringstream ss;
	ss << ch; ss >> res;
	return res;
}
int main(){
	string s; getline(cin, s);
	int arr[4] = {0};
	string ch = "";
	for (int i = 0; i < s.length(); i++){
		if (s[i] != '?') {
			ch += s[i];
			arr[Int_String(ch)]++;
			ch = "";
		}
	}
//solve
	int count = arr[1] + arr[2] + arr[3];
	int cnt = 0;
	for (int i = 1; i <= 3; i++){
		if (arr[i] != 0){
			for (int j = 1; j <= arr[i]; j++){
				cout << i; cnt++;
				if (cnt != count) cout <<"+";
			}
		}
	}
}
