//**************************************************************
//  main.cpp
//  HashTable
//
//  Created by Karlina Beringer on June 19, 2014.
//  Modified by HoloShadow on Aug 12,2017.
//  Demonstrate a simple Hash Table in C++.
//  Implements a Linked List class.
//**************************************************************

#include "HashTable.h"

int main()
{
    // Create 26 Items to store in the Hash Table.
    Item * A = new Item {"Apple.txt",17, "abc12345", NULL};
    Item * B = new Item {"Banana.avi",15, "abc12345", NULL};
    Item * C = new Item {"Caterpillar.txt",11, "abc12345", NULL};
    Item * D = new Item {"Dog.txt",13, "abc12345", NULL};
    Item * E = new Item {"Elephant.txt",567, "abc12345", NULL};
    Item * F = new Item {"Fedora.txt",8888, "abc12345", NULL};
    Item * G = new Item {"Goosebumps.txt",26, "abc12345", NULL};
    Item * H = new Item {"House.avi",99, "abc12345", NULL};
    Item * I = new Item {"Insects.avi",243, "abc12345", NULL};
    Item * J = new Item {"Jam.avi",63, "abc12345", NULL};
    Item * K = new Item {"Kite.avi",889, "abc12345", NULL};
    Item * L = new Item {"Limestone.avi",012, "abc12345", NULL};
    Item * M = new Item {"Mountaineering",21, "abc12345", NULL};
    Item * N = new Item {"Night",12, "abc12345", NULL};
    Item * O = new Item {"Open Sesame",1, "abc12345", NULL};
    Item * P = new Item {"Potatoes",3, "abc12345", NULL};
    Item * Q = new Item {"Quantum Mechanics",67, "abc12345", NULL};
    Item * R = new Item {"Rrrrrrrrrrawr",3, "abc12345", NULL};
    Item * S = new Item {"Snakes",21, "abc12345678", NULL};
    Item * T = new Item {"Tizzy Tube",12, "abc12345", NULL};
    Item * U = new Item {"Underworld",64, "abc12345", NULL};
    Item * V = new Item {"Volcanic Ash",345, "abc12345", NULL};
    Item * W = new Item {"Who changed china",053, "abc12345", NULL};
    Item * X = new Item {"XXX",4, "abc12345", NULL};
    Item * Y = new Item {"Yellow",17, "abc12345", NULL};
    Item * Z = new Item {"Zest of Lemon",2643, "abc12345", NULL};
    
    // Create a Hash Table of 13 Linked List elements.
    HashTable table;
    
    // Add 3 Items to Hash Table.
    table.insertItem(A);
    table.insertItem(B);
    table.insertItem(C);

    // // Remove one item from Hash Table.
    // table.removeItem(A);
    
    table.insertItem(D);
    table.insertItem(E);
    table.insertItem(F);
    table.insertItem(G);
    table.insertItem(H);
    table.insertItem(I);
    table.insertItem(J);
    table.insertItem(K);
    table.insertItem(L);
    table.insertItem(M);
    table.insertItem(N);
    table.insertItem(O);
    table.insertItem(P);
    table.insertItem(Q);
    table.insertItem(R);
    table.insertItem(S);
    table.insertItem(T);
    table.insertItem(U);
    table.insertItem(V);
    table.insertItem(W);
    table.insertItem(X);
    table.insertItem(Y);
    table.insertItem(Z);
    
    table.printTable();

    //table.printHistogram();
    
    // Look up an Item in the Hash Table.
    Item * result = table.getItemByKeyandSize("Snakes",21);
    cout << "The md5 of this file = " << result -> md5 << endl;
    
    return 0;
}

