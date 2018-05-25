#include <iostream>
#include "permutations.h"
#include "bit_tables.h"
#include "data_tables.h"
#include "data_messages_examples.h"

using namespace std;

int main()
{
    char *firstperm;

    displayBitTable(message_03,64);
    displayAsHex(message_03,64);

    firstperm=permute(message_03,init_perm,64);

    displayBitTable(firstperm,64);
    displayAsHex(firstperm,64);
}
