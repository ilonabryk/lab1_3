#include <iostream>
#include "example.h"
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	float x, y, z;
	example obj;
	cout << "input x, y, z" << endl;
	cin >> x >> y >> z;
	obj.set_example(x,y,z);
	obj.sum();
	print(obj);
	
	system("pause");
	return 0;
}
