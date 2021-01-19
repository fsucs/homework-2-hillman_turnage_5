/** 
    @mainpage Concat Primes

    @Kylee Hillman, Preston Turnage

    What does this program do in short? Perhaps the name of the project goes here?
*/

/** \file concat_primes.cpp
    \brief Brief explanation...
    
    Long explination goes here...

    Requires: C++11
*/


#include<iostream>
#include<string>


/** \brief Brief function explaination
   
   And a long one...

    @return std::string
*/
std::string get_concatenated_primes()
{
    std::string concat_primes = "";
    
std::string concat_primes = "23";
    //std::string starting_string = "23";

    int prime_num;
    int prime_num2;
    for (int i = 1; i < 15; i++)
       {
       int flag = 0;
       prime_num = (6*i) - 1;
       prime_num2 = (6*i) + 1;
          int divisor = 3; 
          do
          {
              if (prime_num % divisor == 0)
                 {
                    flag = 1;
                    std::cout<< "ghjk";
                 }
                 else if (prime_num2 % divisor == 0)
                 {
                     flag = 1;
                 }
                 else 
                    divisor++;
          } while ((divisor < (prime_num2/2)) && (flag == 0));
        
       if (flag = 1)
          continue;
       else
          concat_primes = concat_primes + std::to_string (prime_num) + std::to_string (prime_num2); 
       }
 
 std:: cout << concat_primes.length() << std::endl;
 std:: cout << concat_primes << std::endl;
          
    return concat_primes.substr(0, 1000);
}


std::string get_slice_of_5(const std::string & primes, const int index)
{
    std::string ret = "";
    //Complete this function
    return ret;
}

int main(int argc, char *argv[]){
    using namespace std;
    int n;
    string concat_primes;
    if (argc >= 2){
        concat_primes = get_concatenated_primes();
        assert(get_slice_of_5(concat_primes, 3) == "71113");
        cout<<"Unit Test 1 passed\n";
        assert(get_slice_of_5(concat_primes, 6) == "13171");
        cout<<"Unit Test 2 passed\n";
        assert(get_slice_of_5(concat_primes, 10) == "19232");
        cout<<"Unit Test 3 passed\n";
        assert(get_slice_of_5(concat_primes, 120) == "92332");
        cout<<"Unit Test 4 passed\n";
        assert(get_slice_of_5(concat_primes, 998) == "91");
        cout<<"Unit Test 5 passed\n";
        
    } else{
        cout<< "Please input n: ";
        while(std::cin >> n)
        {
            concat_primes = get_concatenated_primes();
            std::cout << get_slice_of_5(concat_primes, n) << std::endl;
            cout<< "Please input n: ";
        }
    }
    return 0;
}
