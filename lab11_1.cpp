 #include<iostream>
 #include<string>
 #include<cstdlib>
 #include<ctime>
 using namespace std;

 
 
 int main(){
    srand(time(0));
    int i=0;
    string x;
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    i = rand()%9 + 1;
    if(i==1){
        x = "A";
    }else if(i==2){
        x = "B+";
    }else if(i==3){
        x = "B";
    }else if(i==4){
        x = "C+";
    }else if(i==5){
        x = "C";
    }else if(i==6){
        x = "D+";
    }else if(i==7){
        x = "D";
    }else if(i==8){
        x = "F";
    }else if(i==9){
        x = "W";
    }
    cout << "You will get "<<x<<" in this 261102.";

 }
