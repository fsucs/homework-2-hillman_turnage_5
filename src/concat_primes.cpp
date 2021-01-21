/**
    @mainpage Concat Primes

    @Kylee Hillman, Preston Turnage

    Prints a 5 character section of digits from prime numbers to the screen
    based on a user-input index from 1 to 1000.
*/

/** \file concat_primes.cpp
    \brief Prints segments of prime numbers based on user input

    This program creates and concatenates a string of prime numbers such that
    the string is 1000 numbers long. After that the program accepts user input
    in the form of an integer between 1 and 1000 and subsequently prints to
    the screen the 5 character long segment of corresponding digits.

 Requires: C++11
*/


#include<iostream>
#include<string> 
#include<cmath>  //for sqrt function
#include<assert.h>

/** 
 * This function generates a 1003 character list of prime numbers
 *
 * This function loops through numbers and analyzes if they are prime or not.
 * It then takes all the numbers deemed as primes and adds them to the string
 * of primes. The loop runs until there are 1000 characters in the string
 *
 *
 * @return std::string
 */
std::string get_concatenated_primes()
{
   std::string concat_primes = "23";

   for (int i = 5; concat_primes.length() <= 1000; i++)
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
    return concat_primes.substr(0, 1000);
}

/**
 * this function is used to get a slice of 5 digits from the concatenated
 * prime string
 */
std::string get_slice_of_5(const std::string & primes, const int index) 
{

// initialize string which will hold the slice of 5
    std::string ret = "";

/**
 * for loop which adds digits from the concatenated prime string to the
 * slice of five string which will be returned
 * loop ensures that a max of 5 digits will be returned and that the boundary
 * of 1000 will not be passed.
 */
    for (int i = index; (i < (index + 5) && i < 1000); i++)
    {

// adding digits to slice of 5
	    ret += primes[i];
    } 

// returning slice of 5
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
