CREATE TABLE produto (
numero              NUMBER(5) PRIMARY KEY,
nome                VARCHAR2(100) NOT NULL,
estoque_minimo      NUMBER(3) CHECK (estoque_minimo >=0),
estoque_atual       NUMBER(3) CHECK (estoque_atual >= 0),
estoque_maximo      NUMBER(12,2) CHECK (estoque_maximo > 0),
custo               NUMBER (12,2) CHECK (custo > 0),
margem              NUMBER (12,2) CHECK (margem > 0),
preco               NUMBER (12,2) CHECK (preco > 0)
);

CREATE TABLE venda (
numero          NUMBER(5) PRIMARY KEY,
data            DATE NOT NULL,
quantidade      NUMBER(3) CHECK (quantidade >= 0),
preco           NUMBER(12,2) CHECK (preco >= 0),
codproduto      NUMBER(5) NOT NULL REFERENCES produto (numero)
);

INSERT INTO produto (numero,nome,estoque_minimo,estoque_atual,estoque_maximo,custo,margem,preco)
VALUES (5,'Camera Canon T7i',5,5,10,3.200,0.5,3600);

select * from produto;

select nome,preco from produto where numero >= 3;

select numero,nome,preco from produto where numero > 1 and estoque_atual < 20;

UPDATE produto
SET preco = 7.70
WHERE numero = 1;

drop table venda;