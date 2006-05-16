# Microsoft Developer Studio Project File - Name="TMCS" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** NICHT BEARBEITEN **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=TMCS - Win32 Debug
!MESSAGE Dies ist kein gültiges Makefile. Zum Erstellen dieses Projekts mit NMAKE
!MESSAGE verwenden Sie den Befehl "Makefile exportieren" und führen Sie den Befehl
!MESSAGE 
!MESSAGE NMAKE /f "TMCS.mak".
!MESSAGE 
!MESSAGE Sie können beim Ausführen von NMAKE eine Konfiguration angeben
!MESSAGE durch Definieren des Makros CFG in der Befehlszeile. Zum Beispiel:
!MESSAGE 
!MESSAGE NMAKE /f "TMCS.mak" CFG="TMCS - Win32 Debug"
!MESSAGE 
!MESSAGE Für die Konfiguration stehen zur Auswahl:
!MESSAGE 
!MESSAGE "TMCS - Win32 Release" (basierend auf  "Win32 (x86) Application")
!MESSAGE "TMCS - Win32 Debug" (basierend auf  "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "TMCS - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "$(QTDIR)\include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "QT_DLL" /D "QT_THREAD_SUPPORT" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x407 /d "NDEBUG"
# ADD RSC /l 0x407 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib imm32.lib wsock32.lib winspool.lib winmm.lib $(QTDIR)\lib\qt-mt332.lib $(QTDIR)\lib\qtmain.lib /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "TMCS - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "$(QTDIR)\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "QT_DLL" /D "QT_THREAD_SUPPORT" /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x407 /d "_DEBUG"
# ADD RSC /l 0x407 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib imm32.lib wsock32.lib winspool.lib winmm.lib $(QTDIR)\lib\qt-mt332.lib $(QTDIR)\lib\qtmain.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "TMCS - Win32 Release"
# Name "TMCS - Win32 Debug"
# Begin Group "Quellcodedateien"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat;for;f90"
# Begin Source File

SOURCE=..\..\include\ctmsdbauswahl.cpp
# End Source File
# Begin Source File

SOURCE=.\main.cpp
# End Source File
# Begin Source File

SOURCE=..\..\include\moc_ctmsdbauswahl.cpp
# End Source File
# Begin Source File

SOURCE=.\moc_tmcsmainwindow.cpp
# End Source File
# Begin Source File

SOURCE=.\moc_tmcsnewprojekt.cpp
# End Source File
# Begin Source File

SOURCE=.\tmcsmainwindow.cpp
# End Source File
# Begin Source File

SOURCE=.\tmcsnewprojekt.cpp
# End Source File
# End Group
# Begin Group "Header-Dateien"

# PROP Default_Filter "h;hpp;hxx;hm;inl;fi;fd"
# Begin Source File

SOURCE=..\..\include\ctmsdbauswahl.h

!IF  "$(CFG)" == "TMCS - Win32 Release"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - MOCing ctmsdbauswahl.h...
InputDir=\ctms\include
InputPath=..\..\include\ctmsdbauswahl.h
InputName=ctmsdbauswahl

"$(InputDir)\moc_$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	"%qtdir%\bin\moc.exe" "$(InputDir)\$(InputName).h" -o "$(InputDir)\moc_$(InputName).cpp"

# End Custom Build

!ELSEIF  "$(CFG)" == "TMCS - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - MOCing ctmsdbauswahl.h...
InputDir=\ctms\include
InputPath=..\..\include\ctmsdbauswahl.h
InputName=ctmsdbauswahl

"$(InputDir)\moc_$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	"%qtdir%\bin\moc.exe" "$(InputDir)\$(InputName).h" -o "$(InputDir)\moc_$(InputName).cpp"

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\tmcsmainwindow.h

!IF  "$(CFG)" == "TMCS - Win32 Release"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - MOCing tmcsmainwindow.h...
InputDir=.
InputPath=.\tmcsmainwindow.h
InputName=tmcsmainwindow

"$(InputDir)\moc_$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	"%qtdir%\bin\moc.exe" "$(InputDir)\$(InputName).h" -o "$(InputDir)\moc_$(InputName).cpp"

# End Custom Build

!ELSEIF  "$(CFG)" == "TMCS - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - MOCing tmcsmainwindow.h...
InputDir=.
InputPath=.\tmcsmainwindow.h
InputName=tmcsmainwindow

"$(InputDir)\moc_$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	"%qtdir%\bin\moc.exe" "$(InputDir)\$(InputName).h" -o "$(InputDir)\moc_$(InputName).cpp"

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\tmcsnewprojekt.h

!IF  "$(CFG)" == "TMCS - Win32 Release"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - MOCing tmcsnewprojekt.h...
InputDir=.
InputPath=.\tmcsnewprojekt.h
InputName=tmcsnewprojekt

"$(InputDir)\moc_$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	"%qtdir%\bin\moc.exe" "$(InputDir)\$(InputName).h" -o "$(InputDir)\moc_$(InputName).cpp"

# End Custom Build

!ELSEIF  "$(CFG)" == "TMCS - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build - MOCing tmcsnewprojekt.h...
InputDir=.
InputPath=.\tmcsnewprojekt.h
InputName=tmcsnewprojekt

"$(InputDir)\moc_$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	"%qtdir%\bin\moc.exe" "$(InputDir)\$(InputName).h" -o "$(InputDir)\moc_$(InputName).cpp"

# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Group "Ressourcendateien"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;cnt;rtf;gif;jpg;jpeg;jpe"
# End Group
# Begin Source File

SOURCE=.\readme.txt
# End Source File
# End Target
# End Project
