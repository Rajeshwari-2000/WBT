class string
{
	int len;
	char *ptr;
public:
	void chardisplay();
	string();
	string(char*);
	void stringdisplay();
	string(char,int);
	string(int);
	~string()
    {
    	cout<<"destructor called\n";
    	if(ptr)
    	{
    	delete ptr;
    	cout<<"in if block\n";
    	}
    
	}   

};
string::string1()
	len=1;
	ptr=new char[len];
	*ptr='A';
}
void string::chardisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"character is "<<*ptr<<endl;
}



void string::stringdisplay()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}




string::string(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}







string::string(char ch,int l)
{
	int i;
	len=l;
	ptr=new char[len+1];
	for(i=0;i<len;i++)
	{
		ptr[i]=ch;
	}
	ptr[i]='\0';
}



string::string1(int l)
{
	int i;
	len=l;
	ptr=new char[len+1];
	cout<<"accept string\n";
	cin>>ptr;//rohit
}
int main()
{
	string c1;
	c1.chardisplay();

	string c2("rahul");
	c2.stringdisplay();


	string c3('*',60);
	c3.stringdisplay();




	string c4(5);
	c4.stringdisplay();
}

