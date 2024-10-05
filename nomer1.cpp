
#include <iostream>

using namespace std;

int main(){ //каждое из чисел X и Y нечетное
    int x;
    int y;
    int z;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    if (x%2!=0 && y%2!=0){
        std::cout<<"condition is true"<<std::endl;
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
    
}
int main2(){ //только одно из чисел X и Y меньше 20
    int x1;
    int y1;
    
    cout<<"x1: ";
    cin>>x1;
    cout<<"y1: ";
    cin>>y1;
    
    if ((x1<20 && y1>20)||(x1>20 && y1<20)){
        std::cout<<"condition is true"<<std::endl;
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
}

int main3(){ //хотя бы одно из чисел X и Y равно нулю
    int x1;
    int y1;
    cout<<"x1: ";
    cin>>x1;
    cout<<"y1: ";
    cin>>y1;
    if (x1==0 || y1==0){
        std::cout<<"condition is true"<<std::endl;
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
}

int main4(){ //каждое из чисел X, Y, Z отрицательное
    int x;
    int y;
    int z;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    if(x<0 && y<0 && z<0){
        std::cout<<"condition is true"<<std::endl;
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
}

int main5(){ //только одно из чисел X, Y и Z кратно пяти
    int x;
    int y;
    int z;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    if ((x%5==0 && y%5!=0 && z%5!=0)||(x%5!=0 && y%5==0 && z%5!=0)||(x%5!=0 && y%5!=0 && z%5==0)){
       std::cout<<"condition is true"<<std::endl; 
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
}

int main6(){
    int x;
    int y;
    int z;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    if(x>100 || y>100 || z>100){
        std::cout<<"condition is true"<<std::endl; 
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
}
