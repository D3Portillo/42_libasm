# libasm

A set of functions in Assembly for 42Madrid cursus.

## Subject

Read more at [en.subject.pdf](https://github.com/D3Portillo/libasm/blob/master/en.subject.pdf).

## Implementation

Functions

- strcmp
- strcpy
- strlen

To run all:

```sh
make it
```

Function specific test:

```sh
make it:strlen
```

### External testers

I'm using https://github.com/cacharle/libasm_test.
Replace `LIBASM_PATH = ../libasm` to `LIBASM_PATH = ../`

```
git clone https://github.com/cacharle/libasm_test tester && \
make -C tester
```

**Tripouille:**

https://github.774.gs/Tripouille/libasmTester 😘.

```
git clone https://github.774.gs/Tripouille/libasmTester tester2 && \
make m -C tester2
```
