# I/O

I/O Library Header Files
There are following header files important to C++ programs −

- `<iostream>`: This file defines the cin, cout, cerr and clog objects,
which correspond to the standard input stream, the standard output stream,
the un-buffered standard error stream and the buffered standard error stream, respectively.
- `<iomanip>` This file declares services useful for performing formatted I/O with so-called
parameterized stream manipulators, such as setw and setprecision.
- `<fstream>` This file declares services for user-controlled file processing.
We will discuss about it in detail in File and Stream related chapter.

## The Standard Output Stream (cout)

The predefined object cout is an instance of ostream class. The cout object is said to be "connected to"
the standard output device, which usually is the display screen.
The cout is used in conjunction with the stream insertion operator, written as `<<`.

## The Standard Input Stream (cin)

The predefined object cin is an instance of istream class.
The cin object is said to be attached to the standard input device, which usually is the keyboard.
The cin is used in conjunction with the stream extraction operator, written as `>>`.

## The Standard Error Stream (cerr)

The predefined object cerr is an instance of ostream class.
The cerr object is said to be attached to the standard error device,
which is also a display screen but the object cerr is un-buffered and
each stream insertion to cerr causes its output to appear immediately.
The cerr is also used in conjunction with the stream insertion operator.

## The Standard Log Stream (clog)

The predefined object clog is an instance of ostream class.
The clog object is said to be attached to the standard error device, which is also a display screen
but the object clog is buffered. This means that each insertion to clog could cause
its output to be held in a buffer until the buffer is filled or until the buffer is flushed.
The clog is also used in conjunction with the stream insertion operator.
