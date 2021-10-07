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
void as1lef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col+2]=pa;
    return ;
}
void as1rig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col-2]=pa;
    return ;
}
void as1forw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+2][col]=pa;
    return ;
}
void as1backw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-2][col]=pa;
    return ;
}
void as2lef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+2][col+2]=pa;
    return ;
}
void as2rig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+2][col-2]=pa;
    return ;
}
void as2forw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-2][col+2]=pa;
    return ;
}
void as2backw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-2][col-2]=pa;
    return ;
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
void bs1lef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col-2]=pa;
    return ;
}
void bs1rig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row][col+2]=pa;
    return ;
}
void bs1forw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-2][col]=pa;
    return ;
}
void bs1backw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+2][col]=pa;
    return ;
}
void bs2lef(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-2][col-2]=pa;
    return ;
}
void bs2rig(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row-2][col+2]=pa;
    return ;
}
void bs2forw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+2][col-2]=pa;
    return ;
}
void bs2backw(vector<vector<string> > &g,int row,int col,string pa){
    g[row][col]=" - ";
    g[row+2][col+2]=pa;
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
        //set h1 of A
        //set h2 of A
        //set h1 of B
        //set h2 of B
        cout<<"Set H1 of A"<<endl;
        string ha1;
        cin>>ha1;
        cout<<"Set H2 of A"<<endl;
        string ha2;
        cin>>ha2;
        cout<<"Set H1 of B"<<endl;
        string hb1;
        cin>>hb1;
        cout<<"Set H2 of B"<<endl;
        string hb2;
        cin>>hb2;
        while(en==false){
            cout<<"A turn"<<endl;
            string f;
            cin>>f;
            string temp="";
            temp+=f[0];
            temp+=f[1];
            if(temp==ha1){
                if(f[2]=='L'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as1lef(g,row,col,temp);
                }
                if(f[2]=='R'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as1rig(g,row,col,temp);
                }
                if(f[2]=='F'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as1forw(g,row,col,temp);
                }
                if(f[2]=='B'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as1backw(g,row,col,temp);
                }

            }
            else if(temp==ha2){
                if(f[2]=='L'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as2lef(g,row,col,temp);
                }
                if(f[2]=='R'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as2rig(g,row,col,temp);
                }
                if(f[2]=='F'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as2forw(g,row,col,temp);
                }
                if(f[2]=='B'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    as2backw(g,row,col,temp);
                }
            }
            else{
                if(f[2]=='L'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    alef(g,row,col,temp);
                }
                if(f[2]=='R'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    arig(g,row,col,temp);
                }
                if(f[2]=='F'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    aforw(g,row,col,temp);
                }
                if(f[2]=='B'){
                    temp+=" ";
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
            temp="";
            temp+=d[0];
            temp+=d[1];
            if(temp==hb1){
                if(d[2]=='L'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs1lef(g,row,col,temp);
                }
                if(d[2]=='R'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs1rig(g,row,col,temp);
                }
                if(d[2]=='F'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs1forw(g,row,col,temp);
                }
                if(d[2]=='B'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs1backw(g,row,col,temp);
                }

            }
            else if(temp==hb2){
                if(d[2]=='L'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs2lef(g,row,col,temp);
                }
                if(d[2]=='R'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs2rig(g,row,col,temp);
                }
                if(d[2]=='F'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs2forw(g,row,col,temp);
                }
                if(d[2]=='B'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bs2backw(g,row,col,temp);
                }
            }
            else{
                if(d[2]=='L'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    blef(g,row,col,temp);
                }
                if(d[2]=='R'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    brig(g,row,col,temp);
                }
                if(d[2]=='F'){
                    temp+=" ";
                    int row=ro(g,temp);
                    int col=co(g,temp);
                    bforw(g,row,col,temp);
                }
                if(d[2]=='B'){
                    temp+=" ";
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
