// FILE_HEADER_START
//     File        : largeelement.c
//     Description : Use case for sort and search - 
//                   Find largest element in an array.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
package main

import "fmt"

/* This package provides API to sort any list type */
import "sort"

func main() {
    /* List initialization in golang */
    list := []int{5,2,3,1,4,6,9,8,7,10}
    
    /* Ints is an API to sort list of int */
    sort.Ints(list);
    
    fmt.Println("Largest element is", list[len(list)-1]);
}
