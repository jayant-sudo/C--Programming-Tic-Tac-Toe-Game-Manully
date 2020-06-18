#include<iostream>
using namespace std;
void check(int);
void check_result();
int k=1;
char game[9]={'1','2','3','4','5','6','7','8','9'};
int main()
{
	int i;
	char ch;
	cout<<"---------------------Tic Tac Toe Game--------------------"<<endl;
		while(1)
	{
	for(i=0;i<9;i++)
	{
		if(i%3 == 0)
		{
			cout<<endl;
		}
			cout<<"\t| "<<game[i]<<"\t";		
	}
	cout<<endl;
	
		if(k==1)
		 {
		 	cout<<"Player 1 turns(0) : "<<endl<<endl;;
		 	k=2;
		 }
		 else{
		 	cout<<"Player 2 turns(x) : "<<endl<<endl;
		 	k=1;
		 }
		 cout<<"Enter any number between 1 to 9"<<endl;
		 cin>>ch;
		 switch(ch)
		 {
		    case '1': 
		    check(0);
				break;
		    case '2':
		    	check(1);
			       break;
		    case '3' :
		    	check(2);
			      break;
		    case '4':
		    	check(3);
			     		break;
			case '5':
				check(4);
			            break;
			case '6':
				check(5);
			       break;
			case '7':
				check(6);
			         break;
			case '8':
				check(7);
			        break;
			case '9':
				check(8);
			        break;
			default:
			       cout<<"please choose number between 1 to 9"<<endl;						 	   			     		
						   		   		  	
		 }
		 
	check_result();	
	}
}

void check(int index)
{
	if(game[index] == 'x' || game[index] == '0'){
		cout<<"This number is already taken.. please choose another number :)"<<endl;
	}else{
  if(k == 1){
  game[index]='x';
}else{
      game[index]='0';	
			}
		}
}


void check_result(){
	// horizontal line 1
	if(game[0] == 'x' && game[1] == 'x' && game[2] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
		if(game[0] == '0' && game[1] == '0' && game[2] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	// horizontal line 2
		if(game[3] == 'x' && game[4] == 'x' && game[5] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
			if(game[3] == '0' && game[4] == '0' && game[5] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	// horizontal line 3
			if(game[6] == 'x' && game[7] == 'x' && game[8] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
				if(game[6] == '0' && game[7] == '0' && game[8] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	//vertical line 1
				if(game[0] == 'x' && game[3] == 'x' && game[6] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
					if(game[0] == '0' && game[3] == '0' && game[6] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	//vetical line 2
					if(game[1] == 'x' && game[4] == 'x' && game[7] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
					if(game[1] == '0' && game[4] == '0' && game[7] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	//vertical line 3
					if(game[2] == 'x' && game[5] == 'x' && game[8] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
						if(game[2] == '0' && game[5] == '0' && game[8] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	//diagonal line 1
						if(game[0] == 'x' && game[4] == 'x' && game[8] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
							if(game[0] == '0' && game[4] == '0' && game[8] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}
	
	//diagonal line 2
							if(game[2] == 'x' && game[4] == 'x' && game[6] == 'x')
	{
		cout<<"player 2 wins :)"<<endl;
		exit(0);
	}
							if(game[2] == '0' && game[4] == '0' && game[6] == '0')
	{
		cout<<"player 1 wins :)"<<endl;
		exit(0);
	}

}


