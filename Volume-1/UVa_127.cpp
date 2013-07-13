//UVa Problem-127(``Accordian'' Patience)
//Accepted
//Running time: 0.804 sec
//Author: Milon

#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

struct Cards{
    char ch[2];
    };

inline bool Match(Cards a,Cards b){
    if(a.ch[0]==b.ch[0] || a.ch[1]==b.ch[1])
        return true;
    return false;
    }

int main(){
    vector<vector<Cards> > Card;
    vector<Cards> one;
    Cards ans;
    int i,j;
    int count(0);
    while(cin>>ans.ch && strcmp(ans.ch,"#")){
        count++;
        one.clear();
        one.push_back(ans);
        Card.push_back(one);
        i=Card.size()-1;
        while(1){
            if(i-3>=0 && Match(Card[i][Card[i].size()-1],Card[i-3][Card[i-3].size()-1])){
                Card[i-3].push_back(Card[i][Card[i].size()-1]);
                if(Card[i].size()==1)
                    Card.erase(Card.begin()+i);
                else
                    Card[i].erase(Card[i].begin()+(Card[i].size()-1));
                i-=3;
                }
            else if(i-1>=0 && Match(Card[i][Card[i].size()-1],Card[i-1][Card[i-1].size()-1])){
                Card[i-1].push_back(Card[i][Card[i].size()-1]);
                if(Card[i].size()==1)
                    Card.erase(Card.begin()+i);
                else
                    Card[i].erase(Card[i].begin()+(Card[i].size()-1));
                i--;
                }
            else{
                i++;
                if(i==Card.size())
                    break;
                }
            }
        if(count==52){
            if(Card.size()>1)
                cout<<Card.size()<<" piles remaining:";
            else
                cout<<Card.size()<<" pile remaining:";
            for(i=0;i<Card.size();i++)
                cout<<" "<<Card[i].size();
            cout<<endl;
            Card.clear();
            count=0;
            }
        }
    return 0;
    }

