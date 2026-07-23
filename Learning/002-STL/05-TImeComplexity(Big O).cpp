#include <iostream>

// What is the Big O notation?


// It shows how an algorithm scales with the size of it's input.


                    // ==============================
                    // Three Rules of Big O
                    // ==============================

                    // 1. Ignore constants.
                    //
                    // O(2n) -> O(n)
                    // O(100) -> O(1)


                    // 2. Keep the fastest-growing term.
                    //
                    // O(n² + n) -> O(n²)


                    // 3. Sequential loops add.
                    //    Nested loops multiply.




























                                //          Types of Notations and complexities.



//          1: O(1)     -       Constant Notation: Work never changes no matter the input size.

                                // e.g - vector.push_back(), vector[500], stack.top() etc.


//          2: O(log n)   -     Logarithmic Time: Every comparison cuts half of the remaining possibilities.
                                // e.g - binary search.



//          3: O(n)     -       Linear Time: Work grows linearly with the input size.
                                // e,g - single for loop.


//          4: O(n^2)   -       Quadratic Time: Work grows quadratically.
                                // e.g - Nested Loop. 


//          5: O(n log n):
                                // e.g -    binary search 0(log n) inside a single for loop 0(n) = 0(n log n)


//          6: O(2^n)   -        Never use this, work grows exponentially.
                                //  e.g - Stack overflow (wrong logic in recursion)


//          7: O(n!)    -        Might as well just quit your job.
                                //  e.g - 5! -> 120.        10! -> 3628800 operations. 





                                //              Ranking: fastest to slowest.

                                /*
                                1: O(1)
                                2: O(log n)
                                3: O(n)
                                4: O(n log n)
                                5: O(n^2)
                                6: O(2^n)
                                7: O(n!)
                                
                                */














//                                              QnA:



/*
Q 1-
    
    for(int i = 0; i < n; i++)
    {
        // n operations
    }

    for(int j = 0; j < n; j++)
    {
        // another n operations
    }

    time complexity?






Q 2- 
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 10; j++)
        {

        }
    }
    
    Time complexity?



Q 3- 

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {

            }
        }
    }

    Time complexity?
*/




                                    //      Average Case vs Best Case vs Worst Case



    // Suppose we have
    /*

        vector<int> nums = {10, 20, 30, 40, 50};


                bool found = false;

                for(int i = 0; i < nums.size(); i++)
                {
                    if(nums[i] == target)
                    {
                        found = true;
                        break;
                    }
                }
    
    
    
    Best case:  let's say we're searching for 10.

                10 is first element. total operations = O(1).



    Average Case: it's lit just the average. (n/2)
                  but we ignore constants in big O notation.

                  so time complexity = O(n)
    
    
    Worst Case: we're looking for 50. 50 doesn't exist or is the last element.

            total operations = O(n).
    
    
    */










//                  Fun Fact: The standard convention for big O notation is the worst case scenario of any complexity.


