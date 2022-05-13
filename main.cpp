#include <iostream>
#include "Text.h"

int main() {
	std::cout << "Hello, World!" << std::endl;

	Text text;

	text.printText();

	text.pushNewLetter( 'c' );
	text.pushNewLetter( 'a' );
	text.pushNewLetter( 't' );

	text.printText();  // tac

	text.reverseText();

	text.printText();  // cat

//#ifndef NDEBUG
//	std::cout << "Starting Testing" << std::endl;
//
//	// Empty list -> No letters
//	Text text2;
//	text2.printText();
//
//	// a -> a
//	Text text3;
//	text3.pushNewLetter( 'a' );
//	text3.printText();
//
//	// ba -> ab
//	Text text4;
//	text4.pushNewLetter( 'a' );
//	text4.pushNewLetter( 'b' );
//	text4.printText();
//	text4.reverseText();
//	text4.printText();
//
//	// cba -> abc
//	Text text5;
//	text5.pushNewLetter( 'a' );
//	text5.pushNewLetter( 'b' );
//	text5.pushNewLetter( 'c' );
//	text5.printText();
//	text5.reverseText();
//	text5.printText();
//
//	// dcba -> abcd
//	Text text6;
//	text6.pushNewLetter( 'a' );
//	text6.pushNewLetter( 'b' );
//	text6.pushNewLetter( 'c' );
//	text6.pushNewLetter( 'd' );
//	text6.printText();
//	text6.reverseText();
//	text6.printText();
//
//	// edcba -> abcde
//	Text text7;
//	text7.pushNewLetter( 'a' );
//	text7.pushNewLetter( 'b' );
//	text7.pushNewLetter( 'c' );
//	text7.pushNewLetter( 'd' );
//	text7.pushNewLetter( 'e' );
//	text7.printText();
//	text7.reverseText();
//	text7.printText();
//
//	std::cout << "Ending Testing" << std::endl;
//#endif

	return 0;
}