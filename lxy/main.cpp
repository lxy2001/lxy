
#include <iostream>
#include <cmath>

using namespace std;
class Point{
public:
    double Distance(int e,int w,int q,int p){
        x=pow(q-e,2);
        s=pow(p-w,2);
        m=sqrt(x+s);
        return m;
    }
    
private:
    double x,s,m;
};
int main(){
    int x1,y2,x2,y1;
    cin>>x1>>y1>>x2>>y2;
    Point a;
    printf("%.2f",a.Distance(x1,y1,x2,y2));
    return 0;
} 
