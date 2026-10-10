#include <iostream>
using namespace std;
int main(){
	int nilai = 90;
	
	if (nilai > 60){
		cout<<"Grade C";
	}
	else if (nilai > 80){
		cout<<"Grade B";
	}
	else if (nilai > 90){
		cout<<"Grade A";
	}
	else {
		cout<<"Tidak Lulus!";
	}
	
	return 0;
}
