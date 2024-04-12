set terminal png
set output "outputMinMax1.png"
set title "MinMax 1"
set xlabel "Tamanho do Vetor"
set ylabel "Tempo (s)"
plot "MinMax1.txt" using 1:2 with lines title 'Aleatorio', \
     "MinMax1.txt" using 1:3 with lines title 'Crescente', \
     "MinMax1.txt" using 1:4 with lines title 'Decrescente'


