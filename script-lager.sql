CREATE DATABASE ProjetoBrewery;
USE ProjetoBrewery;

CREATE TABLE registro (
idProcessos int primary key auto_increment,
dtHora datetime default current_timestamp,
maceracao FLOAT,
malteacao1 FLOAT,
malteacao2 FLOAT,
malteacao3 FLOAT,
moagem FLOAT,
brassagem1 FLOAT,
brassagem2 FLOAT,
brassagem3 FLOAT,
fervura FLOAT,
resfriamento1 FLOAT,
resfriamento2 FLOAT,
resfriamento3 FLOAT,
maturacaoFiltragem FLOAT,
pausterizacao FLOAT,
armazenamento FLOAT
);
