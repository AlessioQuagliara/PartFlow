# PartFlow

> Il dato di magazzino vero, letto dal mondo fisico e non inserito a mano.

⚠️ **Progetto in sviluppo.**

## Il problema

Il dato sul gestionale ERP e la realtà del magazzino sono in continuo contrasto. In azienda la veridicità del dato non può dipendere ogni volta dall'operatore: serve un sistema che raccolga il dato in modo affidabile e preciso, e che sappia parlare sia con l'ERP sia con il mondo fisico.

## L'idea

PartFlow è un sistema software + hardware che:

- **Misura le giacenze reali** tramite vaschette collegate a dispositivi **ESP32**, calcolando la quantità effettiva di articoli presenti.
- **Determina da solo punto di riordino e sottoscorta** per ogni articolo.
- **Calcola il fabbisogno** su base settimanale, mensile e annuale, tramite algoritmi dedicati e un'**AI generativa**.
- **Comunica con l'ERP** quando acquistare un articolo e in che quantità.

```
[Vaschette + ESP32] ──► [PartFlow] ──► [ERP]
     mondo fisico        calcolo e AI     ordini di acquisto
```

## Stack attuale

- Backend: C++20 con [Crow](https://crowcpp.org)
- Frontend: template Mustache + Tailwind CSS
- Hardware: ESP32

## Avvio in sviluppo

```bash
cd src
npm install
npm run build:css        # compila Tailwind (watch)

g++ -std=c++20 main.cpp -o app -I/opt/homebrew/include -lpthread && ./app
```

Il server parte su `http://localhost:8080`.

## Modello del progetto

- **Software open source**, sotto licenza AGPL-3.0.
- **Hardware** (vaschette e moduli ESP32) ordinabile a pagamento.
- **Installazione e manutenzione** disponibili a pagamento.

## Licenza

Distribuito sotto [GNU Affero General Public License v3.0](LICENSE).
Chiunque modifichi PartFlow e lo distribuisca, o lo offra come servizio in rete, deve rendere pubblico il codice sorgente delle modifiche con la stessa licenza.

© 2026 Alessio Quagliara
