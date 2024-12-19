 #include <iostream>
 using namespace std;
 class sample 
 {
    private:
    float a,b,c;
    public:
    void input();
    void add();
    void sub();
    void multi();
    void div();
 };
 void sample:: input(){
    cout<<"enter the two integer value =";
    cin>>a>>b;
 }
 void sample::add(){
    c=a+b;
    cout<<"add="<<c<<endl;
 }
 void sample::sub(){
    c=a-b;
    cout<<"sub="<<c<<endl;
 }
 void sample:: multi(){
    c=a*b;
    cout<<"multi="<<c<<endl;
 }
 void sample::div(){
    c=a/b;
    cout<<"div="<<c<<endl;
 }
 int main(){
    sample ob;
    ob. input();
     ob. add();
     ob. sub();
     ob. multi();
     ob. div();

 }

