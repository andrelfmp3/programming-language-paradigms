% prolog exercise
% fatos 
mae(ana, eva).
mae(bia, rai).
mae(bia, clo).
mae(bia, ary).
mae(eva, noe).
mae(lia, gal).

pai(ivo, eva).
pai(gil, rai).
pai(gil, clo).
pai(gil, ary).
pai(rai, noe).
pai(ary, gal).

homem(ivo).
homem(gil).
homem(ray).
homem(ary).
homem(noe).
mulher(ana).
mulher(bia).
mulher(eva).
mulher(clo).
mulher(lia).
mulher(gal).

% regras
progenitor(A,B) :- pai(A,B).
progenitor(A,B) :- mae(A,B).
gerou(A,B) :- pai(A,B).
gerou(A,B) :- mae(A,B).

irmaos(X,Y) :- progenitor(Z,X), progenitor(Z,Y), Z \= Y. % não há "irmãs" no exemplo
filho(A,B) :- gerou(B,A), homem(A).
filha(A,B) :- gerou(B,A), mulher(A).
primo(A,B) :- gerou(X,A), gerou(Y, B), irmaos(X,Y), homem(A).
primo(A,B) :- gerou(X,A), gerou(Y, B), irmaos(X,Y), mulher(A).
tio(A,B) :- irmaos(A,X), gerou(X,B), homem(A).
tia(A,B) :- irmaos(A,X), gerou(X,B), mulher(A).
avô(X,Y) :- pai(X,Z), progenitor(Z,Y).
avó(X,Y) :- mae(X,Z), progenitor(Z,Y).
feliz(X) :- pai(X,_); mae(X,_).

