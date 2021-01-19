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
#include<cmath>
#include<assert.h>
#include<sstream>

/** \brief Brief function explaination
   
   And a long one...

    @return std::string
*/
std::string get_concatenated_primes()
{
    
   std::string concat_primes = "23";

   for (int i = 5; i < 1989; i++)
   {
   int flag = 0;
      for (int j = 2; j <= sqrt(i); j++)
      {
         if (i % j == 0)
            flag = 1;
      }
      if (flag == 0)
	concat_primes =
	  concat_primes + std::to_string(i);
   }
   concat_primes.erase(1000, 1003);

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
