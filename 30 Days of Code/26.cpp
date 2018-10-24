#include<bits/stdc++.h>

using namespace std;

class Date
{
    public:
        Date(int d,int m,int y)
        {
            dd=d;
            mm=m;
            yy=y;
        }
        bool is_leap(int y)
        {
            if(y<1||y>3000) return false;
            else
            {
                if(y%4==0)
                {
                    if(y%100==0)    return false;
                    else return true;
                }
                else    return false;
            }
        }
    
        int dim(int m,int y)
        {
            int leap[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            int not_leap[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            if(is_leap(y))    return leap[m-1];
            else return not_leap[m-1];    
        }
        int da()    
        {
            return dd;
        }
        int ma()
        {
            return mm;
        }
        int ya()
        {
            return yy;
        }
    
        private:
        int dd;
        int mm;
        int yy;    
};
        
    int compare(Date a,Date b)
        {
            if(((a.ya()-b.ya())==0)&&((a.ma()-b.ma())==0)&&((a.da()-b.da())==0))    return 1;
            else if(((a.ya()-b.ya())==0)&&((a.ma()-b.ma())==0))    return 2;
            else if((a.ya()-b.ya())==0)    return 3;
            else if(a.ya()>b.ya())    return 4;
        else return 0;
        }

int fine(Date a,Date b)
        {
            int x=compare(a,b);
            if(x==1)
                return 0;
            else if(x==2)
                return (15*(a.da()-b.da()));
            else if(x==3)
                return (500*(a.ma()-b.ma()));
            else if(x==4) 
                return 10000; 
            else return -1;
        }

int main()
{
        int d,m,y;
        int d1,m1,y1;
        int k;
        cin>>d>>m>>y;
        Date act(d,m,y);
        cin>>d1>>m1>>y1;
        Date exp(d1,m1,y1);
        k=fine(act,exp);
      if(k>=0) cout<<k<<endl;
        else cout<<"0"<<endl;
        return 0;
        
}
