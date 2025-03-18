/*
 * [YOUR NAME]
 * [YOUR AUBURN USERID]
 * main.cpp
 * 
 * Compile: g++ main.cpp -o main -std=c++14
 * Run: ./main
 * 
 * [DESCRIPTION OF ANY HELP OR SOURCES USED]
 */

#include <iostream>
#include <cstdlib>
#include <cassert>
#include <ctime>

using namespace std;

// CONSTANTS
const double AARON_ACCURACY = 1.0/3.0;
const double BOB_ACCURACY = 0.5;
const double CHARLIE_ACCURACY = 1.0;
const int NUM_DUELS = 10000;

//prototypes
bool at_least_two_alive(bool A_alive, bool B_alive, bool C_alive);
/* Input: A_alive indicates whether Aaron is alive */
/*        B_alive indicates whether Bob is alive */
/*        C_alive indicates whether Charlie is alive */
/* Return: true if at least two are alive */
/*         otherwise return false */

void test_at_least_two_alive(void);
/* This is a test driver for at_least_two_alive() */

void Aaron_shoots1(bool& B_alive, bool& C_alive);
/* Strategy 1: Use call by reference
 * Input: B_alive indicates whether Bob alive or dead
 *        C_alive indicates whether Charlie is alive or dead
 * Return: Change B_alive into false if Bob is killed.
 *         Change C_alive into false if Charlie is killed.
 */

void test_Aaron_shoots1(void);
/* This is a test driver for Aaron_shoots1() */

void Bob_shoots(bool& A_alive, bool& C_alive);
/* Call by reference
 * Input: A_alive indicates whether Aaron is alive or dead
 *        C_alive indicates whether Charlie is alive or dead
 * Return: Change A_alive into false if Aaron is killed.
 *         Change C_alive into false if Charlie is killed.
 */

void test_Bob_shoots(void);
/* This is a test driver for Bob_shoots() */

void Charlie_shoots(bool& A_alive, bool& B_alive);
/* Call by reference
 * Input: A_alive indicates whether Aaron is alive or dead
 *        B_alive indicates whether Bob is alive or dead
 * Return: Change A_alive into false if Aaron is killed.
 *         Change B_alive into false if Bob is killed.
 */

void test_Charlie_shoots(void);
/* This is a test driver for Charlie_shoots() */

void Aaron_shoots2(bool& B_alive, bool& C_alive);
/* Strategy 2: Use call by reference
 * Input: B_alive indicates whether Bob alive or dead
 *        C_alive indicates whether Charlie is alive or dead
 * Return: Change B_alive into false if Bob is killed.
 *         Change C_alive into false if Charlie is killed.
 */

void test_Aaron_shoots2(void);
/* This is a test driver for Aaron_shoots2() */

void simulate_duel(void);
/* This function simulates the duel using strategy 1 */

void simulate_duel2(void);
/* This function simulates the duel using strategy 2 */

int main() {
    cout << "*** Welcome to Duel Simulator ***\n";
    
    // Initialize random number generator
    srand(time(0));
    
    // Call test drivers
    test_at_least_two_alive();
    test_Aaron_shoots1();
    test_Bob_shoots();
    test_Charlie_shoots();
    test_Aaron_shoots2();
    
    // Simulate duels
    simulate_duel();
    simulate_duel2();
    
    cout << "Press any key to continue...";
    cin.ignore().get(); // Wait for user input
    
    return 0;
}

/* Implementation of at_least_two_alive() */
bool at_least_two_alive(bool a_alive, bool b_alive, bool c_alive) {
    /* add the implementation below */
    
}

/* Implementation of the test driver for at_least_two_alive() */
void test_at_least_two_alive(void) {
    cout << "Unit Testing 1: Function - at_least_two_alive()\n";
    
    cout << "Case 1: Aaron alive, Bob alive, Charlie alive\n";
    assert(true == at_least_two_alive(true, true, true));
    cout << "Case passed ...\n";
    
    cout << "Case 2: Aaron dead, Bob alive, Charlie alive\n";
    assert(true == at_least_two_alive(false, true, true));
    cout << "Case passed ...\n";
    
    /* add test cases 3-8 below */
    
}

/* Implementation of Aaron_shoots1() */
void Aaron_shoots1(bool& B_alive, bool& C_alive) {
    /* add implementation */
    
}

/* Test driver for Aaron_shoots1() */
void test_Aaron_shoots1(void) {
    /* add implementation */
    
}

/* Implementation of Bob_shoots() */
void Bob_shoots(bool& A_alive, bool& C_alive) {
    /* add implementation */
    
}

/* Test driver for Bob_shoots() */
void test_Bob_shoots(void) {
    /* add implementation */
    
}

/* Implementation of Charlie_shoots() */
void Charlie_shoots(bool& A_alive, bool& B_alive) {
    /* add implementation */
    
}

/* Test driver for Charlie_shoots() */
void test_Charlie_shoots(void) {
    /* add implementation */
    
}

/* Implementation of Aaron_shoots2() */
void Aaron_shoots2(bool& B_alive, bool& C_alive) {
    /* add implementation */
    
}

/* Test driver for Aaron_shoots2() */
void test_Aaron_shoots2(void) {
    /* add implementation */
    
}

/* Implementation of simulate_duel() using strategy 1 */
void simulate_duel(void) {
    /* add implementation */
    
}

/* Implementation of simulate_duel2() using strategy 2 */
void simulate_duel2(void) {
    /* add implementation */
    
}
