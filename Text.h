///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.h
/// @version 1.0
///
/// @author Elijah Lopez <elijahl7@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_FINAL_EXAM__TEXT_H_
#define EE205_FINAL_EXAM__TEXT_H_

#include "Letter.h"

// Holds and manipulates Linked List
class Text {
 private:
	Letter *head = nullptr;

 public:
	// Adds Letter to the beginning of Linked List
	// Uses new keyword to add new letter to hap
	void pushNewLetter(char newLetter);

	// Traverses the linked list, printing the value at each node (no carriage returns)
	// When the linked list has been traversed, print a carriage return.
	// If the linked list is empty, print No letters
	void printText();

	// Reverses the order of the nodes in the linked list.
	// You can not use any external libraries.
	// Deal with the base cases first (empty list and lists with only 1 entry)
	// then use pencil-and-paper to diagram the linked list and how you want to manipulate it.
	void reverseText();

};

#endif //EE205_FINAL_EXAM__TEXT_H_
