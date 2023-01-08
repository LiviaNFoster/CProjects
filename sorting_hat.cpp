//
//  sorting_hat.cpp
//  
//
//  Created by Olivia N. Foster on 1/6/23.
//

#include "sorting_hat.hpp"
//Harry Potter Sorting hat quiz

#include <iostream>

int main()  {
    //initializing house points first
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
    
    //intiializing the questions

    int answer1;
    int answer2;
    int answer3;
    int answer4;
    int answer5;
    int answer6;
    int answer7;
    
    //start quiz
    std::cout << "The Sorting Hat Quiz!\n";
    std::cout << "~~~~~~~~~~~~\n";
    
    //first question
    std::cout << "Q1) When I'm dead, I want people to rember me as:\n";
    std::cout << "(Type as a number. Ex. If you choose 1) The Good, type 1.)\n";
    std::cout << "   1) The Good\n";
    std::cout << "   2) The Great\n";
    std::cout << "   3) The Wise\n";
    std::cout << "   4) The Bold\n";
    
    std::cin >> answer1;
    
    if (answer1 == 1) {
        hufflepuff = hufflepuff +1;
        
    }
    
    else if (answer1 == 2) {
        slytherin = slytherin + 1;
        
    }
    
    else if (answer1 == 3) {
        ravenclaw = ravenclaw + 1;
        
    }
    
    else if (answer1 == 4) {
        gryffindor = gryffindor + 1;
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    // second question
    std::cout << "\n";
    std::cout << "Q2) Dawn r Dusk?\n";
    std::cout << "   1) Dawn\n";
    std::cout << "   2) Dusk\n";
    
    std::cin >> answer2;
    
    if (answer2 == 1) {
        (gryffindor = gryffindor + 1) && (ravenclaw = ravenclaw + 1);
        
    }
    
    else if (answer2 == 2) {
        (hufflepuff = hufflepuff + 1) && (slytherin = slytherin + 1);
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    // Third question
    std::cout << "\n";
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
    std::cout << "   1) The violin\n";
    std::cout << "   2) The trumpet\n";
    std::cout << "   3) The piano\n";
    std::cout << "   4) The drum\n";
    
    std::cin >> answer3;
    
    if (answer3 == 1) {
        slytherin = slytherin + 1;
        
    }
    else if (answer3 == 2) {
        hufflepuff = hufflepuff + 1;
        
    }
    
    else if (answer3 == 3) {
        ravenclaw = ravenclaw + 1;
        
    }
    
    else if (answer3 == 4) {
        gryffindor = gryffindor + 1;
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    //Fourth question
    std::cout << "\n";
    std::cout << "Q4) Which road tempts you most?\n";
    std::cout << "   1) The wide, sunny, grassy lane\n";
    std::cout << "   2) The narrow, dark, lantern-lit alley\n";
    std::cout << "   3) The twisting, leaf-strewn path through the woods\n";
    std::cout << "   4) The cobbled street lined with ancient buildings\n";
    
    std::cin >> answer4;
    
    if (answer4 == 1) {
        hufflepuff = hufflepuff + 1;
        
    }
    
    else if (answer4 == 2) {
        slytherin = slytherin + 1;
        
    }
    
    else if (answer4 == 3) {
        gryffindor = gryffindor + 1;
        
    }
    
    else if (answer4 == 4) {
        ravenclaw = ravenclaw + 1;
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    //Fifth question
    std::cout << "\n";
    std::cout << "Q5) What is your favorite class?\n";
    std::cout << "   1) Charms\n"; //Ravenclaw
    std::cout << "   2) Herbology\n"; //Hufflepuff
    std::cout << "   3) Potions\n"; //Slytherin
    std::cout << "   4) Defense Against the Dark Arts\n"; //Gryffindor
    
    std::cin >> answer5;
    
    if (answer5 == 1) {
        ravenclaw = ravenclaw + 1;
        
    }
    
    else if (answer5 == 2) {
        hufflepuff = hufflepuff + 1;
        
    }
    
    else if (answer5 == 3) {
        slytherin = slytherin + 1;
        
    }
    
    else if (answer5 == 4) {
        gryffindor = gryffindor + 1;
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    //Sixth question
    std::cout << "\n";
    std::cout << "Q6) Have you ever cheated in class?\n";
    std::cout << "   1) Yes\n"; //Gryffindor, Slytherin
    std::cout << "   2) No\n"; //Ravenclaw, Hufflepuff
    
    std::cin >> answer6;
    
    if (answer6 == 1) {
        (gryffindor = gryffindor + 1) && (slytherin = slytherin + 1);
        
    }
    
    else if (answer6 == 2) {
        (hufflepuff = hufflepuff + 1) && (ravenclaw = ravenclaw + 1);
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    //Seventh Question
    std::cout << "\n";
    std::cout << "Q7) You enter an enchanted garden.\n What would you be most curious to examine first?\n";
    std::cout << "   1) The sign at the edge of a lake reading: \n'CAUTION! Sirens -- Do NOT approach.'\n"; //R
    std::cout << "   2) The silver leafed tree bearing golden apples, a dragon curled up at the bottom.\n"; // G
    std::cout << "   3) Giving chase to the sprites that dart and giggle around the garden.\n"; //H
    std::cout << "   4) The fairy circles lines in toadstools that everyone and everything seems to avoid.\n";
    
    std::cin >> answer7;
    
    if (answer7 == 1) {
        ravenclaw = ravenclaw + 1;
        
    }
    else if (answer7 == 2) {
        gryffindor = gryffindor + 1;
        
    }
    
    else if (answer7 == 3) {
        hufflepuff = hufflepuff + 1;
        
    }
    
    else if (answer7 == 4) {
        slytherin = slytherin + 1;
        
    }
    
    else {
        std::cout << "Invalid input.\n";
        
    }
    
    
    //determine which house
    std::string house;
    int max = 0;
    
    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
        
    }
    
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
        
    }
    
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
        
    }
    
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
        
    }
    
    // final output
    std::cout << "\n";
    std::cout << "Your Hogwarts house is...\n";
    std::cout << house <<"!\n";


}
