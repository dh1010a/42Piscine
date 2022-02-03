FT1=$(echo $FT_NBR1 | tr "'" "0" | tr '\' '1' | tr '"' '2' | tr '?' '3' | tr '!' '4')
FT2=$(echo $FT_NBR2 | tr 'mrdoc' '01234')
Result_05=$(echo $FT1 + $FT2 | xargs echo "obase=13; ibase=5;" | bc )
echo $Result_05 | tr '0123456789ABC' 'gtaio luSnemf'



