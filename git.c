git config --global user.name "monnom"
git config --global user.email "mail@mail.fr"

mkdir <name>        (crée un repertoire)
cd <chemin>         (acceder a un <chemin>)
ls <chemin>         (lister un chemin)

git init            (initialiser depot quand on est dans le bon repertoire)  
git add <file>      (ajout du fichier a sauvegarder)
git add --all *     (prepare la sauvegarde de tout les fichiers dans le dossier)
git commit [-m "description du commit"]
git commit -a -m "mon message"  (sauvegarde + commit)

git mv notes.txt infos.txt      (renome un fichier ex note.txt -> infos.txt)
git rm

git status          (géré les elements non commité)
git log             (historique de tout se qui a été sauvegarder)

git clone https:/*(depot de github)*/     (clone depot)
git pull                                  (mettre a jour si besoin des fichiers)
git push origin master                    (poussez vers la branche principale du depot les fichiers)

git reset -hard HEAD                      (annule tout les changements du dernier commit)
git reset -hard HEAD^                     (supprime juste se qui a ete fait au dernier commit)
