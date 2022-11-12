# 01 --- Uvod u funkcionalno programiranje

## Motivacija

Priča o drvoseči.

## Sta je funkcionalno programiranje?

Imperativno vs. Deklarativno programiranje.

Pr. Dužina liste.

### Karakteristike

* Rekurzija
* Lenjost
* Referencijalna transparentnost
* Polimorfizam tipova
* Staticka tipiziranost
* Zaključivanje tipova
* Funkcije su gradjani prvog reda
* ...

### Zašto je sve ovo dobro, a zašto možda nije?

* Nemamo sporedne efekte, čistoća?

## Uvod u Haskell

* GHC --- prevodioc, GHCi --- interaktivni mod
* Aritmetičke operacije: ``+, -, *, /``
* Logičke operacije: ``&&, ||, not, ==, /=, <, <=, >, >=``
* Primeri ugradjenih funkcija: ``min, max, succ``
* Naša prva funkcija
* Liste
* Torke

## Lenjost



```{haskell}
duplo x = 2 * x
cetvorostruko x = duplo (duplo x)
```

Kada pozovemo ``cetvorostruko (5 + 1)``, to se računa kao:

```{haskell}
cetvorostruko (5 + 1)
duplo (duplo (5 + 1))
2 * (duplo (5 + 1))
2 * 2 * (5 + 1)
4 * (5 + 1)
4 * 6
24
```

## Korisni linkovi i reference

* https://en.wikibooks.org/wiki/Haskell/Getting_set_up
* https://en.wikibooks.org/wiki/Haskell/Variables_and_functions
* https://en.wikibooks.org/wiki/Haskell/Lists_and_tuples
* https://en.wikibooks.org/wiki/Haskell/Truth_values
* http://learnyouahaskell.com/introduction
* http://learnyouahaskell.com/starting-out


