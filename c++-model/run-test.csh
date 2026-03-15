make DBG_TST=1 clean all run | grep "y_err" | awk -F'=' '{if($2 > 2.15e-06) {print "OBLANY: y_err =" $2; bledy++}} END {print "\n--- Suma oblanych testow: " bledy+0 " ---"}'
