#include <iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
  class suggestion 
 {    public:
 	 int input;
  	void get()
  	{
	
  while(1)
  {
        
	        cout<<"\n            ___________________________________";
			cout<<"\n           |    LET'S COMPLETE THE WORDS       |" ;
	        cout<<"\n           |   PROVIDE INITIAL CHARACTERS      |";
	        cout<<"\n           |1. ONE CHARCTER                    |";
	        cout<<"\n           |2. TWO CHARCTERS                   |";
	        cout<<"\n           |3. THREE CHACTERS                  |";
	        cout<<"\n           |4. FOUR CHARACTERS                 |";
	        cout<<"\n           |5. EXIT                            |";
	        cout<<"\n           |___________________________________|";
	        cout<<"\n\n\n ENTER THE CHOICE.....:";
	      
  cin>> input;
  switch ( input ) 
  {
  case 1:
    fun1();
    break;
  case 2:
    fun2();
    break;
  case 3:
    fun3();
    break;

  case 4:
      fun4();
      break;

  case 5:exit(0);

  default:
    cout<<"OOPS! WRONG INPUT";
    break;


}

  }
  
  }
  void fun1();
  void fun2();
  void fun3();
  void fun4();
  
 };

void suggestion::fun1()//defining the function out of the class 
{
   ifstream out("textfile.txt");

    char str[80];

     char a;
     cout<<"ENTER THE ONE CHARACTER :-    ";
     cin>>a;
cout<<" \nSUGGESTED WORDS ARE\n";
    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a)
      cout<<setw(30)<<"|"<<str<<"|"<<endl;
    }
    out.close();
}

void suggestion::fun2()
{
 ifstream out("textfile.txt");

    char str[80];

     char a,b;
     cout<<" ENTER THE TWO(2) CHARACTERS:-     ";
     cin>>a>>b;
cout<<" \nSUGGESTED WORDS ARE\n";
    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a && str[1]==b)
           cout<<setw(30)<<"|"<<str<<"|"<<endl;
    
	}
    out.close();
}





void suggestion::fun3()
{
    ifstream out("textfile.txt");

    char str[80];
          cout<<"ENTER THE THREE(3) CHARCTERS:-   ";
     char a,b,c;
     cin>>a>>b>>c;
     cout<<" \nSUGGESTED WORDS ARE\n";
     

    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a && str[1]==b && str[2]==c)
            {
			cout<<setw(30)<<"|"<<str<<"|"<<endl;}
            }
            
            
            
            
    out.close();
}


void suggestion::fun4()
{
     ifstream out("textfile.txt");

    char str[80];
          cout<<"ENTER THE FOUR(4) CHARACTERS:-   ";
     char a,b,c,d;
     cin>>a>>b>>c>>d;
        cout<<" \nSUGGESTED WORDS ARE:\n";
    while(!out.eof())
    {
        out.getline(str,80,'\n');

        if(str[0]==a && str[1]==b && str[2]==c && str[3]==d)
              cout<<setw(30)<<"|"<<str<<"|"<<endl;
    
	}
    out.close();

}



int main()
{
   suggestion c;
   
   string  user_name;

	 
   string  actual_username="FAZIL";// actual username
   string  actual_password="12345";
   cout<<"                    :::::WELCOME TO  THE WORDS SUGGESTION::::::";
   cout<<"\n                              ENTER THE USERNAME:";
  
   cin>>user_name;// holding the username 
   
   
   cout<<"\n                              ENTER THE PASSWORD:";
   
   string user_password;
   
   
   for(int i=0;i<5;i++)
   {
   	     char x = getch();
   	     cout<<"*";
   	     user_password.push_back(x);
   	  
   }
   
   
 if( user_password==actual_password && user_name==actual_username)
 {
 	 c.get(); 	
 	
}  
else
cout<<"\n\n\n\n\n\n OOPS! TRY AGAIN";
}
