% prolog exercise
% fatos
mae(sofia, joao).
mae(ana, maria).
mae(carla, sofia).

pai(paulo, luis).
pai(paulo, sofia).
pai(luis, pedro).
pai(luis, maria).

% regras
progenitor(A,B) :- pai(A,B).
progenitor(A,B) :- mae(A,B).
    
avô(X,Y) :- pai(X,Z), progenitor(Z,Y).
avó(X,Y) :- mae(X,Z), progenitor(Z,Y).
irmaos(X,Y) :- progenitor(Z,X), progenitor(Z,Y), Z \= Y.