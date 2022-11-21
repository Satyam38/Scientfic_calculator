#include<bits/stdc++.h>
using namespace std;

//<-------------------------------------------------------------- coder ---------------------------------------------------------------------->
void print( int p )
{
  cout<<""<<endl;
 cout<<"\t\t\t\t\t\t";cout<<" __________________________________   "<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"\tSCIENTIFIC CALCULATOR ";cout<<"\t   |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"    \t\t";cout<<p;   cout<<"\t\t ";cout<<"  |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"  ______________________________ ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"  ______________________________ ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | % |      | ^ |     |sqrt(s)|";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 1 |      | 2 |       | / | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 3 |      | 4 |       | + | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 5 |      | 6 |       | - | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 7 |      | 8 |       | * | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 9 |      | 0 |     |ENTER| |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |______________________________|";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"_________________________________";cout<<" |"<<endl;
}

void add(int o , int m , int p)
{    
    cout<<"\t\t\t\t\t\t";cin>>m;
    p=o+m;
    print(p);
}
void subtract(int o , int m, int p)
{    
     cout<<"\t\t\t\t\t\t";cin>>m;
     p=o-m;
     print(p);
}
void multply(int o , int m, int p)
{    
     cout<<"\t\t\t\t\t\t";cin>>m;
     p=o*m;
     print(p);
}
void modulo(int o , int m, int p)
{    
     cout<<"\t\t\t\t\t\t";cin>>m;
     p=o%m;
     print(p);
}
void divide(int o , int m, int p)
{    
     cout<<"\t\t\t\t\t\t";cin>>m;
     p=o/m;
     print(p);
}
void power(int o , int m, int p)
{    
     cout<<"\t\t\t\t\t\t";cin>>m;
     p=o^m;
     print(p);
}
void square(int o , int p)
{    
     p=o*o;
     print(p);
}


int main(){

int p;
 cout<<endl<<endl<<endl;

time_t now;
time(&now);
printf("\n");
printf("%s",ctime(&now));


 cout<<"\t\t\t\t **** WELCOME TO THE SCIENTIFIC  CALCULATOR , DEVELOPED BY SATYAM ****"<<endl<<endl;
 cout<<"\t\t\t\t  *** PRESS 0 TO QUIT THE PROGRAM ***"<<endl;


 cout<<"\t\t\t\t\t\t";cout<<" __________________________________   "<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"\tSCIENTIFIC CALCULATOR ";cout<<"\t   |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"  ______________________________ ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"                                 ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"  ______________________________ ";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | % |      | ^ |     |sqrt(s)|";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 1 |      | 2 |       | / | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 3 |      | 4 |       | + | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 5 |      | 6 |       | - | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 7 |      | 8 |       | * | |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |                              |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" | | 9 |      | 0 |     |ENTER| |";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<" |______________________________|";cout<<" |"<<endl;
 cout<<"\t\t\t\t\t\t";cout<<"|";cout<<"_________________________________";cout<<" |"<<endl;

cout<<"\t\t\t\t\t\t\t\t\t\t\t**  CLICK THE BUTTON ON A CALCULATOR  **"<<endl;
 int o,m,k;
  char a;
  
do
 {  
    cout<<"\t\t\t\t\t\t";cin>>o;
    cout<<"\t\t\t\t\t\t";cin>>a;
  
    switch(a)
    {
        case '+' :
            add(o,m,p);
            break;

        case '-':
           subtract(o,m,p);
           break;

        case '*':
           multply(o,m,p);
         break;

        case '%':
           modulo(o, m, p);
          break;

        case '^':
           power(o, m , p);
         break;

        case '/':
           divide(o, m ,p);
         break;
        
        case 's':
          square(o,p);
          break;
        
        case '0':
          exit(0);
          break;

        default:
         cout<<"WRONG CHOICE , PLEASE ENTER THE VALID CHOICE "<<endl;
         

    }
    fflush(stdin);
    k=1;

   
 }while(!k);

 


return 0;
}
