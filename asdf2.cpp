#include<iostream>
#include<string>
#include<map>

using namespace std;

typedef void (*func)();


void f1(){ cout<<"asdf";}



main(){

	map<string,func> funcmap;
	funcmap["f1"] = f1;
	
	func f = funcmap["f1"];

	(*f)();	

	return 0;

}
