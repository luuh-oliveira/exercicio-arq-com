int lm35_pin = A0, leitura_lm35 = 0;
float temperaturaReal;
float maceracao;
float malteacao_1;
float malteacao_2;
float malteacao_3;
float moagem;
float brassagem_1;
float brassagem_2;
float brassagem_3;
float fervura;
float resfriamento_1;
float resfriamento_2;
float resfriamento_3;
float maturacao;
float pasteurizacao;
float armazenamento;

void setup()
{
Serial.begin(9600);
}
void loop()
{
leitura_lm35 = analogRead(lm35_pin);
temperaturaReal = leitura_lm35 * (5.0/1023) * 100;
maceracao = (0.18 * temperaturaReal) + 9.26;
malteacao_1 = (0.12 * temperaturaReal) + 46.17;
malteacao_2 = (0.30 * temperaturaReal) + 65.44;
malteacao_3 = (0.90 * temperaturaReal) + 61.32;
moagem = (0.60 * temperaturaReal) + 52.88;
brassagem_1 = (0.30 * temperaturaReal) + 30.44;
brassagem_2 = (0.90 * temperaturaReal) + 41.32;
brassagem_3 = (0.30 * temperaturaReal) + 57.44;
fervura = (0.12 * temperaturaReal) + 98.17;
resfriamento_1 = (0.30 * temperaturaReal) + 2.44;
resfriamento_2 = (0.30 * temperaturaReal) + 7.44;
resfriamento_3 = (0.12 * temperaturaReal) + 2.17;
maturacao = (0.12 * temperaturaReal) + 1.82;
pasteurizacao = (0.60 * temperaturaReal) + 50.88;
armazenamento = (0.30 * temperaturaReal) + 2.55;

Serial.print(maceracao);
Serial.print(";");
Serial.print(malteacao_1);
Serial.print(";");
Serial.print(malteacao_2);
Serial.print(";");
Serial.print(malteacao_3);
Serial.print(";");
Serial.print(moagem);
Serial.print(";");
Serial.print(brassagem_1);
Serial.print(";");
Serial.print(brassagem_2);
Serial.print(";");
Serial.print(brassagem_3);
Serial.print(";");
Serial.print(fervura);
Serial.print(";");
Serial.print(resfriamento_1);
Serial.print(";");
Serial.print(resfriamento_2);
Serial.print(";");
Serial.print(resfriamento_3);
Serial.print(";");
Serial.print(maturacao);
Serial.print(";");
Serial.print(pasteurizacao);
Serial.print(";");
Serial.println(armazenamento);

delay(2000);
}
