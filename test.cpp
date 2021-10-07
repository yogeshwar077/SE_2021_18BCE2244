#include <bits/stdc++.h>
using namespace std;
int ro(vector<vector<string> > g,string pa){
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(g[i][j]==pa){
                temp=i;
            }
        }
    }
    return temp;
}
int co(vector<vector<string> > g,string pa){
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(g[i][j]==pa){
                temp=j;
            }
        }
    }
    return temp;
}
void lef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-1][col]=pa;
    return ;
}
void rig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+1][col]=pa;
    return ;
}
void forw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col+1]=pa;
    return ;
}
void backw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col-1]=pa;
    return ;
}
int main(){
    vector<vector<string> > g(5,vector<string> (5));
    for(int i=0;i<5;i++){
        ostringstream str1;
        str1<< i+1;
        g[0][i]="A"+str1.str()+" ";

    }
    for(int i=0;i<5;i++){
        ostringstream str1;
        str1 <<i+1;
        g[4][i]="B"+str1.str()+" ";
    }
    for(int i=1;i<4;i++){
        for(int j=0;j<5;j++){
            g[i][j]=" - ";
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<g[i][j];
        }
        cout<<endl;
    }
    cout<<"Press F to start"<<endl;
    string t;
    cin>>t;
    if(t=="F"){
        bool en=false;
        cout<<"A turn"<<endl;
        string f;
        cin>>f;
        for(int i=0;i<5;i++){
            ostringstream str1;
            str1<< i+1;
            if(f=="A"+ str1.str()+"L"){
                string temp="A"+str1.str()+" ";
                int row=ro(g,temp);
                int col=co(g,temp);
                lef(g,row,col,temp);
            }
            if(f=="A"+ str1.str()+"R"){
                rig(g,row,col,temp);
            }
            if(f=="A"+ str1.str()+"F"){
                forw(g,row,col,temp);
            }
            if(f=="A"+ str1.str()+"B"){
                backw(g,row,col,temp);
            }

        }
    }
    return 0;
}
