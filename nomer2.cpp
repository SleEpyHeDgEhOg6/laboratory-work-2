int main(){ //На поле positionA(a, b) расположена ладья. Записать условие, при котором она угрожает полю positionB(c, d).
    int A;
    int B;
    int a,b,c,d;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    if(a<=8 && a>=1 && b<=8 && b>=1 && c>=1 && c<=8 && d>=1 && d<=8){
        if(a==c || b==d){
          std::cout<<"Ладья угрожает B"<<std::endl;  
        }
        else{
            std::cout<<"Ладья не угрожает B"<<std::endl;
        }
    }
    else{
        std::cout<<"Неправильные координаты"<<std::endl;
    }
    return 0;
}

#include <cmath> //На поле positionA(a, b) расположен слон. Записать условие, при котором он угрожает полю positionB(c, d)
int clony(int a,int b,int c,int d){
    return (std::abs(a-c)==std::abs(b-d)|| (a+b==c+d));
}
int main(){
    int A;
    int B;
    int a,b,c,d;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    if(a<=8 && a>=1 && b<=8 && b>=1 && c>=1 && c<=8 && d>=1 && d<=8){
        if (clony(a,b,c,d)){
            std::cout<<"Слон угрожает B"<<std::endl;
        }
        else{
            std::cout<<"Слон не угрожает B"<<std::endl;
        }
    }
    else{
       std::cout<<"Неправильные координаты"<<std::endl; 
    }
    return 0;
}

int korol(int a ,int b,int c,int d){ //На поле positionA(a, b) расположен король. Записать условие, при котором он может одним ходом попасть на поле positionB(c, d)
    return (std::abs(c-a)<=1 && std::abs(d-b)<=1);
}
int main(){
    int A;
    int B;
    int a,b,c,d;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    if(a<=8 && a>=1 && b<=8 && b>=1 && c>=1 && c<=8 && d>=1 && d<=8){
        if (korol(a,b,c,d)){
            std::cout<<"Король может попасть на поле B"<<std::endl;
        }
        else{
            std::cout<<"Король не может попасть на поле B"<<std::endl;
        }
    }
    else{
        std::cout<<"Неверные координаты"<<std::endl;
    }
    return 0;
}

int ferz(int a,int b,int c,int d){ //На поле positionA(a, b) расположен ферзь. Записать условие, при котором он угрожает полю positionB(c, d)
    if(b==d || a==c || abs(c-a)==abs(d-b)){
        return 1;
    }
}
int main(){
    int A;
    int B;
    int a,b,c,d;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    if(a<=8 && a>=1 && b<=8 && b>=1 && c>=1 && c<=8 && d>=1 && d<=8){
        if (ferz(a,b,c,d)){
            std::cout<<"Ферзь угрожает B"<<std::endl;
        }
        else{
            std::cout<<"Ферзь не угрожает B"<<std::endl;
        }
    }
    else{
        std::cout<<"Неверные координаты"<<std::endl;
    }
    return 0;
}

int pehka(int a,int b,int c,int d){ //На поле positionA(a, b) расположена белая пешка. Записать условие, при котором она может одним ходом попасть на поле positionB(c, d):

    //при обычном ходе;
    //когда она "бьет" фигуру или пешку соперника.

    if(c==a && d==b+1 || abs(c-a)==1 && d==b+1){ //(c==a && d==b+1)-обычный ход (abs(c-a)==1 && d==b+1))-бьет фигуру или пешку соперника 
        return 1;
    }
}
int main(){
    int A;
    int B;
    int a,b,c,d;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    if(a<=8 && a>=1 && b<=8 && b>=1 && c>=1 && c<=8 && d>=1 && d<=8){
        if (pehka(a,b,c,d)){
            std::cout<<"Попадает на поле B"<<std::endl;
        }
        else{
            std::cout<<"Не попадает на поле B"<<std::endl;
        }
    }
    else{
        std::cout<<"Неверные координаты"<<std::endl;
    }
    return 0;
}
