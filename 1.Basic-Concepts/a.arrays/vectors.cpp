#include <vector>
#include <iostream>

int main()
{
     std::vector<int> num_vec {2,5,3,90,500};

     for (int i = 0; i < num_vec.size(); i++)
     {
        std::cout << "Vec array at index "<< i << " : " << num_vec.at(i) << "\n";
     }
     

    return 0;
}