
#include <stdio.h>
#include "gist.h"
#include "gist_btree.h"
#include <string>

void
printDatum(
    void *key,
    int klen,
    void *data,
    int dlen)
{
    char* k = (char* )key;
      //  std::string k = (char* )key;

   unsigned long* d = (unsigned long* ) (data);



  //  printf("%s: %ld\n", k, *d);
}

char *identStr = "string B-tree";
//char *identStr = "int B-tree";


//gist_ext_t *extension = &bt_int_ext;

//gist_ext_t *extension = &bt_str_ext;
bt_ext_t *extension = &bt_str_ext;

