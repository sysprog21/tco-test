TCO_TEST("No arguments", zero, (void), (), (void), ())
TCO_TEST("One argument", one, (int a), (0), (int a), (0))
TCO_TEST("Additional int argument", zero_one, (void), (), (int a), (0))
TCO_TEST("Dropped int argument", one_zero, (int a), (0), (void), ())
TCO_RET_TEST("char return to int", ret_int_char, return, int, char, 0)
TCO_RET_TEST("int return to char", ret_char_int, return, char, int, 0)
TCO_RET_TEST("int return to void", ret_void_int, , void, int, 0)
