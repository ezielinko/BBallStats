# BBallStats
Training exercise

Pobranie z pliku statystyk zawodnikow z danego meczu koszykowki Dane na zasadzie nazwisko,pozycja, zbiorki, bloki, rzuty za 2, rzuty za 3. 
Klasy dla zawodników. Zrob funkcje, ktora obliczy ilosc punktow zdobytych/zablokowanych. (zalozenie, ze blok == rzut za 2 punty u przeciwnika) 
Funkcje, ktora wypluje jakas ocene u zawodnika. 
Zakres ocen, zeby był od 0 do 10, ale, zeby byly tez oceny dziesiatkowe (przykladowo 6.3)

Pobranie danych z pliku.
Format danych z pliku do vectora: Nazwisko | Pozycja | Zbiórki Atak | Zbiórki Obrona | Asysty | Przechwyty | straty| Bloki | za 2 | za 3 | za 1 | faule | eval | +/-.
Klasy dla zawodników:pozycja, wzrost, waga, średnia zbiórki atak/obrona, średnie asysty, średnia przechwyty, średnia strat, średnia bloki, średnia faule, średnia eval, średnia +/-.

player number POS REB AST STL BLK 1P- 1P+ 1P% 2P- 2P+ 2P% 3P- 3P+ 3P% FOUL LOS eval
eval = pkt sum + reb + ast + stl + blk - all missed throw's - LOS

Players
