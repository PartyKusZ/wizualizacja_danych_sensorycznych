
TARGET = wizualizacja


QT += widgets

# sprawdzanie czy katalogi src i inc istnieją 
src_dir_exists = $$system(test -d src)
inc_dir_exists = $$system(test -d inc)

# Utworzenie katalogu src, jeśli nie istnieje
isEmpty(src_dir_exists) {
    system(mkdir src)
}

# Utworzenie katalogu inc, jeśli nie istnieje
isEmpty(inc_dir_exists) {
    system(mkdir inc)
}


#ustawianie sicieżek dla uic moc incpath 

DESTDIR = .
OBJECTS_DIR = obj
MOC_DIR = moc
UI_DIR = ui
INCLUDEPATH += inc inc/x



SOURCES += src/*.cpp
HEADERS += inc/*.hpp inc/x/*.hpp
FORMS   += ui/*.ui

# Katalogi wyjściowe


# Ustawienia Automoc i Autouic
AUTOMOC_DIR = moc
AUTOUIC_DIR = ui

# Biblioteki 

LIBS += -lserial