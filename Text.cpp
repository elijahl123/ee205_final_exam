//
// Created by Elijah Lopez on 5/13/22.
//

#include "Text.h"
#include <iostream>

using namespace std;

// Adds Letter to the beginning of Linked List
// Uses new keyword to add new letter to heap
void Text::pushNewLetter(char newLetter) {
	Letter *newLetterNode;
	newLetterNode = new Letter();
	newLetterNode->value = newLetter;
	newLetterNode->next = head;
	head = newLetterNode;
}

// Traverses the linked list, printing the value at each node (no carriage returns)
// When the linked list has been traversed, print a carriage return.
// If the linked list is empty, print No letters
void Text::printText() {
	Letter *currentLetter = head;

	if (currentLetter == nullptr) {
		cout << "No letters" << endl;
	} else {
		while (currentLetter != nullptr) {
			cout << currentLetter->value;
			currentLetter = currentLetter->next;
		}
		cout << endl;
	}
}

// Reverses the order of the nodes in the linked list.
// Deal with the base cases first (empty list and lists with only 1 entry)
// then use pencil-and-paper to diagram the linked list and how you want to manipulate it.
void Text::reverseText() {

	if (head == nullptr) {
		return;
	}

	if (head->next == nullptr) {
		return;
	}

	Letter *currentLetter = head;
	Letter *previousLetter = nullptr;
	Letter *nextLetter = nullptr;

	while (currentLetter != nullptr) {
		nextLetter = currentLetter->next;
		currentLetter->next = previousLetter;
		previousLetter = currentLetter;
		currentLetter = nextLetter;
	}
	head = previousLetter;
}

