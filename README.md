# Gioco Carta-Forbice-Sasso

## Descrizione
Questo è un semplice gioco di Carta-Forbice-Sasso implementato in C++. L'utente può giocare contro il computer, scegliendo tra tre mosse: Carta, Forbice e Sasso. Il gioco determina il vincitore in base alle regole classiche del gioco.

## Come Compilare e Eseguire

### Su Linux e macOS
1. Apri il terminale.
2. Naviga nella directory contenente il file `main.cpp`.
3. Compila il programma utilizzando il seguente comando:
   ```bash
   g++ -o cfs main.cpp
   ```
4. Esegui il gioco con:
   ```bash
   ./cfs
   ```

### Su Windows
1. Apri il Prompt dei comandi o PowerShell.
2. Naviga nella directory contenente il file `main.cpp`.
3. Compila il programma utilizzando il seguente comando:
   ```bash
   g++ -o cfs.exe main.cpp
   ```
4. Esegui il gioco con:
   ```bash
   cfs.exe
   ```

## Istruzioni di Gioco
1. Quando richiesto, scegli una mossa inserendo il numero corrispondente:
   - 1 per Sasso
   - 2 per Carta
   - 3 per Forbici
2. Il computer selezionerà casualmente la sua mossa.
3. Il risultato del gioco verrà visualizzato, indicando se hai vinto, perso o pareggiato.
4. Puoi scegliere di giocare di nuovo o uscire dal gioco.

## Licenza
Questo progetto è concesso in licenza sotto la Licenza MIT.
