// Code Name-
//To print sum of all elements present in array

// Code Explaination-

//In this array will print element with add them with each other 
//in this n is size of arrays
//in this sum variable stores element of an array by each interval of loop one by one element will be stored in it
// in last all element will be added and again stored in sum variable
// and return sum will return addition of all elements present in array

//CODE
     int sum=0;
	    for(int i=0; i<n; i++){
	       sum=sum+arr[i];
	    }
	    return sum;