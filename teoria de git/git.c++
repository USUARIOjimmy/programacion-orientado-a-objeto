ls <- listar todo mis directorios
pwd <- directorio actual donde me encuentro
#COMANDO BASICOS DE GIT
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1
$ pwd
/c/Users/59178/OneDrive/Escritorio/proyecto1

59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1
$ ls
archivo.py

59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1
$ git init #inicializar un proyecto nuevo (dentro de la carpeta) (git carpeta no visible)
Initialized empty Git repository in C:/Users/59178/OneDrive/Escritorio/proyecto1/.git/
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status #ver que archivos tenemos trabajando
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        archivo.py #archivo aun no agregado

nothing added to commit but untracked files present (use "git add" to track)
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git add archivo.py #para agregar un archivoal staging area

59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   archivo.py #archivo agregado
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git commit #para crear un primer punto  de control de nuestro codigo
Author identity unknown

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: unable to auto-detect email address (got '59178@DESKTOP-OPQN7KK.(none)')
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git config --global user.email "umsa78779718@gmail.com" #para configurar el email del usuario ACCESO A EDITAR

59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git config --global user.name "emerson" #para configurar el nombre del usuario ACCESO A EDITAR
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git commit #guardar lo cambios


#ME APARECERA EDITOR DE CODIGO VIM
ESTOY CAMBIANDO ALGUNOS CODIGOS #mensaje de que hize el cambio
# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
#
# On branch master
#
# Initial commit
#
# Changes to be committed:
#       new file:   archivo.py
#
# Untracked files:
#       git.c++
#
~
#LUEGO APARECERA
[master (root-commit) 3f75221] ESTOY CAMBIANDO ALGUNOS CODIGOS
 1 file changed, 2 insertions(+) #1 archivo sew cambio y 2 se insertaron
 create mode 100644 archivo.py
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git log #para ver todos los commits que emos creado (Ver el cambio que guarde)
commit 3f75221fed3ac80e413bf94ddb127546657bb3bf (HEAD -> master)
Author: emerson <umsa78779718@gmail.com> #hizo el cambio del codigo
Date:   Sat Apr 2 16:41:15 2022 -0400 #hora que hizo el cambio

    ESTOY CAMBIANDO ALGUNOS CODIGOS #el cambio que hizo
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git diff archivo.py #para ver la diferencia hechas en el archivo(QUE CAMBIOS UBO)
diff --git a/archivo.py b/archivo.py
index 46620ba..77a9b03 100644
--- a/archivo.py
+++ b/archivo.py
@@ -1,2 +1,3 @@
 #MI PRIMER PROGRAMA
-print("hola mundo") #HABIA
\ No newline at end of file
+print("hola mundo")
+print("otraves hola") #HIZE CAMBIO O EDITE
\ No newline at end of file
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   archivo.py #TENGO QUE AGREGAR EL CAMBIO QUE HIZE
no changes added to commit (use "git add" and/or "git commit -a")
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git add archivo.py #AGREGE EL CAMBIO QUE HIZE
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   archivo.py  #ya se agrego el cambio
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git commit #guardar los cambios que hize
[master d851fa4] aumente una linea de codigo
 1 file changed, 2 insertions(+), 1 deletion(-)
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git log #ver los cambios que hize
#segundo cambio que hizo
commit d851fa4df2a4dc1fb0d81911502df7d259b7fccb (HEAD -> master)
Author: emerson <umsa78779718@gmail.com>  
Date:   Sat Apr 2 17:04:01 2022 -0400

    aumente una linea de codigo
# primer cambio que hizo
commit 3f75221fed3ac80e413bf94ddb127546657bb3bf
Author: emerson <umsa78779718@gmail.com>
Date:   Sat Apr 2 16:41:15 2022 -0400

    ESTOY CAMBIANDO ALGUNOS CODIGOS
#CREE UNA CARPETA (carpetaNuevo) Y ADENTRO CREE UN ARCHIVO (archivoNuevo.js)
#  PROYECTO1
     └archivo.py
     └carpetaNuevo
           └archivoNuevo.js
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        carpetaNuevo/ #carpeta no agregado
        git.c++ #archivo no agregado

nothing added to commit but untracked files present (use "git add" to track)
# PERO YO NO QUIERO AGREGAR la (carpetaNuevo)
#  PROYECTO1
#    └archivo.py
#    └carpetaNuevo
#           └archivoNuevo.js
#    └.gitignore   #haci que me creo archivo (ARCHIVO PONGO EL NOMBRE
                                            DE LA CARPETA O ARCHIVO QUE QUIERO 
                                             IGNORAR " carpetaNuevo ")
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .gitignore #ya no me sale la carpeta que quiero ignorar
                   #si no el archivo donde esta en nombre de la carpeta o archivo 
                  # que quiero ignorar
                  # AHORA .gitignore TENGO QUE AGREGAR
        git.c++

nothing added to commit but untracked files present (use "git add" to track)
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git add .gitignore #estoy agregando
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git status #estoy viendo lo que agregue
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   .gitignore #esto es lo que agregue
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git commit -m "mesaje lo que agregue .gitignore"  # guarde los cambios que hize
On branch master
#GUARDAR VERSION ANTIGUA Y CREAR OTRA VESRION NUEVA Y MEJORADA
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git branch #para guardado en su version de proyecto actual 
* master        #con este nombre se guardo la version
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git branch nombreVersionMejorada # creado otra version de proyecto mejorado
                   #└nombre del proyecto mejorado
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git branch
* master  #proyecto vercion antigua (EL * SIGNIFICA CON QUE PROYECTO estoy MANEJANDO
                                  #  EN ESTE CASO ESTOY CON EL PROYECTO  master)
  nombreVersionMejorada  #proyecto version mejorada nueva
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (master)
$ git checkout nombreVersionMejorada  # voy ha manipular al proyecto version mejorada
                                      #(cambiar de rama)
Switched to branch 'nombreVersionMejorada' 
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (nombreVersionMejorada)
$ git branch
  master
* nombreVersionMejorada #(EL * SIGNIFICA CON QUE PROYECTO estoy MANEJANDO
                        #  EN ESTE CASO ESTOY CON EL PROYECTO  nombreVersionMejorada)
#COMO PUEDO AGREGAR MUTIPLES CARPETAS Y ARCHIVOS
59178@DESKTOP-OPQN7KK MINGW64 ~/OneDrive/Escritorio/proyecto1 (nombreVersionMejorada)
$ git status
On branch nombreVersionMejorada
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        otroArchivoNuevo.html #agregar nueva carpeta
        teoria de git/   

nothing added to commit but untracked files present (use "git add" to track)




