//UVa Problem-11308(Bankrupt Baker)
//Accepted
//Running time: 0.428 sec

#include<iostream>
#include<cstdio>
#include<cctype>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        string binder_name;
        getchar();
        getline(cin,binder_name);
        for(int i=0;i<binder_name.length();i++)
            binder_name[i]=toupper(binder_name[i]);
        int m,n,b;
        cin>>m>>n>>b;
        map<string,int> cost;
        for(int i=0;i<m;i++){
            int price;
            string ingredient;
            cin>>ingredient>>price;
            cost[ingredient]=price;
            }
        vector<pair<int,string> > within_budget;
        for(int i=0;i<n;i++){
            int num_of_ingredient;
            string recipe_name;
            getchar();
            getline(cin,recipe_name);
            cin>>num_of_ingredient;
            int total_cost=0;
            for(int j=0;j<num_of_ingredient;j++){
                int unit;
                string ingredient;
                cin>>ingredient>>unit;
                total_cost+=cost[ingredient]*unit;
                }
            if(total_cost<b)
                within_budget.push_back(make_pair(total_cost,recipe_name));
            }
        cout<<binder_name<<endl;
        if(within_budget.size()==0)
            cout<<"Too expensive!"<<endl;
        else{
            sort(within_budget.begin(),within_budget.end());
            for(vector<pair<int,string> >::iterator iter=within_budget.begin();iter!=within_budget.end();iter++)
                cout<<iter->second<<endl;
            }
        cout<<endl;
        }
    return 0;
    }
