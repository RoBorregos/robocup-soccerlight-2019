void Com_to_Mega(bool a, bool b, bool c, bool d, bool e) {
  digitalWrite(x, a);
  digitalWrite(x, b);
  digitalWrite(x, c);
  digitalWrite(x, d);
  digitalWrite(x, e);
  
  }
  
 void PR_Combinations() {
  linea();

 /*/////////////////////////////////////////////First line of Photo Resistors//////////////////////////////////////////////
 
 FL = First Line of photoresistors
 SL= Second Line of photoresistors
 TL = Third Line of photoresistors
 */
  
  if ((PRs[0] > 400 ||PRs[1] > 400) && !(PRs[2] > 400 ||PRs[3] > 400) && !(PRs[4] > 400 ||PRs[5] > 400)) { // FL_First Plate 
    Com_to_Mega();
    
    }
    
  else if (!(PRs[0] > 400 ||PRs[1] > 400) && (PRs[2] > 400 ||PRs[3] > 400) && !(PRs[4] > 400 ||PRs[5] > 400)) { // FL_Second Plate 
    Com_to_Mega();
    
    }
    
  else if (!(PRs[0] > 400 ||PRs[1] > 400) && !(PRs[2] > 400 ||PRs[3] > 400) && (PRs[4] > 400 ||PRs[5] > 400)) { // FL_Third Plate 
    Com_to_Mega();
    
    }
    
  else if ((PRs[0] > 400 ||PRs[1] > 400) && (PRs[2] > 400 ||PRs[3] > 400) && !(PRs[4] > 400 ||PRs[5] > 400)) { // FL_First and Second Plates
    Com_to_Mega();
    
    }

  else if (!(PRs[0] > 400 ||PRs[1] > 400) && (PRs[2] > 400 ||PRs[3] > 400) && (PRs[4] > 400 ||PRs[5] > 400)) { // FL_Second and Third Plates
    Com_to_Mega();
    
    }
    
  else if ((PRs[0] > 400 ||PRs[1] > 400) && !(PRs[2] > 400 ||PRs[3] > 400) && (PRs[4] > 400 ||PRs[5] > 400)) { // FL_First and Third Plates
    Com_to_Mega();
    
    }


  /*/////////////////////////////////////////////Second line of Photo Resistors//////////////////////////////////////////////*/

if ((PRs[6] > 400 ||PRs[7] > 400) && !(PRs[8] > 400 ||PRs[9] > 400) && !(PRs[10] > 400 ||PRs[11] > 400)) { // SL_First Plate 
    Com_to_Mega();
    
    }
    
  else if (!(PRs[6] > 400 ||PRs[7] > 400) && (PRs[8] > 400 ||PRs[9] > 400) && !(PRs[10] > 400 ||PRs[11] > 400)) { // SL_Second Plate 
    Com_to_Mega();
    
    }
    
  else if (!(PRs[6] > 400 ||PRs[7] > 400) && !(PRs[8] > 400 ||PRs[9] > 400) && (PRs[10] > 400 ||PRs[11] > 400)) { // SL_Third Plate 
    Com_to_Mega();
    
    }
    
  else if ((PRs[6] > 400 ||PRs[7] > 400) && (PRs[8] > 400 ||PRs[9] > 400) && !(PRs[10] > 400 ||PRs[11] > 400)) { // SL_First and Second Plates
    Com_to_Mega();
    
    }

  else if (!(PRs[6] > 400 ||PRs[7] > 400) && (PRs[8] > 400 ||PRs[9] > 400) && (PRs[10] > 400 ||PRs[11] > 400)) { // SL_Second and Third Plates
    Com_to_Mega();
    
    }
    
  else if ((PRs[6] > 400 ||PRs[7] > 400) && !(PRs[8] > 400 ||PRs[9] > 400) && (PRs[10] > 400 ||PRs[11] > 400)) { // SL_First and Third Plates
    Com_to_Mega();
    
    }

  /*/////////////////////////////////////////////Third line of Photo Resistors//////////////////////////////////////////////*/

  else if ((PRs[12] > 400) && !(PRs[13] > 400) && !(PRs[14] > 400)) { // TL_FirstvPlate
    Com_to_Mega();
     
    }

  else if (!(PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) { // TL_Second Plate
    Com_to_Mega();
    
    }
    
  else if (!(PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) { // TL_ Third Plate
    Com_to_Mega();
    
    }

  else if ((PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) { // TL_First and Second Plates
    Com_to_Mega();
    
    }

  else if (!(PRs[12] > 400) && (PRs[13] > 400) && (PRs[14] > 400)) { // TL_Second and Third Plates
    Com_to_Mega();
    
    }

  else if ((PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) { // TL_First and Third Plates
    Com_to_Mega(); 
    
    }
  
    

}
