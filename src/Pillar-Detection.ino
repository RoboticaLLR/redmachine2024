void detectarbloques(){
      int numBlocks = pixy.ccc.getBlocks();

  if (numBlocks > 0) {
    int maxArea = 0; // Variable para almacenar el área máxima
    int maxSignature = 0; // Variable para almacenar la firma del bloque con mayor área

    // Buscar el bloque con el área más grande
    for (int i = 0; i < numBlocks; i++) {
      int area = pixy.ccc.blocks[i].m_height * pixy.ccc.blocks[i].m_width;
      if (area > maxArea) {
        maxArea = area;
        maxSignature = pixy.ccc.blocks[i].m_signature; // Guardar la firma del bloque más grande
      }
    }

    // Evaluar la firma del bloque con mayor área
    if (maxSignature % 2 == 0 && maxSignature != 0) {
      Serial.println("verde");
      hola = 2; // Asignar 1 a la variable hola
      Serial.println(hola);
    } 
    else if (maxSignature % 2 == 1) {
      Serial.print("rojo");

      hola = 1; // Asignar 2 a la variable hola
       Serial.println(hola);
    }
  }
  }
