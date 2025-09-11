
 #include<iostream>
 using namespace std;
 int main(){
    char ch;
    cout<<"enter a character:";
    cin>> ch;
    if(ch>=65 && ch<=90){
        cout<<"uppercase\n";
    }else{
        cout<<"lowercase\n";
    }
    return 0;

 }