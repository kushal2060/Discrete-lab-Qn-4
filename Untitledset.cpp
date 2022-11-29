//Qn 4a.
#include<iostream>
using namespace std;
int main(){
	string name[5];
	double age[5],membership[5],age1[5],membership1[5];
	cout<<"Enter names: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Name of "<<i+1<<" Person: ";
		cin>>name[i];
	}

	cout<<endl<<"Enter age: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Age of "<<name[i]<<":";
		cin>>age[i];
	}
	system("CLS");
     for(int i=0;i<5;i++){
    	if(age[i]<=20){
    		cout<<"Degree of membership of "<<name[i]<<"="<<1<<endl;
    		membership[i]=1;
		}
		if(age[i]>20&&age[i]<=30){
			cout<<"Degree of membership of "<<name[i]<<"="<<(30-age[i])/10<<endl;
				membership[i]=(30-age[i])/10;
		}
		if(age[i]>30){
			cout<<"Degree of membership of "<<name[i]<<"="<<0<<endl;
			membership[i]=0;
		}
	}
		cout<<"Enter age for another set."<<endl;
		for(int i=0;i<5;i++){
		cout<<"Age of "<<name[i]<<":";
		cin>>age1[i];
	}

	    for(int i=0;i<5;i++){
	    	if(age1[i]<=15){
	    	cout<<"Degree of membership of "<<name[i]<<"="<<1<<endl;
    		membership1[i]=1;	
			}
			if(age1[i]>15&&age1[i]<=35){
			cout<<"Degree of membership of "<<name[i]<<"="<<(35-age1[i])/20<<endl;
    		membership1[i]=(35-age1[i])/20;
			}
			if(age1[i]>35){
	    	cout<<"Degree of membership of "<<name[i]<<"="<<0<<endl;
    		membership1[i]=0;
		}	
		
	}
  cout<<"Union of two fuzzy set is"<<endl<<"{ ";
  for(int i=0;i<5;i++){
  	if(membership[i]>membership1[i]){
  		cout<<membership[i]<<"|"<<name[i]<<" ,";
	  }
	  else{
	  	cout<<membership1[i]<<"|"<<name[i]<<" ,";
	  }
  }
  cout<<" }"<<endl;
cout<<"Intersection of two fuzzy set is"<<endl<<"{ ";
  for(int i=0;i<5;i++){
  	if(membership[i]==membership1[i]){
  		cout<<membership[i]<<"|"<<name[i]<<" ,";
	  }
	 
  }
  cout<<" }"<<endl;
cout<<"Compliment of 1st fuzzy set is"<<endl<<"{ ";
  for(int i=0;i<5;i++){
  	cout<<(1-membership[i])<<"|"<<name[i]<<" ,";
  }
  cout<<" }"<<endl;
cout<<"Compliment of 2nd fuzzy set is"<<endl<<"{ ";
  for(int i=0;i<5;i++){
  	cout<<(1-membership1[i])<<"|"<<name[i]<<" ,";
  }
  cout<<" }";

	return 0;
}