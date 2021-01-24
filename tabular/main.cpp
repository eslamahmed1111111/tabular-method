#include <iostream>
int var=0;
using namespace std;
#include <vector>
#include <math.h>






void turntoab(vector<int> &dont,int d){
int i,j=0,temp1,k=1,temp2;long long int temp3,p;
char c; int v;
for(i=0;i<dont.size();i++){
    temp1=dont[i];j=0;

    while(j<d){
            v=pow(10,(d-j));
        while(v>k){
            k*=10;
        }
    temp3=temp1%k;
 ++j;k=1;
  v=pow(10,(d-j));
  while(v>k){
            k*=10;
        }

    temp2=temp3/k;k=1;
        if(temp2==0){
            c=97+j-1;
            cout<<c;
        }
        else if(temp2==1){
            c=65+j-1;
            cout<<c;
        }


    }
    cout<<endl;

}

}



void turntodec2(vector<int> &dont,vector<int> &ess,int d,vector<int> &k,vector<int> &ess2){
    vector<int> k2;
int f=1,sum=0,i,j,n,n2,t,sum2=0,c=0,m;
int b=0;
for(i=0;i<dont.size();i++){
    n=dont[i];
    n2=dont[i];
    sum=0;
    while(n>0){
      t=n%10;
      if(t==1){
         sum+=f;
      }
      else if(t==2){
        k2.push_back(f);c++;
      }
      n/=10;f*=2;
    }
    f=1;
       if(k[b]==sum){
            ess2.push_back(dont[i]);b++;}

    int u1=0;
      for(j=0;j<k2.size();j++){
          if(sum+k2[j]==k[b]){ess2.push_back(dont[i]);b++;}
             u1++;
      }
      int u2=0;

       for(j=0;(j<k2.size()-1)&&u1>0;j++){
         if(sum+k2[j]+k2[j+1]==k[b]){ess2.push_back(dont[i]);b++;}
        u2++;
       }
       u1=0;
      int u3=0;
       for(j=0;j<k2.size()-2&&u2>0;j++){
                 if(sum+k2[j]+k2[j+1]+k2[j+2]==k[b]){ess2.push_back(dont[i]);b++;}

        u3++;
       }
       u2=0;
       for(j=0;j<k2.size()-3&&u3>0;j++){
        if(sum+k2[j]+k2[j+1]+k2[j+2]+k2[j+3]==k[b]){ess2.push_back(dont[i]);b++;}

       }
       u3=0;



}

}
void turntodec(vector<int> &dont,vector<int> &ess,vector<int> &k,int d){

int f=1,sum=0,i,j,n,n2,t,sum2=0,c=0;
for(i=0;i<dont.size();i++){
    n=dont[i];
    n2=dont[i];
    sum=0;
    while(n>0){
      t=n%10;
      if(t==1){
         sum+=f;
      }
      else if(t==2){
        k.push_back(f);c++;
      }
      n/=10;f*=2;
    }
    f=1;
    ess.push_back(sum);
int u1=0;
      for(j=0;j<k.size();j++){
          ess.push_back(sum+k[j]);u1++;
      }
      int u2=0;
       for(j=0;(j<k.size()-1)&&u1>0;j++){
        ess.push_back(sum+k[j]+k[j+1]);u2++;
       }
       u1=0;
      int u3=0;
       for(j=0;j<k.size()-2&&u2>0;j++){
        ess.push_back(sum+k[j]+k[j+1]+k[j+2]);u3++;
       }
       u2=0;
       for(j=0;j<k.size()-3&&u3>0;j++){
        ess.push_back(sum+k[j]+k[j+1]+k[j+2]+k[j+3]);
       }
       u3=0;
       k.clear();
}
int y=0;k.clear();
for(i=0;i<ess.size();i++){
  for(j=0;j<ess.size();j++){
    if(ess[i]==ess[j]){
      y++;
    }
}
if(y==1){
    k.push_back(ess[i]);
}
y=0;
}

}


void hbd(vector<vector<int> >&tab,vector<vector<int> >&tab2,vector<int>&v,vector<int> &dont){
    int i,j,k,t1,t2,f1,f=1;
var=0;
 vector<vector<int> >temp;
    tab2.clear();
    temp=tab;
for ( i = 0; i < tab.size()-1; i++) {
        for ( j = 0; j < tab[i].size(); j++){
        for ( int k = 0; k < tab[i+1].size(); k++){
        t1=tab[i][j];t2=tab[i+1][k];
        f1=t1;
        int d=0;
        while(t1>0&&t2>=0&&d<2){
            if(t1%10==t2%10){
                t1/=10;t2/=10;
                f*=10;
            }
            else if(t1%10!=t2%10&&d<2){
                    f1+=f;
                f*=10;
                t1/=10;t2/=10;d++;
            }
        }

        if(d<2){
               v.push_back(f1);
                temp[i][j]=-1;temp[i+1][k]=-1;
                var++;
                }
        d=0;f=1;
        }

        }
        tab2.push_back(v);
        v.clear();
        }

if(var>0){
         for ( i = 0; i < temp.size(); i++) {
        for ( j = 0; j < temp[i].size(); j++){
            if(temp[i][j]!=-1){
        dont.push_back(temp[i][j]);
            }}
    }
      temp.clear();

  hbd(tab2,tab,v,dont);

}
else {
          for ( i = 0; i < temp.size(); i++) {
        for ( j = 0; j < temp[i].size(); j++){
            if(temp[i][j]!=-1){
        dont.push_back(temp[i][j]);
            }}
    }

        return;}
}

void tarteeb(vector<int> &input,vector<vector<int> >&tab,int d){
 int temp,sum=0;
    vector<int> v;
for(int i=0;i<=d;i++){
for(int j=0;j<input.size();j++){
    temp=input[j];
    while(temp>0){
        sum+=temp%2;
        temp/=2;
    }
    if(sum==(d-i)){
            temp=input[j];
        v.push_back(temp);
    }
    sum=0;
}
tab.push_back(v);
v.clear();

}
}




int turntobinary(vector<vector<int> >&tab){
int f=1,sum=0,i,j,n;
for ( i = 0; i < tab.size(); i++) {
        for ( j = 0; j < tab[i].size(); j++){
                n=tab[i][j];
        while(n>0){
           sum+=n%2*f;
             f*=10;
               n/=2;}
               tab[i][j]=sum;
               sum=0;f=1;
             }}

}




int main()
{
    vector<int> ess2;
    vector<int> k;
   vector<int> ess;
   vector<int> input;
   vector<int> v;
     vector<int> dont;
     vector<vector <int> >tab;
     vector<vector <int> >tab2;
vector<vector<int> >temp;
     int n,i,c,d,j;
    cout<<"write how many variables of tabular"<<endl;
    cin>>d;
    cout<<"write input 1 and -1 if u finish"<<endl;
    cin>>c;
     i=0;
    while (c!=-1){
            input.push_back(c);i++;
            cout<<"write input "<<i+1<<endl;
        cin>>c;
    }
tarteeb(input,tab,d);
cout << endl;
cout << "tarteeb:"<<endl;
for ( i = 0; i < tab.size(); i++) {
        for ( j = 0; j < tab[i].size(); j++)
             cout << tab[i][j] << " ";
cout << endl;}
turntobinary(tab);
cout<<"tab1 binary"<<endl;
for ( i = 0; i < tab.size(); i++) {
        for ( j = 0; j < tab[i].size(); j++)
             cout << tab[i][j] << " ";
cout << endl;}

hbd(tab,tab2,v,dont);
int u;
for(u=0;u<5;u++){
for ( i = 0; i < dont.size(); i++) {
    for ( j = i+1; j < dont.size(); j++) {
            if(dont[i]==dont[j]){
                    dont.erase(dont.begin()+i);

            }

    }}}

cout << endl;
cout<<"PI binary"<<endl;
for ( i = 0; i < dont.size(); i++) {
             cout << dont[i] << " ";
cout << endl;}
cout << endl;
cout<<"PI by charcters"<<endl;
turntoab(dont,d);
cout<<"ess";
turntodec(dont,ess,k,d);
turntodec2(dont,ess,d,k,ess2);
for(u=0;u<5;u++){
for ( i = 0; i < ess2.size(); i++) {
    for ( j = i+1; j < ess2.size(); j++) {
            if(ess2[i]==ess2[j]){
                    ess2.erase(ess2.begin()+i);
            }

    }}}
cout<<"essential:"<<endl;
turntoab(ess2,d);




    return 0;
}
