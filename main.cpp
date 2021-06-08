#include <iostream>

using namespace std;

int main()
{
    int guessnum;
    int systemnum= 8;
    int limit=1;
    int i=5;
    int num=3;

    while (guessnum!= systemnum){
        if(limit<=3){
        cout<<"enter  the number which uh have guessed (YOU HAVE ONLY "<<num-- << " CHANCES)"<<endl;
        cin>>guessnum;
        limit++;
        }
        else{
            cout<<" OOPS YOU LOSE!!!!!!!"<<endl;
        }
    }
    while(i>1){
    cout<<" CONGRATULATIONS YOU WON!!!!!!!! "<<endl;
    i++;
    }



    return 0;
}
