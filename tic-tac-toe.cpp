#include<bits/stdc++.h>
using namespace std;

char s[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkWin(){
    if(s[1]==s[2] && s[2]==s[3]){
        return 1;
    }
    else if(s[4]==s[5] && s[5]==s[6]){
        return 1;
    }
    else if(s[7]==s[8] && s[8]==s[9]){
        return 1;
    }
    else if(s[1]==s[4] && s[4]==s[7]){
        return 1;
    }
    else if(s[2]==s[5] && s[5]==s[8]){
        return 1;
    }
    else if(s[3]==s[6] && s[6]==s[9]){
        return 1;
    }
    else if(s[1]==s[5] && s[5]==s[9]){
        return 1;
    }
    else if(s[3]==s[5] && s[5]==s[7]){
        return 1;
    }
    else if(s[1] != '1' && s[2]!= '2' && s[3]!= '3' && s[4]!= '4' && s[5]!= '5' && s[6]!= '6' && s[7]!= '7' && s[8]!= '8' && s[9]!= '9'){
        return 0;
    }
    else{
        return -1;
    }
}

void board(){
    system("clear");
    cout<<"\n\nTic-Tac-Toe Game \n\n";
    cout<<"Player 1(X) - Player 2(0)"<<endl;

    cout<<"    |    |    "<<endl;
    cout<<" "<<s[1]<<"  |  "<<s[2]<<" |  "<<s[3]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<s[4]<<"  |  "<<s[5]<<" |  "<<s[6]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<s[7]<<"  |  "<<s[8]<<" |  "<<s[9]<<endl;
    cout<<"    |    |    "<<endl;
}

int main(){
    int Player = 1 , i , choice;
    char mark;
    do{
        board();
        Player = (Player%2) ? 1 : 2;
        cout<<"Player "<<Player<<", enter the number: ";
        cin>>choice;

        mark=(Player == 1) ? 'X' : '0';

        if(choice == 1 && s[1]=='1'){
            s[1] = mark;
        }
        else if(choice == 2 && s[2]=='2'){
            s[2] = mark;
        }
        else if(choice == 3 && s[3]=='3'){
            s[3] = mark;
        }
        else if(choice == 4 && s[4]=='4'){
            s[4] = mark;
        }
        else if(choice == 5 && s[5]=='5'){
            s[5] = mark;
        }
        else if(choice == 6 && s[6]=='6'){
            s[6] = mark;
        }
        else if(choice == 7 && s[7]=='7'){
            s[7] = mark;
        }
        else if(choice == 8 && s[8]=='8'){
            s[8] = mark;
        }
        else if(choice == 9 && s[9]=='9'){
            s[9] = mark;
        }

        i = checkWin();
        Player++;
        
    }while(i==-1);
    board();
    if(i == 1){
        cout<<"\aCongratulations! Player  "<< --Player <<" Wins!";
    }
    else{
        cout<<"\aGame Drawn!"; 
    }
    cin.ignore();
    cin.get();
    return 0;
}