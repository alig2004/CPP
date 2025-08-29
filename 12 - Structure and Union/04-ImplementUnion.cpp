/*
Create a binary tree struct NODE, containing data (doubt) and left and right pointers (union)
*/

struct NODE {
    double data;
    union {
        struct {
            NODE *left;
            NODE *right;
        };
    };
};