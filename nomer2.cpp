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
