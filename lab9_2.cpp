#include <iostream>
using namespace std;

void printO(int z,int l){
    int i,j;
    if(l>0&&z>0){
    for(j=0;j<z;j++){
        for(i=0;i<l;i++){
            cout<<"O";
        }
    cout<<"\n";
    }
    }else{
        cout <<"Invalid input";
    }
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
