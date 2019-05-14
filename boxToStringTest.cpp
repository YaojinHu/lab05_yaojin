#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1;

  initBox(&b1,3.0,4.0,5,7);  
  assertEquals("(3,4,5,7)", boxToString(b1,1), "boxToString(b1,1)"); 
  assertEquals("(3,4,5,7)", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("(3,4,5,7)", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("(3,4,5,7)", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("(3,4,5,7)", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("(3,4,5,7)", boxToString(b1,6), "boxToString(b1,6)");

		   
  return 0;
}
