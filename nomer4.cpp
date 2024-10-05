int main(){ //произведение всех целых чисел от 8 до 15
    int res=8;
    for(int i=9;i<16;++i){
        res=res*i;
    }
    std::cout<<res<<std::endl;
    return 0;
}

int main(){ //произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры; 1 < a < 20);
    int a;
    cout<<"a: ";
    cin>>a;
    if (a<=1 || a>=20){
        std::cout<<"Диапазон 1 < a < 20"<<std::endl;
        return 1;
    }
    int ot=1;
    for (int i=a;i<=20;++i){
        ot*=i;
    }
    std::cout<<ot<<std::endl;
    return 0;
}

int main(){ //произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры; 1 < b < 20)
    int b;
    cout<<"b: ";
    cin>>b;
    if (b<=1 || b>=20){
        std::cout<<"Диапазон 1 < b < 20"<<std::endl;
        return 1;
    }
    int ty=1;
    for(int i=1;i<=b;++i){
        ty*=i;
    }
    std::cout<<ty<<std::endl;
    return 0;
}

int main(){ //произведение всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a)
    int a;
    int b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    int otvet=1;
    if (a>b){
        std::cout<<"a должно быть меньше b"<<std::endl;
        return 1;
    }
    for(a;a<=b;++a){
        otvet*=a;
    }
    std::cout<<otvet<<std::endl;
}
