echo $FT_NBR1+$FT_NBR2 | tr "'" "0" | tr '\\\"?!mrdoc' '123401234' | awk '{print "obase=D; ibase=5;" " " $0}' | bc | tr '0123456789ABC' 'gtaio luSnemf'
