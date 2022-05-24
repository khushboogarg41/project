#include <iostream>
using namespace std;

namespace first{

void funct1(){
    cout<<"print first function ";
}}

namespace second{

void funct1(){
    cout<<"print second function";
}}
int main(){
	first::funct1();
	return 0;
}
