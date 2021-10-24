
<div id="top"></div>

<br />
<div align="center">
    <h1 align="center">ProgDyn</h1>
    <p align="center">TP 4 – Algorithmes gloutons, programmation dynamique</p>
</div>

<br />
<details>
    <summary>Sommaire</summary>
    <ol>
        <li>
            <a href="#objectifs">Objet du projet</a>
            <ul>
                <a href="#details">Description du projet</a>
            </ul>
            <ul>
                <a href="#tools">Les outils utilisés</a>
            </ul>
        </li>
        <li>
            <a href="#d&c">Divide and conquer</a>
        </li>
        <li>
            <a href="#gredy">Algorithme glouton</a>
        </li>
        <li>
            <a href="#pgcb">Problème du plus grand carré libre</a>
        </li>
        <li>
            <a href="#cmd">Usage des commandes</a>
        </li>
    </ol>
</details>

## Auteur
* [ARQUILLIERE Benoit](https://github.com/benoit-arquilliere)

<br />
<div id="objectifs"></div>

## Objet du projet


<div id="details"></div>

### Description du projet

L'objectif au cours de projet est d'implémenter différents algorithmes répondant aux notions abordées dans le cours.
Le projet doit être versionné et le code doit être structuré.
Ce projet comporte trois exercices, Divide and Conquer, Algorithme glouton et problème du plus grand carré libre.
<div id="tools"></div>  

### Les outils utilisés

<!-- Description des outils utilisés -->

* [Visual Studio Code](https://code.visualstudio.com/)
* [Doxygen](https://www.doxygen.nl/index.html)

<br />
<div id="d&c"></div>  

## Divide and conquer

L’idée centrale de cette approche repose sur l’idée de réduire de moitié l’espace de recherche à chaque étape : on regarde la valeur du milieu et si ce n’est pas celle recherchée, on sait qu’il faut continuer de chercher dans la première moitié ou dans la seconde. Plus précisément, en tenant compte du caractère trié du tableau, il est possible d’améliorer l’efficacité d’une telle recherche de façon conséquente en procédant ainsi :
1. On détermine l’élément m au milieu du tableau ;
2. Si c’est la valeur recherchée, on s’arrête avec un succès ;
3. Sinon, deux cas sont possibles :
(a) si m est plus grand que la valeur recherchée, comme la tableau est trié, cela signifie
qu’il suffit de continuer à chercher dans la première moitié du tableau ;
(b) sinon, il suffit de chercher dans la moitié droite.
4. On répète cela jusque avoir trouvé la valeur recherchée, ou bien avoir réduit l’intervalle de
recherche à un intervalle vide, ce qui signifie que la valeur recherchée n’est pas présente.À chaque
étape, on coupe l’intervalle de recherche en deux, et on en choisit une moitié. On dit que l’on procède
par dichotomie, du grec dikha (en deux) et tomos (couper).


<br />
<div id="gredy"></div>  

## Algorithme glouton

Le problème du sac à dos, noté également KP (en anglais, Knapsack problem) est un problème d'optimisation combinatoire. Il modélise une situation analogue au remplissage d'un sac à dos, ne pouvant supporter plus d'un certain poids, avec tout ou partie d'un ensemble donné d'objets ayant chacun un poids et une valeur. Les objets mis dans le sac à dos doivent maximiser la valeur totale, sans dépasser le poids maximum (https://fr.wikipedia.org/wiki/Probl%C3%A8me_du_sac_%C3%A0_dos ) 

<br />
<div id="pgcb"></div>  

## Problème du plus grand carré libre

On considère le problème suivant: étant donné une image monochrome n x n (ou une matrice), déterminer le plus grand carré blanc, i.e. qui ne contient aucun point noir.


<br />
<div id="cmd"></div>  

## Usage des commandes

Afin d'utiliser le programme, plusieurs commandes on été ajouté pour permettre d'effectuer des actions spécifiques.  

- Compiler (build) le projet : 
```
make
```
- Nettoier les répertoires contenant le code source (supprime les fichiers .o issus de la compilation) :
```
make clean 
```
- Extraire la documentation technique :
```
make documentation 
```

<p align="right">|<a href="#top">Revenir en haut</a>|</p>

