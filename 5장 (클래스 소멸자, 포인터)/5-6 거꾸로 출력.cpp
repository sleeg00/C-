#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	while (true) {
		getline(cin,str,'\n');
		if (str == "exit")
			break;
		for (int i = str.length() - 1; i >= 0; i--)
			cout << str[i];
		cout << endl;
	}
}