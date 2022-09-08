//This section is the jfirst set of interview questions in Cracking the Coding Interview 6th Edition book. 
#include <string>
#include <set> 

using namespace std;

/*IS UNIQUE: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?*/
bool isUnique(string s) {
    set<char> set;
    if (s.isEmpty() || s.size() == 1){ //If the string is empty or only has 1 value, then the string only has unique/no characters
        return true;
    }
    for (int i = 0; i < s.size(); i++){
        if (set.find(s[i])){
            return false; //The string does NOT have unique characters
        }
        else {
            set.insert(s[i]); //The string DOES HAVE unique characters
        }
    }
    return true;
}
//Time complexity: Insertion O(log(n)), Find O(log(n)), For loop O(n)




/*CHECK PERMUTATION: Given two strings, write a method to decide if one is a permutation of the other*/