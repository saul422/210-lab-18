//Write a C++ program which could be used to efficiently store these reviews. Implement this in a list.
#include <iostream>
#include <string>
using namespace std;

//Create a node for reviews


// write code that adds nodes to the tail of the linked list. The sample code in this module contains the code to add notes to the head of the linked list.//
struct Review {
    double rating;  //data
    string comments;
    Review *next;     //ptrs
}


int main () {
    Review* head nullptr;
    int choice;
    char continueInput;
    double rating;
    string comments;

//At program startup, ask the user which mode to use, new nodes at the head or the tail of the linked list.//
cout << "Which linked list method should we use?\n";
cout<< " [1] New nodes are added at the head of the linked list\n";
cout<< " [2] New nodes are added at the tail of the linked list.\n";
cin>> "choice: ";
cin.ignore();



//Obtain two pieces of data from the user, the rating and the comments. Store these in the linked list.//
do {
    cout<< "Enter review rating 0 - 5: ";
    cin>> rating;
    cin.ignore();
    cout<< "Enter review comments: ";
    getline(cin, comments);

    if (choice ==1){
        head = addToFront(head, rating, comments);
    } 
    else if (choice == 2)
    {
        head = addToTail(head, rating, comments);
    }
    
}

//ask user for rating ranging from 0 - 5, rating data type is double

//ask user if they have any comments stored in linked list

//ask user if they have another review, yes or no question

//display all reviews, review #:, rating:, traversing a linked list
return 0;
}