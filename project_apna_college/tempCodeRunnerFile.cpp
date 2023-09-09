#include <iostream>
using namespace std;

int main() {
	int t;// your code goes here
    cout<<"enter the loop no : ";
    scanf("%d",&t);

    int x, y;
    while(t--)
    {
	if(x>6 or y>6)
	    cout<<"wrong input";
	else{
        cout<<"enter the dice oof chef and chefina";
    	int x, y;
    	cin>>x>>y;
    	if(x+y>6)
    	    cout<<"this is a good no."<<endl;
    	 else if(0<=x<=6)
    	    cout<<"not a good no";
    	 else
    	    cout<<"wrong input";
	}
    }
	return 0;
}
