//Rachel Festervand 
//Compilors, project 0
//This is the header file for the nodes and where they are defined.
 
#ifndef NODE_H
#define NODE_H 

#include <string> 
struct Node {
   char key;  
   struct Node *left; 
   struct Node *right;  
   std::string data;  
   int depth; 
};  

#endif  
