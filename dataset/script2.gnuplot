set terminal png
set output "outputMinMax2.png"
set title "MinMax 2"
set xlabel "Tamanho do Vetor"
set ylabel "Tempo (s)"
plot "MinMax2.txt" using 1:2 with lines title 'Aleatorio', \
     "MinMax2.txt" using 1:3 with lines title 'Crescente', \
     "MinMax2.txt" using 1:4 with lines title 'Decrescente'
