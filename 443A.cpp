#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
	string st; getline(cin, st);
	set <char> s;
	for (int i = 0; i < st.length(); i++){
		if(st[i] >= 'a' && st[i] <= 'z'){
			s.insert(st[i]);
		}
	}
	cout << s.size() <<" \n";
	return 0;
}
