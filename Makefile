.PHONY: all check clean

CFLAGS=-Wall -Wextra -Wno-unused-parameter
CFLAGS += -O2

all: chaining

chaining: main.c first.c second.c tests.h common.h
	$(CC) $(CFLAGS) $(filter-out %.h,$^) -o $@

check: all
	@./chaining

clean::
	rm -f *~ chaining
