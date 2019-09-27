#include <stdio.h>

union UTest {
    int a;
    char ch[2];
    char c;
};

struct STest
{
    int a;
    char ch[2];
    char c;
};

int main()
{
    union UTest t;
    struct STest st;
    t.a = 100;
    t.ch[0] = 'A';
    t.ch[1] = 'B';
    t.c = 'C';
    printf("Union1: %d %c %c %s %c\n", t.a, t.ch[0], t.ch[1], t.ch, t.c);
    t.a = 300;
    printf("Union2: %d %c %c %s %c\n", t.a, t.ch[0], t.ch[1], t.ch, t.c);

    st.a = 100;
    st.ch[0] = 'A';
    st.ch[1] = 'B';
    st.c = 'C';
    printf("Stuct: %d %c %c %s %c\n", st.a, st.ch[0], st.ch[1], st.ch, st.c);
    return 0;
}

//Union1: 16963 C B CB C
//Union2: 300 ,  , ,  (,-->ascii(lower byte==44))
//Stuct: 100 A B ABC C