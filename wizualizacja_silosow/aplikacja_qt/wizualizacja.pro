
TARGET = wizualizacja


QT += widgets 
QT += charts

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
INCLUDEPATH += inc inc/custom_widgets_designer



SOURCES += src/*.cpp src/custom_widgets_designer/*.cpp
HEADERS += inc/*.hpp inc/custom_widgets_designer/*.hpp
FORMS   += ui/*.ui
RESOURCES += res/*.qrc   


# Katalogi wyjściowe


# Ustawienia Automoc i Autouic
AUTOMOC_DIR = moc
AUTOUIC_DIR = ui
RCC_DIR = res/res_output

# Biblioteki 

LIBS += -lserial