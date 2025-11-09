## 📄 README du Projet Géométrie C++

Ce projet implémente les structures de données de base `Point2f` et `Vector2f` ainsi que les opérations géométriques associées, comme la translation, la rotation, l'addition de vecteurs, le produit scalaire, et la normalisation.

-----

### 📂 Structure du Projet

Les fichiers d'en-tête et les implémentations des classes géométriques se trouvent dans le dossier `geometry/`.

```
DEVOIRS/
├── geometry/
│   ├── point.h        (Définition de Point2f)
│   ├── point.cpp      (Implémentation des fonctions de Point2f)
│   ├── vector.h       (Définition de Vector2f)
│   ├── vector.cpp     (Implémentation des fonctions de Vector2f)
│   └── utils.h        (Templates utilitaires: ToString, Print)
└── main.cpp           (Fichier principal de démonstration)
```

-----

### 🛠️ Compilation

Le projet doit être compilé en liant tous les fichiers sources (`.cpp`) ensemble.

Si vous exécutez la commande depuis le répertoire parent **`DEVOIRS`** :

```bash
g++ main.cpp geometry/point.cpp geometry/vector.cpp -o geometrie -I geometry
```

  * **`g++`**: Le compilateur C++.
  * **`main.cpp geometry/point.cpp geometry/vector.cpp`**: Les fichiers sources à compiler.
  * **`-o geometrie`**: Nomme l'exécutable final `geometrie`.
  * **`-I geometry`**: Indique au compilateur de chercher les fichiers d'en-tête inclus (`#include "..."`) dans le dossier `geometry`.

### ▶️ Exécution

Après la compilation, exécutez le programme de démonstration :

```bash
./geometrie
```

Le programme affichera les tests unitaires pour la création de points/vecteurs et les opérations géométriques (translation, rotation, addition, produit scalaire, etc.).

-----

Aimeriez-vous que je crée un petit exemple de code pour montrer comment utiliser une fonction spécifique, comme la translation d'un point ?
