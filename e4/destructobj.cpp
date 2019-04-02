#include <string>
using namespace std;
#include "destructobj.h"

/*
void recursive_destruct(Exp *e) {
       if (e == null)
           return;
       recursive_destruct(e->left_operand);
       recursive_destruct(e->right_operand);
       delete e;
   }
*/

Constant::~Constant(){}

Var::~Var(){}

//ExpList::~ExpList(){}

OpApp::~OpApp()
{
ExpList *head;
while (args != nullptr){
  head = args;
delete args -> head;
args = args -> tail;
delete head;
}}
Let::~Let(){delete bexp;
delete body;}
/*
E::~E() {
    in_order_traversal([](node *n) { delete n; });
    root = nullptr;
    } */

Exp::~Exp(){}

