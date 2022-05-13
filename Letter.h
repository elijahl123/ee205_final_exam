///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Letter.h
/// @version 1.0
///
/// @author Elijah Lopez <elijahl7@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_FINAL_EXAM__LETTER_H_
#define EE205_FINAL_EXAM__LETTER_H_

#include "Text.h"

// A Node in a Linked List with no getters and setters
class Letter {

	friend class Text;

 protected:
	char value;
	Letter *next;
};

#endif //EE205_FINAL_EXAM__LETTER_H_
