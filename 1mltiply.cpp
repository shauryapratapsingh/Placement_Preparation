[remote "origin"]
url = "https://github.com/shauryapratapsingh/Placement_Preparation"
[branch "master"]
remote = "origin"


[core]
    #include<bits/stdc++.h>
    using namespace std;
    class abc{
        public:
        int n,m;
        abc(){

        }
        abc(int a,int b);
        void getNumerator();
        void getDenominator();
    friend abc operator * (abc ,abc);
    friend abc operator + (abc ,abc);
    friend abc operator / (abc,abc);
    friend abc operator ++(abc);
    };
    abc operator ++ (abc & tmp,int)
    {
        abc t;
        t.n=tmp.n;
        t.m=tmp.m;
        tmp.n=tmp.n+tmp.m;
        return t;
    }
    abc operator ++ (abc tmp)
    {
        abc t;
        t.n=tmp.n+tmp.m;
        t.m=tmp.m;
        return t;
    }
    abc operator * (abc tmp,abc ob)
    {
        abc t;
        t.n=tmp.n*ob.n;
        t.m=tmp.m*ob.m;
        return t;
    }
    abc operator / (abc tmp ,abc ob)
    {
        abc t;
        t.n=tmp.n*ob.m;
        t.m=tmp.m*ob.n;
        return t;
    }
    abc operator + (abc tmp ,abc ob)
    {
        abc t;
        t.n=tmp.n*ob.m+tmp.m*ob.n;
        t.m=tmp.m*ob.m;
        return t;
    }
     abc::abc(int a ,int b)
    {
        this->n=a;
        this->m=b;
    }
    void abc::getNumerator()
    {
        cout<<n;
    }
    void abc::getDenominator()
    {
        cout<<"/"<<m;
    }
    int main()
    {
        abc ob1(2,3),ob2(3,5),ob3,ob4,ob5,ob6,ob7;
        cout<<"first =";
        ob1.getNumerator();
        ob1.getDenominator();
        cout<<"\nsecond = ";
        ob2.getNumerator();
        ob2.getDenominator();
        ob3=ob1*ob2;
        cout<<"\nmultiply = ";
        ob3.getNumerator();
        ob3.getDenominator();
        ob4=ob1+ob2;
        cout<<"\naddition = ";
        ob4.getNumerator();
        ob4.getDenominator();
        ob5=ob1/ob2;
        cout<<"\ndivision =";
        ob5.getNumerator();
        ob5.getDenominator();
        ob6=++ob1;
        cout<<"\nprefix++=";
        ob6.getNumerator();
        ob6.getDenominator();
        ob7=ob1++;
        cout<<"\npostfix=";
        ob7.getNumerator();
        ob7.getDenominator();
        cout<<"\nnew ob1=";
        ob1.getNumerator();
        ob1.getDenominator();
        return 0;
    }
