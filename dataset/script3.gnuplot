set terminal png
set output "outputMinMax3.png"
set title "MinMax 3"
set xlabel "Tamanho do Vetor"
set ylabel "Tempo (s)"
plot "MinMax3.txt" using 1:2 with lines title 'Aleatorio', \
     "MinMax3.txt" using 1:3 with lines title 'Crescente', \
     "MinMax3.txt" using 1:4 with lines title 'Decrescente'
