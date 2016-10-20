# picking-cards
There are N cards on the table and each has a number between 0 and N. Let us denote the number on the ith card by ci. You want to pick up all the cards. The ith card can be picked up only if at least ci cards have been picked up before it. (As an example, if a card has a value of 3 on it, you can't pick that card up unless you've already picked up 3 cards previously) In how many ways can all the cards be picked up?

Input Format 
The first line contains the number of test cases T. T test cases follow. Each case contains an integer N on the first line, followed by integers c1,..ci,...,cN on the second line.

Output Format 
Output T lines one corresponding to each test case containing the required answer for the corresponding test case. As the answers can be very big, output them modulo 1000000007.
// find out how many no of cards require 0 cards then 1 cards 2 cards and so on;
//then calulate total options for each postion 
// then use law of multiplication
