#include <iostream>
#include <string>
#include <map>

using namespace std;
typedef void (*func)();


class thing1{


	public:
	thing1();
	~thing1();
	void attach(string, func);
	void run(string);	


	private:
	map<string, func> funclist;	

};

thing1::thing1(){
//nothing
}

thing1::~thing1(){
//nothing
}

void thing1::run(string str){

	func f = funclist[str];
	(*f)();
}

void thing1::attach(string str, func f){


	funclist[str]=f;
}



void hello(){
	cout<<"hello world";
}

int main(){

	
	thing1 joe;
	joe.attach("hello",hello);
	joe.run("hello");

	return 0;
}


