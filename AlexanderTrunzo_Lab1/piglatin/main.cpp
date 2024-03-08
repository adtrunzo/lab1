
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

char *piglatin(char *s){
	cout<<s<<'\n';
	string temp;
	if(s[0] != 'A' && s[0] != 'a' && s[0] != 'E' && s[0] != 'e' && s[0] != 'I' && s[0] != 'i' && s[0] != 'O' && s[0] != 'o' && s[0] != 'U' && s[0] != 'u'){
	temp = s;
	temp = temp.substr(1);
	temp = temp + s[0];
	temp = temp + "ay";
	cout<<temp<<'\n';
}else{
	temp = s;
	temp += "way";
	cout<<temp<<'\n';
}
}
//----------------------------------------------------------------------------

int main(int argc, char **argv)
{
	
char test1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
char test2[6] = {'S', 'l', 'e', 'e', 'p', '\0'};
char test3[8] = {'U', 'd', 'e', 'l', 'e', 'd', 'u', '\0'};
char test4[7] = {'i', 'n', 'f', 'o', 'r', 'm', '\0'};
char *testing = test1;
piglatin(testing);
testing = test2;
piglatin(testing);
testing = test3;
piglatin(testing);
testing = test4;
piglatin(testing);
return 0;
}	
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

