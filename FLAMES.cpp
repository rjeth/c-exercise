#include <iostream>
#include <string>
using namespace std;
int main()
{
  string boyname,girlname,boytemp,girltemp;
  int total;
  cout<<"F-L-A-M-E-S\n\n";
  cout<<"1st Name:";  
  getline(cin,boyname);
  cout<<"2nd Name:"; 
  getline(cin,girlname);
  cout<<endl<<endl;
    
  boytemp=boyname;  girltemp=girlname;
    
  int i,j,count1=0,count2=0;
  char a,b;
 /*
  for(i=0;i<boyname.length();i++) 
  { 
    a=tolower(boyname[i]);
          for(j=0;j<girltemp.length();j++) 
          {
            if(a==tolower(girltemp[j])&&a!=' ')
            { count1++;    girltemp[j]='*'; }
          }
  } */
  
  for(i=0 ; i<boyname.length() || i<girlname.length() ; i++) 
  { 
    a=tolower(boyname[i]);
    b=tolower(girlname[i]);
          for(j=0 ; j<girltemp.length() || j<boytemp.length() ; j++) 
          {
            if(a==tolower(girltemp[j])&&a!=' ')
            { count1++;    girltemp[j]='*'; }
            
            if(b==tolower(boytemp[j])&&b!=' ')
            { count2++;    boytemp[j]='*';  }
            
          }
  } 
  
  
/*
  for(i=0;i<girlname.length();i++)
  { 
    b=tolower(girlname[i]);
          for(j=0;j<boytemp.length();j++)
          {
            if(b==tolower(boytemp[j])&&b!=' ')
            { count2++;    boytemp[j]='*';  }
          }
  } */
  
  cout<<boytemp<<"       "<<girltemp<<endl;
  total=count1+count2;
  cout<<endl;
  cout<<"Total * :"<<total;
  cout<<endl<<endl;;
 while(total>6)
  {  total-=6;  }
    
  switch(total)
  {
    case 1: cout<<boyname<<endl<<" and "<<endl<<girlname<<endl<<"\n are only Friends"; break;
    case 2: cout<<boyname<<endl<<" and "<<endl<<girlname<<endl<<"\nare Lovers"; break;
    case 3: cout<<boyname<<endl<<" and "<<endl<<girlname<<endl<<"\n are Admirers"; break;
    case 4: cout<<boyname<<endl<<" and "<<endl<<girlname<<endl<<"\n are going to be Married";break;
    case 5: cout<<boyname<<endl<<" and "<<endl<<girlname<<endl<<"\n are Enemies"; break;
    case 6: cout<<boyname<<endl<<" and "<<endl<<girlname<<endl<<"\n are Sweethearts"; break;
    default: cout<<"NOT COMPATIBLE, TRY ANOTHER PAIR/PERSONS";
  }
  return 0;
}