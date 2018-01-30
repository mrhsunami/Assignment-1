//
//  main.c
//  FizzBuzz
//
//  Created by Nathan Hsu on 2018-01-29.
//  Copyright © 2018 Nathan Hsu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /* Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz" */
    
    /* Pseudocode
     for 1 to 100 do this:
        - check if the number is a multiple of 3, if true (if not true, then do next check) then check if it is a multiple of 5. If the second check is also true, then FizzBuzz, break. If not true then Fizz, break
        - check if number is multi of 5, if true (if not true then do next step), then check if it is a multi of 3. if second check is also true, then FizzBuzz, break. If not true then Buzz, break
        - print the number, break
     */
    
    for (int i = 1; i < 101; i++) {
        if (i % 3 == 0 && i % 5 == 0 ) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
