Visualising silos - my first application in Qt
==============================================

The silo visualisation was my first project in Qt, through which I
learned the basics of Qt and gained experience in building applications
with a GUI

Build
=====

Required:

-   qmake

-   LibSerial

-   SQLite

```bash
cd wizualizacja_silosow/aplikacja_qt 
qmake 
make 
```

Run
===

```bash 
./wizualizacja 
``` 
**Notice**. In the file inc/Serial\_port.hpp there
is a path to the port from which data is read. in order for the
application to run you need to change it to your own.



Develop
===
The application is under continuous development, code refactoring work is planned