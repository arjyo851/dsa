#include<iostream>
#include<time.h>
#include<bits/stdc++.h>
using namespace std;

void typing_master(){
    cout<<"****************"<<endl;
    cout<<"***WELCOME TO TYPING MASTER***"<<endl;
    cout<<"****************"<<endl;
    cout<<endl;
    cout<<"how to play?"<<endl;
    cout<<"just enter the words that are shown (You would earn 5 points for each correct word) :)"<<endl;
    string y;
    cout<<"Start game? (type 'Yes' or 'No')";
    cin>>y;
    while (y=="Yes" || y =="yes"){
        string words[30]={"Abandon","Microsoft","Discipline","Nonplussed","Disinterested",
        "Irregaedless","Economy","Translational","Handkerchief","Logorrhea","Chiaroscurist",
        "Intelligence","Pharaoh","Confidence","Vaccum","Embarrassment","Abnegation","Bombastic",
        "Camaraderie","Tomorrow"}; // array of words;
        int score=0;//score;
        for (int i=0;i<10;i++){ //loop to summon words;
            int j,k=0;
            string inp;
            j=(rand()%20);//random target;
            string target=words[j];
            cout<<target<<endl;//word to be written;
            cout<<"enter the given word : ";
            time_t start=time(&start);//time start;
            cin>>inp;//user input;
            if(target==inp){  //correct response;
                cout<<"Bingo"<<endl;
                score+=5;
            }
            else{ //wrong response;
                while (k<5){
                    cout<<"Wrong,please try again : ";
                    string b_correct;
                    cin>>b_correct;
                    if(target==b_correct){
                        cout<<"bingo"<<endl;
                        score+=5-(k+1);
                        break; 
                    }
                    k++;
                }
            }
            if(k==5){ //if input is wrong 5 times;
                cout<<"Game Over "<<endl;
                break;
            }
            time_t end=time(&end);//time stops;
            cout<<"time you took : "<<end-start<<" seconds"<<endl;
        }
        cout<<"your score : "<<score<<endl;

    cout<<"Do you wish to play again ?(type 'Yes' or 'No')";
    cin>>y;    
    }    
}

int main(){
    typing_master();
    
    return 0;
}