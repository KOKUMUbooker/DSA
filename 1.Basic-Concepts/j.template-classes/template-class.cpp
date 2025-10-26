#include <iostream>

template <typename T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a,T b);
        T add();
        T subtract();
};
 
template <class T>
Arithmetic<T>::Arithmetic(T a,T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add() {
    return this->a + this->b;
}
template <class T>
T Arithmetic<T>::subtract(){
    return this->a - this->b;
}

int main(){
    Arithmetic<int> ar {10,8};
    std::cout << "Add ar class members : "<< ar.add() <<std::endl; 
    
    Arithmetic<float> ar2 {10.5, 5.5};   
    std::cout << "Subtract ar2 class members : "<< ar2.subtract() <<std::endl; 
    
    return EXIT_SUCCESS;
}

