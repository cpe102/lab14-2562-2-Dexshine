#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b,int &c,int &d){
	int temp[] = {50,100,500,1000};
	int w=0,x=0,y=0,z=0;
	while(w==x or w==y or w==z or x==y or x==z or y==z){
		w = rand()%4;
		x = rand()%4;
		y = rand()%4;
		z = rand()%4;
	}
	a = temp[w];
	b = temp[x];
	c = temp[y];
	d = temp[z];

}
