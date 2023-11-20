/*
* Alex Heidorn
* Created: 11/16/23
* CS2 Lab 10
*  
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

    //if value < low, skip
    // if value > high, skip
    // else vector.push(value), check next value

    if (cmp == 0) {
        return curr;
    }
    else {
        if (cmp < 0) {
            return doFind(d,curr->getLeft());
        }
        else {
            return doFind(d,curr->getRight());
        }
    }
}

/* gets a low value & a high value from the user. 
* stores all values between the low&high # in the tree in that vector. 
* Prints all values in that vector in ascening order.
*/
void between(BinaryTree t, int low, int high){
    vector<int> between;
    // ends search early if provided values are incorrect
    if (low > high) {
        cout << "Low value is greater than high value. Search is impossible.\n";
        return;
    }

    // search fails if there is no root
    if (t.getRoot() == nullptr){ cout << "There is no tree. Can't search."; }
    //write a new find that ends early
    findBetween(t.getRoot(), low, high, between);

    // prints values from vector
    cout << "Values between " << low << " and " << high << ":\n";
    for (auto itr : between) {
        cout << itr << " ";
    }
    cout << endl;
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
            cout << "Low value:\n";
            inS >> value;
            cout << "High value:\n";
            inS >> value2;
            cout << "Searching between " << value << " and " << value2;
            between(tree, value, value2);
        }
        if (option.compare("I") == 0) {
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
