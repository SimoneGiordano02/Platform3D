# Engine Programming – Esame 2024/2025
# Simone_Giordano


## Descrizione del progetto
Il progetto consiste nella realizzazione di un semplice platform 3D sviluppato in Unreal Engine 5.5. Il giocatore controlla un personaggio capace di muoversi e saltare. La visuale è in terza persona con camera libera attorno al personaggio.

---

## Funzionalità implementate
- **Movimento del personaggio**: locomotion base con camminata, corsa e salto.  
- **Sistema di vite**:  
  - Si parte con **3 vite**.  
  - Quando si subisce danno si perde 1 vita.
  - Cadere al di fuori della mappa comporta il perdere tutte le vite.  
  - A 0 vite si riparte dall'ultimo checkpoint preso ritornando a 3 vite.  
- **Sistema di attacco**:  
  - Si possono sconfiggere i nemici saltandoci sopra.  
  - I nemici normali muoiono dopo 1 colpo.  
  - Il boss richiede 5 colpi.    
- **Oggetti collezionabili (monete)**:  
  - Raccolta di monete sparse nel livello.  
  - Ogni **10 monete** si recupera una vita, se già a piena salute, si guadagna una vita extra fino a un massimo di **5 vite**.  
- **HUD**:  
  - Visualizzazione di vite e numero di monete raccolte in sovrimpressione.    
- **Menu di gioco**:    
  - Il tasto **ESC** apre il menu delle opzioni.  
  
---

## Struttura del livello
Il livello è stato progettato come percorso lineare con aree di piattaforme, nemici e sezioni di raccolta monete.  
È presente una piattaforma semovente obbligatoria per il proseguimento e delle piattaforme rotanti con ostacoli che danneggiano il giocatore.

---

## Controlli tastiera
- **WASD** – Movimento del personaggio  
- **Spazio** – Salto  
- **LShift** - Corsa
- **Mouse** – Rotazione camera  
- **ESC** – Menu di opzioni  

---

## Controlli pad
- **Analogico sx** – Movimento del personaggio  
- **A** – Salto  
- **B** - Corsa
- **Analogico dx** – Rotazione camera  
- **ESC** – Menu di opzioni  

## Istruzioni per l’esecuzione
1. Aprire il progetto con **Unreal Engine 5**.  
2. La mappa di avvio è impostata su **MainLevel**.  
3. Per avviare il gioco:  
   - In Editor: premere **Play**.

Per scaricare la Build su Windows: (https://github.com/SimoneGiordano02/Platform3D/releases/tag/1.0)
Estrarre la cartella ed eseguire Platform3D.exe.
 
