/*
* Alex Heidorn
* Created: 11/16/23
* CS2 Lab 10
*  
*/
/* Input (from .txt file)
I 50
I 25
I 10
I 15
I 30
I 80
I 60
I 70
I 90
I 95

IN

B 35 75


Q
*/
/* Output:
Read from file (Y/N)? Y
Filename: bintree.txt
Inserting 50
Inserting 25
Inserting 10
curr is 25
Inserting 15
curr is 25
curr is 10
Inserting 30
curr is 25
Inserting 80
Inserting 60
curr is 80
Inserting 70
curr is 80
curr is 60
Inserting 90
curr is 80
Inserting 95
curr is 80
curr is 90
Print In Order:
         95
      90
   80
         70
      60
 50
      30
   25
         15
      10

Searching between 35 and 75
Values between 35 and 75:
50 60 70
*/
/* Output 2 (no file)
Read from file (Y/N)? j
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: B
Low value:
4
High value:
4
Low value is not less than high value. Search is impossible.
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: B
Low value:
72
High value:
2
Low value is not less than high value. Search is impossible.
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I
Insert value: 50
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 72
Insert value: Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 4
Insert value: Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 2
Insert value: curr is 4
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 2
Insert value: curr is 4
curr is 2
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 35
Insert value: curr is 4
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 27
Insert value: curr is 4
curr is 35
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 69
Insert value: curr is 72
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 420
Insert value: curr is 72
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 12
Insert value: curr is 4
curr is 35
curr is 27
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 96
Insert value: curr is 72
curr is 420
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 4
Insert value: curr is 4
curr is 2
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 27
Insert value: curr is 4
curr is 35
curr is 27
curr is 12
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 32
Insert value: curr is 4
curr is 35
curr is 27
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 64
Insert value: curr is 72
curr is 69
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 97
Insert value: curr is 72
curr is 420
curr is 96
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 83
Insert value: curr is 72
curr is 420
curr is 96
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 37
Insert value: curr is 4
curr is 35
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I
Insert value: 72
curr is 72
curr is 69
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 82
Insert value: curr is 72
curr is 420
curr is 96
curr is 83
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 74
Insert value: curr is 72
curr is 420
curr is 96
curr is 83
curr is 82
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 37
Insert value: curr is 4
curr is 35
curr is 37
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: IN
      420
            97
         96
            83
               82
                  74
   72
         72
      69
         64
 50
         37
            37
      35
            32
         27
               27
            12
   4
         4
      2
         2

Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 96
Insert value: curr is 72
curr is 420
curr is 96
curr is 83
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: IN
      420
            97
         96
               96
            83
               82
                  74
   72
         72
      69
         64
 50
         37
            37
      35
            32
         27
               27
            12
   4
         4
      2
         2

Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: I 96
Insert value: curr is 72
curr is 420
curr is 96
curr is 83
curr is 96
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: B
Low value:
4
High value:
97
Searching between 4 and 97
Values between 4 and 97:
12 27 27 32 35 37 37 50 64 69 72 72 74 82 83 96 96 96
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: B 37 50
Low value:
High value:
Searching between 37 and 50
No values found between 37 and 50
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: B 36 50 
Low value:
High value:
Searching between 36 and 50
Values between 36 and 50:
37 37
Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,
     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: Q
PS C:\Users\alexh\CS2> 
*/

#include <iostream>
#include <fstream>
#include "BinaryTree.cpp"
#include <vector>

using namespace std;

//actually the code that does the search
//separate fxn so it can be called recursively
void findBetween(BinaryNode *n, int low, int high, vector<int>& between){
    if (n == nullptr) {
        return;
    }
    // search left branches for values, only if current value is greater than low
    // if value < low, skip everything to the left
    if (n->getData() > low) { 
        findBetween(n->getLeft(), low, high, between);
    }
    // in order notation, adding values to vector, only if they are in the range
    if ((n->getData() > low) && (n->getData() < high)) {
        /*debuging code
            cout << "Adding " << n->getData() << " to vector.\n";
        */
        between.push_back(n->getData());
    }
    
    // if value > high, skip
    if (n->getData() < high){
        //search right branches for values
        findBetween(n->getRight(), low, high, between);
    }    
}

/* gets a low value & a high value from the user. 
* stores all values between the low&high # in the tree in that vector. 
* Prints all values in that vector in ascending order.
*/
void between(BinaryTree t, int low, int high){
    vector<int> between;
    // ends search early if provided values are incorrect
    if (!(low < high)) {
        cout << "Low value is not less than high value. Search is impossible.\n";
        return;
    }
    cout << "Searching between " << low << " and " << high << endl;

    //write a new find that ends early
    findBetween(t.getRoot(), low, high, between);

    // prints values from vector, if any
    if (between.empty()){
        cout << "No values found between " << low << " and " << high << endl;
    }
    else {
        cout << "Values between " << low << " and " << high << ":\n";
        for (auto itr : between) {
            cout << itr << " ";
        }
        cout << endl;
    }
}

void traverse(BinaryNode *n, ostream &out) {
    if (n != nullptr) {
        out << "Pre " << n->getData() << " ";
        traverse(n->getLeft(), out);
        out << "In " << n->getData() << " ";
        traverse(n->getRight(), out);
        out << "Post " << n->getData() << " ";
    }
}
void processCommands(bool fromFile, istream& inS) {
    BinaryTree tree;
    string option;
    do {
        int value;
        int value2; //for between command
        if (!fromFile) cout << "Commands: I)nsert, R)emove, F)ind, B)find all values Between 2 values,\n     PF)rintflat, printIN)order, printPRE)order printPOST)order T)raverse Q)uit: ";
        inS >> option;
        // option for between command
        if (option.compare("B") == 0) {
            if (!fromFile) { cout << "Low value:\n"; }
            inS >> value;
            if (!fromFile) { cout << "High value:\n"; }
            inS >> value2;
            between(tree, value, value2);
        }
        else if (option.compare("I") == 0) {
            if (!fromFile) cout << "Insert value: ";
            inS >> value;
            if (fromFile) cout << "Inserting " << value << endl;
            tree.insert(value);
        }
        else if (option.compare("R") == 0) {
            if (!fromFile) cout << "Remove value: ";
            inS >> value;
            if (fromFile) cout << "Removing value " << value << endl;
            if (tree.remove(value)) {
                cout << "Successfully removed\n";
            }
            else {
                cout << "Not removed\n";
            }
        }
        else if (option.compare("F") == 0) {
            if (!fromFile) cout << "Find value: ";
            inS >> value;
            if (fromFile) cout << "Finding " << value << endl;
            if (tree.find(value)) {
                cout << "Found\n";
            }
            else {
                cout << "Not found\n";
            }
        }
        else if (option.compare("PF") == 0) {
            if (fromFile) cout << "Print Flat:\n";
            tree.printFlat(cout);
        }
        else if (option.compare("IN") == 0) {
            if (fromFile) cout << "Print In Order:\n";
            tree.printInOrder(cout);
        }
        else if (option.compare("PRE") == 0) {
            if (fromFile) cout << "Print PreOrder:\n";
            tree.printPreOrder(cout);
        }
        else if (option.compare("POST") == 0) {
            if (fromFile) cout << "Print PostOrder:\n";
            tree.printPostOrder(cout);
        }
        else if (option.compare("T") == 0) {
            if (fromFile) cout << "Traverse:\n";
            traverse(tree.getRoot(),cout);
        }
        else if (option.compare("Q") != 0) {
            cout << "Unknown option " << option << endl;
        }
    } while (option.compare("Q") != 0);
}

int main() {
    string option;
    string fileName;

    cout << "Read from file (Y/N)? ";
    cin >> option;
    if (option.compare("Y") == 0) {
        cout << "Filename: ";
        cin >> fileName;
        ifstream inF(fileName);
        if (inF.good()) {
            processCommands(true,inF);
        }
    }
    else {
        processCommands(false,cin);
    }


    return 0;
}
