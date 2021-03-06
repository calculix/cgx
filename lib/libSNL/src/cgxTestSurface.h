int degreeU = 8;
int degreeV = 9;

snlCtrlPoint* points = new snlCtrlPoint [ 323 ];

points [ 0 ].components ( 0, 0, -0.33283, 1 );
points [ 1 ].components ( 0.000391742, 0, -0.33283, 1 );
points [ 2 ].components ( 0.000783624, 0, -0.332676, 1 );
points [ 3 ].components ( 0.00110633, 0, -0.332368, 1 );
points [ 4 ].components ( 0.00129112, 0, -0.331943, 1 );
points [ 5 ].components ( 0.00129112, 0, -0.331472, 1 );
points [ 6 ].components ( 0.00110633, 0, -0.331047, 1 );
points [ 7 ].components ( 0.000783624, 0, -0.330739, 1 );
points [ 8 ].components ( 0.000391742, 0, -0.330585, 1 );
points [ 9 ].components ( 0, 0, -0.330585, 1 );
points [ 10 ].components ( -0.000391882, 0, -0.330585, 1 );
points [ 11 ].components ( -0.000783624, 0, -0.330739, 1 );
points [ 12 ].components ( -0.00110647, 0, -0.331047, 1 );
points [ 13 ].components ( -0.00129112, 0, -0.331472, 1 );
points [ 14 ].components ( -0.00129112, 0, -0.331943, 1 );
points [ 15 ].components ( -0.00110647, 0, -0.332368, 1 );
points [ 16 ].components ( -0.000783624, 0, -0.332676, 1 );
points [ 17 ].components ( -0.000391882, 0, -0.33283, 1 );
points [ 18 ].components ( 0, 0, -0.33283, 1 );

points [ 19 ].components ( 0, 0.130702, -0.332834, 1 );
points [ 20 ].components ( 0.000391742, 0.130702, -0.332834, 1 );
points [ 21 ].components ( 0.000783624, 0.130641, -0.33268, 1 );
points [ 22 ].components ( 0.00110633, 0.13052, -0.332372, 1 );
points [ 23 ].components ( 0.00129112, 0.130353, -0.331947, 1 );
points [ 24 ].components ( 0.00129112, 0.130168, -0.331476, 1 );
points [ 25 ].components ( 0.00110633, 0.130001, -0.33105, 1 );
points [ 26 ].components ( 0.000783624, 0.12988, -0.330743, 1 );
points [ 27 ].components ( 0.000391742, 0.12982, -0.330589, 1 );
points [ 28 ].components ( 0, 0.12982, -0.330589, 1 );
points [ 29 ].components ( -0.000391882, 0.12982, -0.330589, 1 );
points [ 30 ].components ( -0.000783624, 0.12988, -0.330743, 1 );
points [ 31 ].components ( -0.00110647, 0.130001, -0.33105, 1 );
points [ 32 ].components ( -0.00129112, 0.130168, -0.331476, 1 );
points [ 33 ].components ( -0.00129112, 0.130353, -0.331947, 1 );
points [ 34 ].components ( -0.00110647, 0.13052, -0.332372, 1 );
points [ 35 ].components ( -0.000783624, 0.130641, -0.33268, 1 );
points [ 36 ].components ( -0.000391882, 0.130702, -0.332834, 1 );
points [ 37 ].components ( 0, 0.130702, -0.332834, 1 );

points [ 38 ].components ( 0, 0.261407, -0.274149, 1 );
points [ 39 ].components ( 0.000391742, 0.261407, -0.274149, 1 );
points [ 40 ].components ( 0.000783624, 0.261286, -0.274022, 1 );
points [ 41 ].components ( 0.00110633, 0.261044, -0.273769, 1 );
points [ 42 ].components ( 0.00129112, 0.26071, -0.273418, 1 );
points [ 43 ].components ( 0.00129112, 0.26034, -0.27303, 1 );
points [ 44 ].components ( 0.00110633, 0.260006, -0.27268, 1 );
points [ 45 ].components ( 0.000783624, 0.259765, -0.272427, 1 );
points [ 46 ].components ( 0.000391742, 0.259644, -0.2723, 1 );
points [ 47 ].components ( 0, 0.259644, -0.2723, 1 );
points [ 48 ].components ( -0.000391882, 0.259644, -0.2723, 1 );
points [ 49 ].components ( -0.000783624, 0.259765, -0.272427, 1 );
points [ 50 ].components ( -0.00110647, 0.260006, -0.27268, 1 );
points [ 51 ].components ( -0.00129112, 0.26034, -0.27303, 1 );
points [ 52 ].components ( -0.00129112, 0.26071, -0.273418, 1 );
points [ 53 ].components ( -0.00110647, 0.261044, -0.273769, 1 );
points [ 54 ].components ( -0.000783624, 0.261286, -0.274022, 1 );
points [ 55 ].components ( -0.000391882, 0.261407, -0.274149, 1 );
points [ 56 ].components ( 0, 0.261407, -0.274149, 1 );

points [ 57 ].components ( 0, 0.361379, -0.156928, 1 );
points [ 58 ].components ( 0.000391742, 0.361379, -0.156928, 1 );
points [ 59 ].components ( 0.000783624, 0.361212, -0.156855, 1 );
points [ 60 ].components ( 0.00110633, 0.360878, -0.15671, 1 );
points [ 61 ].components ( 0.00129112, 0.360416, -0.156509, 1 );
points [ 62 ].components ( 0.00129112, 0.359905, -0.156287, 1 );
points [ 63 ].components ( 0.00110633, 0.359443, -0.156087, 1 );
points [ 64 ].components ( 0.000783624, 0.359109, -0.155942, 1 );
points [ 65 ].components ( 0.000391742, 0.358941, -0.155869, 1 );
points [ 66 ].components ( 0, 0.358941, -0.155869, 1 );
points [ 67 ].components ( -0.000391882, 0.358941, -0.155869, 1 );
points [ 68 ].components ( -0.000783624, 0.359109, -0.155942, 1 );
points [ 69 ].components ( -0.00110647, 0.359443, -0.156087, 1 );
points [ 70 ].components ( -0.00129112, 0.359905, -0.156287, 1 );
points [ 71 ].components ( -0.00129112, 0.360416, -0.156509, 1 );
points [ 72 ].components ( -0.00110647, 0.360878, -0.15671, 1 );
points [ 73 ].components ( -0.000783624, 0.361212, -0.156855, 1 );
points [ 74 ].components ( -0.000391882, 0.361379, -0.156928, 1 );
points [ 75 ].components ( 0, 0.361379, -0.156928, 1 );

points [ 76 ].components ( 0, 0.4, 0, 1 );
points [ 77 ].components ( 0.000391742, 0.4, 0, 1 );
points [ 78 ].components ( 0.000783624, 0.399815, 0, 1 );
points [ 79 ].components ( 0.00110633, 0.399445, 0, 1 );
points [ 80 ].components ( 0.00129112, 0.398934, 0, 1 );
points [ 81 ].components ( 0.00129112, 0.398368, 0, 1 );
points [ 82 ].components ( 0.00110633, 0.397857, 0, 1 );
points [ 83 ].components ( 0.000783624, 0.397487, 0, 1 );
points [ 84 ].components ( 0.000391742, 0.397302, 0, 1 );
points [ 85 ].components ( 0, 0.397302, 0, 1 );
points [ 86 ].components ( -0.000391882, 0.397302, 0, 1 );
points [ 87 ].components ( -0.000783624, 0.397487, 0, 1 );
points [ 88 ].components ( -0.00110647, 0.397857, 0, 1 );
points [ 89 ].components ( -0.00129112, 0.398368, 0, 1 );
points [ 90 ].components ( -0.00129112, 0.398934, 0, 1 );
points [ 91 ].components ( -0.00110647, 0.399445, 0, 1 );
points [ 92 ].components ( -0.000783624, 0.399815, 0, 1 );
points [ 93 ].components ( -0.000391882, 0.4, 0, 1 );
points [ 94 ].components ( 0, 0.4, 0, 1 );

points [ 95 ].components ( 0, 0.361379, 0.156928, 1 );
points [ 96 ].components ( 0.000391742, 0.361379, 0.156928, 1 );
points [ 97 ].components ( 0.000783624, 0.361212, 0.156855, 1 );
points [ 98 ].components ( 0.00110633, 0.360878, 0.15671, 1 );
points [ 99 ].components ( 0.00129112, 0.360416, 0.156509, 1 );
points [ 100 ].components ( 0.00129112, 0.359905, 0.156287, 1 );
points [ 101 ].components ( 0.00110633, 0.359443, 0.156087, 1 );
points [ 102 ].components ( 0.000783624, 0.359108, 0.155942, 1 );
points [ 103 ].components ( 0.000391742, 0.358941, 0.155869, 1 );
points [ 104 ].components ( 0, 0.358941, 0.155869, 1 );
points [ 105 ].components ( -0.000391882, 0.358941, 0.155869, 1 );
points [ 106 ].components ( -0.000783624, 0.359108, 0.155942, 1 );
points [ 107 ].components ( -0.00110647, 0.359443, 0.156087, 1 );
points [ 108 ].components ( -0.00129112, 0.359905, 0.156287, 1 );
points [ 109 ].components ( -0.00129112, 0.360416, 0.156509, 1 );
points [ 110 ].components ( -0.00110647, 0.360878, 0.15671, 1 );
points [ 111 ].components ( -0.000783624, 0.361212, 0.156855, 1 );
points [ 112 ].components ( -0.000391882, 0.361379, 0.156928, 1 );
points [ 113 ].components ( 0, 0.361379, 0.156928, 1 );

points [ 114 ].components ( 0, 0.261407, 0.274149, 1 );
points [ 115 ].components ( 0.000391742, 0.261407, 0.274149, 1 );
points [ 116 ].components ( 0.000783624, 0.261286, 0.274022, 1 );
points [ 117 ].components ( 0.00110633, 0.261044, 0.273769, 1 );
points [ 118 ].components ( 0.00129112, 0.26071, 0.273418, 1 );
points [ 119 ].components ( 0.00129112, 0.26034, 0.27303, 1 );
points [ 120 ].components ( 0.00110633, 0.260006, 0.27268, 1 );
points [ 121 ].components ( 0.000783624, 0.259765, 0.272427, 1 );
points [ 122 ].components ( 0.000391742, 0.259644, 0.2723, 1 );
points [ 123 ].components ( 0, 0.259644, 0.2723, 1 );
points [ 124 ].components ( -0.000391882, 0.259644, 0.2723, 1 );
points [ 125 ].components ( -0.000783624, 0.259765, 0.272427, 1 );
points [ 126 ].components ( -0.00110647, 0.260006, 0.27268, 1 );
points [ 127 ].components ( -0.00129112, 0.26034, 0.27303, 1 );
points [ 128 ].components ( -0.00129112, 0.26071, 0.273418, 1 );
points [ 129 ].components ( -0.00110647, 0.261044, 0.273769, 1 );
points [ 130 ].components ( -0.000783624, 0.261286, 0.274022, 1 );
points [ 131 ].components ( -0.000391882, 0.261407, 0.274149, 1 );
points [ 132 ].components ( 0, 0.261407, 0.274149, 1 );

points [ 133 ].components ( 0, 0.130702, 0.332834, 1 );
points [ 134 ].components ( 0.000391742, 0.130702, 0.332834, 1 );
points [ 135 ].components ( 0.000783624, 0.130641, 0.33268, 1 );
points [ 136 ].components ( 0.00110633, 0.13052, 0.332372, 1 );
points [ 137 ].components ( 0.00129112, 0.130353, 0.331947, 1 );
points [ 138 ].components ( 0.00129112, 0.130168, 0.331476, 1 );
points [ 139 ].components ( 0.00110633, 0.130001, 0.33105, 1 );
points [ 140 ].components ( 0.000783624, 0.12988, 0.330743, 1 );
points [ 141 ].components ( 0.000391742, 0.12982, 0.330589, 1 );
points [ 142 ].components ( 0, 0.12982, 0.330589, 1 );
points [ 143 ].components ( -0.000391882, 0.12982, 0.330589, 1 );
points [ 144 ].components ( -0.000783624, 0.12988, 0.330743, 1 );
points [ 145 ].components ( -0.00110647, 0.130001, 0.33105, 1 );
points [ 146 ].components ( -0.00129112, 0.130168, 0.331476, 1 );
points [ 147 ].components ( -0.00129112, 0.130353, 0.331947, 1 );
points [ 148 ].components ( -0.00110647, 0.13052, 0.332372, 1 );
points [ 149 ].components ( -0.000783624, 0.130641, 0.33268, 1 );
points [ 150 ].components ( -0.000391882, 0.130702, 0.332834, 1 );
points [ 151 ].components ( 0, 0.130702, 0.332834, 1 );

points [ 152 ].components ( 0, 0, 0.33283, 1 );
points [ 153 ].components ( 0.000391742, 0, 0.33283, 1 );
points [ 154 ].components ( 0.000783624, 0, 0.332676, 1 );
points [ 155 ].components ( 0.00110633, 0, 0.332368, 1 );
points [ 156 ].components ( 0.00129112, 0, 0.331943, 1 );
points [ 157 ].components ( 0.00129112, 0, 0.331472, 1 );
points [ 158 ].components ( 0.00110633, 0, 0.331047, 1 );
points [ 159 ].components ( 0.000783624, 0, 0.330739, 1 );
points [ 160 ].components ( 0.000391742, 0, 0.330585, 1 );
points [ 161 ].components ( 0, 0, 0.330585, 1 );
points [ 162 ].components ( -0.000391882, 0, 0.330585, 1 );
points [ 163 ].components ( -0.000783624, 0, 0.330739, 1 );
points [ 164 ].components ( -0.00110647, 0, 0.331047, 1 );
points [ 165 ].components ( -0.00129112, 0, 0.331472, 1 );
points [ 166 ].components ( -0.00129112, 0, 0.331943, 1 );
points [ 167 ].components ( -0.00110647, 0, 0.332368, 1 );
points [ 168 ].components ( -0.000783624, 0, 0.332676, 1 );
points [ 169 ].components ( -0.000391882, 0, 0.33283, 1 );
points [ 170 ].components ( 0, 0, 0.33283, 1 );

points [ 171 ].components ( 0, -0.130702, 0.332834, 1 );
points [ 172 ].components ( 0.000391742, -0.130702, 0.332834, 1 );
points [ 173 ].components ( 0.000783624, -0.130641, 0.33268, 1 );
points [ 174 ].components ( 0.00110633, -0.13052, 0.332372, 1 );
points [ 175 ].components ( 0.00129112, -0.130353, 0.331947, 1 );
points [ 176 ].components ( 0.00129112, -0.130168, 0.331476, 1 );
points [ 177 ].components ( 0.00110633, -0.130001, 0.33105, 1 );
points [ 178 ].components ( 0.000783624, -0.12988, 0.330743, 1 );
points [ 179 ].components ( 0.000391742, -0.12982, 0.330589, 1 );
points [ 180 ].components ( 0, -0.12982, 0.330589, 1 );
points [ 181 ].components ( -0.000391882, -0.12982, 0.330589, 1 );
points [ 182 ].components ( -0.000783624, -0.12988, 0.330743, 1 );
points [ 183 ].components ( -0.00110647, -0.130001, 0.33105, 1 );
points [ 184 ].components ( -0.00129112, -0.130168, 0.331476, 1 );
points [ 185 ].components ( -0.00129112, -0.130353, 0.331947, 1 );
points [ 186 ].components ( -0.00110647, -0.13052, 0.332372, 1 );
points [ 187 ].components ( -0.000783624, -0.130641, 0.33268, 1 );
points [ 188 ].components ( -0.000391882, -0.130702, 0.332834, 1 );
points [ 189 ].components ( 0, -0.130702, 0.332834, 1 );

points [ 190 ].components ( 0, -0.261407, 0.274149, 1 );
points [ 191 ].components ( 0.000391742, -0.261407, 0.274149, 1 );
points [ 192 ].components ( 0.000783624, -0.261286, 0.274022, 1 );
points [ 193 ].components ( 0.00110633, -0.261044, 0.273769, 1 );
points [ 194 ].components ( 0.00129112, -0.26071, 0.273418, 1 );
points [ 195 ].components ( 0.00129112, -0.26034, 0.27303, 1 );
points [ 196 ].components ( 0.00110633, -0.260006, 0.27268, 1 );
points [ 197 ].components ( 0.000783624, -0.259765, 0.272427, 1 );
points [ 198 ].components ( 0.000391742, -0.259644, 0.2723, 1 );
points [ 199 ].components ( 0, -0.259644, 0.2723, 1 );
points [ 200 ].components ( -0.000391882, -0.259644, 0.2723, 1 );
points [ 201 ].components ( -0.000783624, -0.259765, 0.272427, 1 );
points [ 202 ].components ( -0.00110647, -0.260006, 0.27268, 1 );
points [ 203 ].components ( -0.00129112, -0.26034, 0.27303, 1 );
points [ 204 ].components ( -0.00129112, -0.26071, 0.273418, 1 );
points [ 205 ].components ( -0.00110647, -0.261044, 0.273769, 1 );
points [ 206 ].components ( -0.000783624, -0.261286, 0.274022, 1 );
points [ 207 ].components ( -0.000391882, -0.261407, 0.274149, 1 );
points [ 208 ].components ( 0, -0.261407, 0.274149, 1 );

points [ 209 ].components ( 0, -0.361379, 0.156928, 1 );
points [ 210 ].components ( 0.000391742, -0.361379, 0.156928, 1 );
points [ 211 ].components ( 0.000783624, -0.361212, 0.156855, 1 );
points [ 212 ].components ( 0.00110633, -0.360878, 0.15671, 1 );
points [ 213 ].components ( 0.00129112, -0.360416, 0.156509, 1 );
points [ 214 ].components ( 0.00129112, -0.359905, 0.156287, 1 );
points [ 215 ].components ( 0.00110633, -0.359443, 0.156087, 1 );
points [ 216 ].components ( 0.000783624, -0.359109, 0.155942, 1 );
points [ 217 ].components ( 0.000391742, -0.358941, 0.155869, 1 );
points [ 218 ].components ( 0, -0.358941, 0.155869, 1 );
points [ 219 ].components ( -0.000391882, -0.358941, 0.155869, 1 );
points [ 220 ].components ( -0.000783624, -0.359109, 0.155942, 1 );
points [ 221 ].components ( -0.00110647, -0.359443, 0.156087, 1 );
points [ 222 ].components ( -0.00129112, -0.359905, 0.156287, 1 );
points [ 223 ].components ( -0.00129112, -0.360416, 0.156509, 1 );
points [ 224 ].components ( -0.00110647, -0.360878, 0.15671, 1 );
points [ 225 ].components ( -0.000783624, -0.361212, 0.156855, 1 );
points [ 226 ].components ( -0.000391882, -0.361379, 0.156928, 1 );
points [ 227 ].components ( 0, -0.361379, 0.156928, 1 );

points [ 228 ].components ( 0, -0.4, 0, 1 );
points [ 229 ].components ( 0.000391742, -0.4, 0, 1 );
points [ 230 ].components ( 0.000783624, -0.399815, 0, 1 );
points [ 231 ].components ( 0.00110633, -0.399445, 0, 1 );
points [ 232 ].components ( 0.00129112, -0.398934, 0, 1 );
points [ 233 ].components ( 0.00129112, -0.398368, 0, 1 );
points [ 234 ].components ( 0.00110633, -0.397857, 0, 1 );
points [ 235 ].components ( 0.000783624, -0.397487, 0, 1 );
points [ 236 ].components ( 0.000391742, -0.397302, 0, 1 );
points [ 237 ].components ( 0, -0.397302, 0, 1 );
points [ 238 ].components ( -0.000391882, -0.397302, 0, 1 );
points [ 239 ].components ( -0.000783624, -0.397487, 0, 1 );
points [ 240 ].components ( -0.00110647, -0.397857, 0, 1 );
points [ 241 ].components ( -0.00129112, -0.398368, 0, 1 );
points [ 242 ].components ( -0.00129112, -0.398934, 0, 1 );
points [ 243 ].components ( -0.00110647, -0.399445, 0, 1 );
points [ 244 ].components ( -0.000783624, -0.399815, 0, 1 );
points [ 245 ].components ( -0.000391882, -0.4, 0, 1 );
points [ 246 ].components ( 0, -0.4, 0, 1 );

points [ 247 ].components ( 0, -0.361379, -0.156928, 1 );
points [ 248 ].components ( 0.000391742, -0.361379, -0.156928, 1 );
points [ 249 ].components ( 0.000783624, -0.361212, -0.156855, 1 );
points [ 250 ].components ( 0.00110633, -0.360878, -0.15671, 1 );
points [ 251 ].components ( 0.00129112, -0.360416, -0.156509, 1 );
points [ 252 ].components ( 0.00129112, -0.359905, -0.156287, 1 );
points [ 253 ].components ( 0.00110633, -0.359443, -0.156087, 1 );
points [ 254 ].components ( 0.000783624, -0.359108, -0.155942, 1 );
points [ 255 ].components ( 0.000391742, -0.358941, -0.155869, 1 );
points [ 256 ].components ( 0, -0.358941, -0.155869, 1 );
points [ 257 ].components ( -0.000391882, -0.358941, -0.155869, 1 );
points [ 258 ].components ( -0.000783624, -0.359108, -0.155942, 1 );
points [ 259 ].components ( -0.00110647, -0.359443, -0.156087, 1 );
points [ 260 ].components ( -0.00129112, -0.359905, -0.156287, 1 );
points [ 261 ].components ( -0.00129112, -0.360416, -0.156509, 1 );
points [ 262 ].components ( -0.00110647, -0.360878, -0.15671, 1 );
points [ 263 ].components ( -0.000783624, -0.361212, -0.156855, 1 );
points [ 264 ].components ( -0.000391882, -0.361379, -0.156928, 1 );
points [ 265 ].components ( 0, -0.361379, -0.156928, 1 );

points [ 266 ].components ( 0, -0.261407, -0.274149, 1 );
points [ 267 ].components ( 0.000391742, -0.261407, -0.274149, 1 );
points [ 268 ].components ( 0.000783624, -0.261286, -0.274022, 1 );
points [ 269 ].components ( 0.00110633, -0.261044, -0.273769, 1 );
points [ 270 ].components ( 0.00129112, -0.26071, -0.273418, 1 );
points [ 271 ].components ( 0.00129112, -0.26034, -0.27303, 1 );
points [ 272 ].components ( 0.00110633, -0.260006, -0.27268, 1 );
points [ 273 ].components ( 0.000783624, -0.259765, -0.272427, 1 );
points [ 274 ].components ( 0.000391742, -0.259644, -0.2723, 1 );
points [ 275 ].components ( 0, -0.259644, -0.2723, 1 );
points [ 276 ].components ( -0.000391882, -0.259644, -0.2723, 1 );
points [ 277 ].components ( -0.000783624, -0.259765, -0.272427, 1 );
points [ 278 ].components ( -0.00110647, -0.260006, -0.27268, 1 );
points [ 279 ].components ( -0.00129112, -0.26034, -0.27303, 1 );
points [ 280 ].components ( -0.00129112, -0.26071, -0.273418, 1 );
points [ 281 ].components ( -0.00110647, -0.261044, -0.273769, 1 );
points [ 282 ].components ( -0.000783624, -0.261286, -0.274022, 1 );
points [ 283 ].components ( -0.000391882, -0.261407, -0.274149, 1 );
points [ 284 ].components ( 0, -0.261407, -0.274149, 1 );

points [ 285 ].components ( 0, -0.130702, -0.332834, 1 );
points [ 286 ].components ( 0.000391742, -0.130702, -0.332834, 1 );
points [ 287 ].components ( 0.000783624, -0.130641, -0.33268, 1 );
points [ 288 ].components ( 0.00110633, -0.13052, -0.332372, 1 );
points [ 289 ].components ( 0.00129112, -0.130353, -0.331947, 1 );
points [ 290 ].components ( 0.00129112, -0.130168, -0.331476, 1 );
points [ 291 ].components ( 0.00110633, -0.130001, -0.33105, 1 );
points [ 292 ].components ( 0.000783624, -0.12988, -0.330743, 1 );
points [ 293 ].components ( 0.000391742, -0.12982, -0.330589, 1 );
points [ 294 ].components ( 0, -0.12982, -0.330589, 1 );
points [ 295 ].components ( -0.000391882, -0.12982, -0.330589, 1 );
points [ 296 ].components ( -0.000783624, -0.12988, -0.330743, 1 );
points [ 297 ].components ( -0.00110647, -0.130001, -0.33105, 1 );
points [ 298 ].components ( -0.00129112, -0.130168, -0.331476, 1 );
points [ 299 ].components ( -0.00129112, -0.130353, -0.331947, 1 );
points [ 300 ].components ( -0.00110647, -0.13052, -0.332372, 1 );
points [ 301 ].components ( -0.000783624, -0.130641, -0.33268, 1 );
points [ 302 ].components ( -0.000391882, -0.130702, -0.332834, 1 );
points [ 303 ].components ( 0, -0.130702, -0.332834, 1 );

points [ 304 ].components ( 0, 0, -0.33283, 1 );
points [ 305 ].components ( 0.000391742, 0, -0.33283, 1 );
points [ 306 ].components ( 0.000783624, 0, -0.332676, 1 );
points [ 307 ].components ( 0.00110633, 0, -0.332368, 1 );
points [ 308 ].components ( 0.00129112, 0, -0.331943, 1 );
points [ 309 ].components ( 0.00129112, 0, -0.331472, 1 );
points [ 310 ].components ( 0.00110633, 0, -0.331047, 1 );
points [ 311 ].components ( 0.000783624, 0, -0.330739, 1 );
points [ 312 ].components ( 0.000391742, 0, -0.330585, 1 );
points [ 313 ].components ( 0, 0, -0.330585, 1 );
points [ 314 ].components ( -0.000391882, 0, -0.330585, 1 );
points [ 315 ].components ( -0.000783624, 0, -0.330739, 1 );
points [ 316 ].components ( -0.00110647, 0, -0.331047, 1 );
points [ 317 ].components ( -0.00129112, 0, -0.331472, 1 );
points [ 318 ].components ( -0.00129112, 0, -0.331943, 1 );
points [ 319 ].components ( -0.00110647, 0, -0.332368, 1 );
points [ 320 ].components ( -0.000783624, 0, -0.332676, 1 );
points [ 321 ].components ( -0.000391882, 0, -0.33283, 1 );
points [ 322 ].components ( 0, 0, -0.33283, 1 );

knot knotVectorU [ 26 ] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

knot knotVectorV [ 29 ] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

knot* vectU = new knot [ 26 ];

for ( int index = 0; index < 26; index ++ )
    vectU [ index ] = knotVectorU [ index ];

knot* vectV = new knot [ 29 ];

for ( int index = 0; index < 29; index ++ )
    vectV [ index ] = knotVectorV [ index ];

snlSurface* retSurface = new snlSurface ( degreeU, degreeV, 17, 19, points, vectU, vectV );

