#include <iostream>
using namespace std;

int main() {
    int line,X1,Y1,X2,Y2;
    cin>>line;
    for (int i=0; i<line;i++){
	    cin>>X1>>Y1>>X2>>Y2;
	    if (X1+Y1<X2+Y2){
	        cout<<X1+Y1<<endl;
	    }else {
	        cout<<X2+Y2<<endl;
	    }
	}
}
