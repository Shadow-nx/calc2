#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(int argc,char *argv[])
{
setlocale(LC_ALL,"RUS");	
char choice[1][1];
choice[0][0]='y';
while((char)choice[0][0]=='y'){
    int op1,op2;	
    char x[1][1];	
       do{ 
            cout<<"Âûáåðèòå ïîæàëóéñòà îäíó èç îïåðàöèé[+.-.*,/,%,^,!,&,|,<,>]:"<<endl;
            cin>>*x;
         }while(x[0][0]!='+' && x[0][0]!='-' && x[0][0]!='*' && x[0][0]!='/' && x[0][0]!='%' && x[0][0]!='^' && x[0][0]!='!' && x[0][0]!='&' && x[0][0]!='|' && x[0][0]!='<' && x[0][0]!='>');
         if(x[0][0]=='+' || x[0][0]=='-' || x[0][0]=='*' || x[0][0]=='/' || x[0][0]=='%' || x[0][0]=='^'|| x[0][0]=='>' || x[0][0]=='<' || x[0][0]=='|' || x[0][0]=='&')
         {
            cout<<"Ââåäèòå ïåðâîîå ÷èñëî:"<<endl;
            cin>>op1;
            cout<<"Ââåäèòå âòîðîå ÷èñëî:"<<endl;   
            cin>>op2;
               if(cin.good())
		       {  
                  switch((char)x[0][0])
		             {
                        case '+':cout<<"Ñóììà:"<<(op1+op2)<<endl;
                           break;
                        case '-':cout<<"Ðàçíîñòü:"<<(op1-op2)<<endl;
                           break;
                        case '*':cout<<"Ïðîèçâåäåíèå:"<<(op1*op2)<<endl;
                           break;
                        case '/':
                           if (op2!=0)
				              cout<<"×àñòíîå:"<<(double)op1/(double)op2<<endl;
                           else
                              cerr<<"Îøèáêà:íà 0 äåëèòü íåëüçÿ!"<<endl;
                           break;
                        case '%':cout<<"Ìîäóëü:"<<(op1%op2)<<endl;
			               break;
			            case '^':
			            	  for(int i=0,j=op1;i<op2-1;i++)
			            	     op1*=j;
						      cout<<"Âîçâåäåíèå â ñòåïåíü:"<<op1<<endl;
			               break;
			            case '&':cout<<"Ïîáèòîâîå È:"<<(op1&op2)<<endl;
			               break;
			            case '<':
			   	           if(op2>=0) 	   
			                  cout<<"Ïîáèòîâûé öèêëè÷åñêèé ñäâèã âëåâî:"<<(op1<<op2)<<endl;
			               else
					          cerr<<"Íåêîððåêòíûå äàííûå"<<endl;  
			               break;
			            case '>':
			               if(op2>=0)
			                  cout<<"Ïîáèòîâûé öèêëè÷åñêèé ñäâèã âïðàâî:"<<(op1>>op2)<<endl;
			               else
			                  cerr<<"Íåêîððåêòíûå äàííûå"<<endl;
			               break; 
			            case '|':cout<<"Ïîáèòîâîå ÈËÈ:"<<(op1|op2)<<endl;
			               break;
			            default:cerr<<"Îøèáêà"<<endl;               	   	       
                      }
                }
               else
               {
               	   cin.ignore();
			       cin.clear();
			       cout<<"Íåêîððåêòíûå äàííûå"<<endl;
		       }
		   }
		   if(x[0][0]=='!')
		   {
		      cout<<"Ââåäèòå ïîæàëóéñòà îïåðàòîð:"<<endl;
		      cin>>op1;
		         switch((char)x[0][0])
		         {
		      	    case '!':cout<<(!op1)<<endl;
		      	       break;
		      	    default:
				       cerr<<"Îøèáàêà"<<endl;  
			     }
		    }
            do{
               cout<<"Åñëè âû õîòèòå ïðîäîëæèòü ââåäèòå Y,åñëè çàêîí÷èòü ââåäèòå N"<<endl;
               cin>>*choice;
              }while((char)choice[0][0]!='y'&&(char)choice[0][0]!='n');
}
cout<<"Äî ñâèäàíèÿ!"<<endl;
return 0;		
}
