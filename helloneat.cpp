#include <iostream>
using namespace std;

//single line comment

/*
multi
line
comment*/
// c++ needs a "main" to work because reasons. cant work withuout it
int main(){ // cout is screen output the less than signs are insertion operators
    cout<<"hello world"<<endl;
    cout<<"hello world\n"; // backslash n still works the same and can be used in place of <<endl
    //std::cout<<"hello"<<std::endl; use this if you dont add the use namespace part
    return 0; //you specified that the func will return an int so you have to
    
}
// manual  compile is g++ -o hello program.cc / .cpp