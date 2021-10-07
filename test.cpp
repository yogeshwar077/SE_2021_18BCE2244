#include <bits/stdc++.h>
using namespace std;
int cob(vector<vector<string> > g){
    int c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(g[i][j][0]=='B'){
                c++;
            }
        }
    }
    return c;
}
int coa(vector<vector<string> > g){
    int c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(g[i][j][0]=='A'){
                c++;
            }
        }
    }
    return c;
}
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
void alef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col+1]=pa;
    return ;
}
void arig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col-1]=pa;
    return ;
}
void aforw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+1][col]=pa;
    return ;
}
void abackw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-1][col]=pa;
    return ;
}
void blef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col-1]=pa;
    return ;
}
void brig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col+1]=pa;
    return ;
}
void bforw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-1][col]=pa;
    return ;
}
void bbackw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+1][col]=pa;
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
    cout<<"Press 'F' to start"<<endl;
    string t;
    cin>>t;
    if(t=="F"){
        bool en=false;
        while(en==false){
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
                    alef(g,row,col,temp);
                }
                if(f=="A"+ str1.str()+"R"){
                    string temp="A"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    arig(g,row,col,temp);
                }
                if(f=="A"+ str1.str()+"F"){
                    string temp="A"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    aforw(g,row,col,temp);
                }
                if(f=="A"+ str1.str()+"B"){
                    string temp="A"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    abackw(g,row,col,temp);
                }

            }
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    cout<<g[i][j];
                }
                cout<<endl;
            }
            if(cob(g)==0){
                return 0;
            }
            cout<<"B turn"<<endl;
            string d;
            cin>>d;
            for(int i=0;i<5;i++){
                ostringstream str1;
                str1<< i+1;
                if(d=="B"+ str1.str()+"L"){
                    string temp="B"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    blef(g,row,col,temp);
                }
                if(d=="B"+ str1.str()+"R"){
                    string temp="B"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    brig(g,row,col,temp);
                }
                if(d=="B"+ str1.str()+"F"){
                    string temp="B"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bforw(g,row,col,temp);
                }
                if(d=="B"+ str1.str()+"B"){
                    string temp="B"+str1.str()+" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bbackw(g,row,col,temp);
                }

            }
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    cout<<g[i][j];
                }
                cout<<endl;
            }
            if(coa(g)==0){
                return 0;
            }

        }
    }
    return 0;
}
