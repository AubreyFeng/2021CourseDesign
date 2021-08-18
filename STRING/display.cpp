#include"STR.h"
bool display()
{
	fstream an;
	an.open("answer.txt",ios::in);
	if(!an.is_open()){
		cout<<"false!";
		return false;
	}

	string s[MAX];
	int i=0;
	while(!an.eof()){
		an>>s[i];
		cout<<s[i]<<endl;
		i++;
		
	}
	return true;
	
}