#include <iostream>
#include "list/seq/SeqListDemo.h"
#include "list/link/LinkListDemo.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //test_2_2_3_8();
    //test_2_2_3_9();
    LinkList *linkList = createLinkList(true);
    queryAll(linkList);
    reverse_1(linkList);
    queryAll(linkList);
    return 0;
}


