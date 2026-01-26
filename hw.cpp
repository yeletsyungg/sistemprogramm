#include <iostream>

// int main (){
//     int a;
//     std::cin>> a;
//     std::cout<<"hello world"<<std::endl;
//     std::cerr<<"ERROR!"<<std::endl;

//     return a;

// }






// int main(){
//     int nail[9];
//     for (int i = 0; i < 9; i++){
//         nail[i]=i;
//     }

//     for (int i = 0; i < 9; i++){
//         std::cout << "nail[" << i << "]=" << nail[i] << "\n";
        
    
//     }
// }


int main(int argc, char*argv[]){
    for (int i = 0; i < argv; i++){

        std::cout<<"argv["<< i <<"]=" << argv[i] << "\n";
    }



}
