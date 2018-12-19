
#version 330 core

// Sorties du shader
in vec3 vPosition_vs; // Position du sommet transformé dans l'espace View
in vec3 vNormal_vs; // Normale du sommet transformé dans l'espace View
in vec2 vTexCoords; // Coordonnées de texture du sommet


out vec3 fFragColor;

void main() {
  //fFragColor.rgb = vec3(1,0,0);
  fFragColor.rgb = normalize(vNormal_vs);
};
