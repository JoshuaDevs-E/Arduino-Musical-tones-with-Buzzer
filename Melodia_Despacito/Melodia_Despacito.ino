// Suscríbete a mi canal de Youtube: Aprende con Ruben´s

#define NOTE_FAS4 370
#define NOTE_SOL4  392
#define NOTE_LA4  440
#define NOTE_SI4  494
#define NOTE_DOS5 554
#define NOTE_RE5  587
#define NOTE_MI5  659

int Melodia[] = {
  NOTE_RE5, NOTE_DOS5, NOTE_SI4, NOTE_FAS4,
  0, NOTE_FAS4, NOTE_FAS4, NOTE_FAS4,
  NOTE_FAS4,NOTE_FAS4, NOTE_SI4, NOTE_SI4,
  NOTE_SI4, NOTE_SI4, NOTE_LA4, NOTE_SI4,
  0,0, NOTE_SOL4, 0,
  NOTE_SOL4, NOTE_SOL4, NOTE_SOL4, NOTE_SOL4,
  NOTE_SOL4, NOTE_SI4, NOTE_SI4, NOTE_SI4,
  NOTE_SI4, NOTE_DOS5, NOTE_RE5, 0,
  0, NOTE_LA4, 0, NOTE_LA4,
  NOTE_LA4, NOTE_LA4, NOTE_LA4, NOTE_RE5,
  NOTE_DOS5, NOTE_RE5, NOTE_DOS5, NOTE_RE5,
  NOTE_MI5, NOTE_MI5, NOTE_MI5,
  NOTE_DOS5, 0, 0, 0, 
 };

int duracionNotas[] = {
  1,1,2,4,
  4,4,4,4,
  4,4,4,4,
  4,2,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  2,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,2,
  4,4,2,
  1,2,8,8,
  };

void setup() {
}

void loop() {
    for (int Nota = 0; Nota < 51; Nota++) {
    int duracionNota = 640 / duracionNotas[Nota];
    tone(8, Melodia[Nota], duracionNota);
    int pausaEntreNotas= duracionNota * 1.10;
    delay(pausaEntreNotas);
    
    noTone(8);
  }
}
