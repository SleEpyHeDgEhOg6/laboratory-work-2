#include <iostream>

using namespace std;

int main(){
    int i=1;
    int y=7;
    for(i;i<10;++i){
        std::cout<<i<<"*"<<y<<"="<<i*y<<std::endl;
    }
    return 0;
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    for (int i=1;i<10;++i){
        std::cout<<i<<"*n = "<<i*n<<std::endl;
    }
    return 0;
}
