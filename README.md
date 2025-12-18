# memos

A compact C collection of memory and data-structure support code for systems-oriented projects. The repository currently includes a memory framer interface, memory and logging helpers, and a map implementation. It is organized as reusable source files rather than a standalone application.

## Contents

- `include/` contains the public headers, including the framing interface in `framer.h`.
- `src/` contains the main implementation sources.
- `std/` contains small support modules for memory routines, maps, and logging.
- `tests/` contains a C test program; the Makefile provides the project build entry point.

The exact interfaces are defined in the headers. Include only the source files your application needs and compile them alongside your own code. The project is intended as a compact starting point; check the current implementation before relying on allocator behavior or performance guarantees.

## Build and inspect

Use the repository Makefile with a C compiler:

```bash
make
```

Review the Makefile for the available targets, compiler flags, and output names. The test source can be built and run using the targets defined there.

## Integration guidance

These helpers are low-level components and do not impose a single allocator policy on the application. Pay attention to ownership and lifetime when passing buffers between modules. Keep the header and source interfaces in sync when adapting the code, and compile with warnings enabled to catch platform and type assumptions early.

