int main(){ //На поле positionA(a, b) расположена ладья. Записать условие, при котором она угрожает полю positionB(c, d).
    int A;
    int B;
    using byte = unsigned char;
    std::pair<byte, byte> position;
    std::cin >> position.first >> position.second;
    std::pair<byte, byte> position1;
    std::cin >> position1.first >> position1.second;
    if((1<=position.first<=8) && (1<=position.second<=8) && (1<=position1.first<=8) && (1<=position1.second<=8)){
        if(position.first==position1.first || position.second==position1.second){
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
