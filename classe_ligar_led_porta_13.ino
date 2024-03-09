#define pLed 13

class Acende {
public:
  int pino;

  Acende(int p)
    : pino(p) {
    attach(pino);
  }

  void piscaLed(int atraso) {
    digitalWrite(pino, HIGH);
    delay(atraso);
    digitalWrite(pino, LOW);
    delay(atraso);
  }

private:
  void attach(int p) {
    pinMode(p, OUTPUT);
  }
};

Acende led1(pLed);

void
setup() {
}

void loop() {
  led1.piscaLed(2000);
}
