#include "weights.h"

const char* weightsText = R"(
InputNeurons
737
OutputLayer
-244.032 -238.786 -219.462 -214.646 -203.066 -207.634 -226.895 -235.539 -156.912 -165.177 -157.107 -143.971 -144.931 -140.44 -157.781 -146.284 -102.446 -104.333 -92.6222 -93.5993 -98.9646 -96.2652 -103.689 -91.8025 -79.0661 -94.7497 -81.1511 -90.1525 -90.8836 -77.3331 -91.5327 -76.0474 -81.6037 -88.5464 -76.1879 -81.2303 -81.0795 -78.6571 -97.532 -77.4503 -79.8576 -85.2678 -77.2796 -66.8422 -71.5104 -97.0799 -95.5265 -71.8606 -175.49 -224.146 -251.509 -234.534 -253.447 -220.502 -212.251 -171.924 -223.539 -250.686 -276.36 -277.367 -273.221 -279.993 -257.338 -218.816 -242.956 -272.825 -287.563 -295.357 -287.401 -300.402 -282.11 -254.254 -257.061 -271.318 -288.909 -301.557 -298.415 -301.405 -278.275 -264.522 -250.493 -268.202 -279.862 -283.836 -290.055 -284.787 -270.489 -251.048 -238.578 -262.517 -276.89 -273.579 -279.076 -284.012 -273.815 -248.042 -240.897 -229.314 -251.05 -263.937 -266.704 -266.596 -252.091 -242.399 -209.797 -239.293 -233.07 -243.77 -249.007 -249.05 -239.098 -208.734 -265.225 -270.742 -267.183 -265.048 -275.293 -271.912 -280.081 -268.637 -266.624 -290.66 -280.758 -280.112 -296.296 -294.34 -289.556 -260.602 -282.521 -295.315 -299.105 -299.438 -299.897 -303.452 -302.033 -288.903 -285.325 -287.877 -304.533 -307.087 -307.322 -307.3 -291.324 -287.215 -275.18 -292.397 -300.658 -306.006 -309.375 -294.778 -291.885 -278.576 -282.854 -292.583 -298.032 -300.487 -295.967 -301.502 -294.195 -285.037 -281.642 -292.114 -291.173 -283.713 -296.316 -287.599 -306.214 -273.995 -263.733 -280.415 -265.386 -276.425 -276.467 -273.243 -267.425 -259.157 -466.991 -463.485 -468.258 -473.57 -468.507 -459.649 -464.842 -456.489 -470.812 -470.697 -470.865 -473.559 -469.244 -465.383 -465.304 -464.937 -456.452 -464.923 -465.068 -467.536 -456.545 -455.352 -460.232 -454.155 -450.534 -456.528 -462.487 -460.729 -458.4 -462.197 -447.197 -451.049 -444.244 -449.718 -452.828 -454.042 -450.878 -443.506 -445.595 -436.185 -428.961 -445.732 -439.848 -446.273 -444.518 -439.175 -434.965 -422.203 -428.096 -440.947 -439.874 -446.28 -443.914 -445.998 -433.766 -411.861 -435.61 -441.189 -453.976 -454.666 -461.292 -451.393 -426.06 -421.279 -769.618 -799.954 -806.723 -810.445 -816.583 -822.133 -810.832 -824.706 -760.991 -764.733 -794.671 -803.833 -809.443 -830.753 -816.743 -833.082 -766.751 -785.442 -793.944 -818.12 -824.422 -832.939 -812.072 -829.194 -768.738 -776.211 -784.789 -792.885 -815.507 -820.225 -811.079 -800.237 -779.606 -784.697 -791.549 -794.49 -802.377 -801.228 -803.658 -788.814 -771.538 -784.106 -790.299 -787.028 -787.475 -793.802 -799.902 -789.641 -758.938 -779.819 -794.25 -785.053 -793.425 -787.986 -767.732 -769.01 -778.422 -764.225 -770.525 -796.315 -776.433 -756.072 -745.408 -720.331 34.3191 13.6823 -2.08953 18.2103 11.5824 -1.5254 -3.83449 3.66485 -9.14318 -11.8661 -10.9822 -10.5129 -8.92215 -23.2483 -17.9137 -9.27445 -23.3013 -18.2286 -19.1923 -12.3908 -12.9371 -31.841 -38.9469 0.341786 8.72976 -9.63242 -15.897 -18.1624 -15.848 -21.0285 -13.8387 6.52029 25.4935 3.8486 -9.64138 -11.9495 -11.0806 -6.11189 1.16405 21.3126 14.9452 6.66059 -1.37869 -8.20026 -7.90265 -2.7116 -2.11902 14.8148 25.1153 4.77817 2.92338 7.80797 1.70656 6.18057 7.83139 17.1732 46.4713 5.52918 13.0156 31.3588 14.7689 27.176 5.08621 23.259 87.9215 90.7541 73.3442 65.112 77.0131 97.9718 100.738 71.148 85.5006 92.675 82.4556 77.943 85.1496 82.2662 95.288 76.3073 85.1364 88.0619 81.3536 89.2245 86.051 82.1401 93.3679 76.9301 107.644 107.984 93.8003 95.1713 95.2246 96.9941 99.1292 94.1803 153.077 161.42 145.095 136.38 135.789 140.298 159.058 142.533 242.7 248.815 213.288 198.794 214.99 204.915 201.923 228.741 206.327 242.645 231.605 242.082 248.25 239.248 242.947 218.666 226.53 243.484 256.159 261.904 262.909 266.906 242.971 252.001 245.395 255.071 275.765 282.09 279.631 278.702 274.083 243.353 253.011 265.166 287.657 285.992 289.685 283.072 282.343 256.969 253.132 280.384 289.207 306.296 298.185 299.468 285.503 266.104 233.283 278.572 289.379 296.841 298.145 288.378 278.747 246.186 229.383 255.295 277.909 273.976 261.608 263.603 247.588 234.128 171.695 216.53 252.327 236.606 254.231 217.852 201.108 169.773 255.642 278.857 269.94 275.716 277.444 271.974 270.22 266.347 273.894 292.121 290.616 284.875 297.194 291.953 298.938 272.396 278.892 292.327 297.518 306.891 301.446 300.752 295.202 281.902 283.28 293.203 298.824 307.317 302.366 294.842 288.789 285.269 284.498 287.953 298.732 311.604 309.717 304.542 288.023 285.917 277.716 288.75 299.547 298.329 292.021 302.087 297.043 286.381 273.366 285.5 288.776 271.12 288.966 290.994 294.966 250.367 255.033 267.997 258.812 280.259 274.234 269.741 260.094 256.153 437.775 444.258 452.394 453.809 458.341 451.027 428.723 426.833 426.682 443.087 442.309 447.905 443.204 449.382 440.156 408.438 433.258 438.835 443.129 444.634 444.374 440.856 442.243 427 445.347 449.16 454.596 453.672 448.888 444.555 445.575 438.288 452.67 450.023 464.201 457.079 457.018 459.183 448.46 451.354 461.939 463.396 461.057 466.38 461.893 460.782 459.117 453.807 470.18 473.665 477.818 473.058 467.234 474.327 462.991 459.655 472.242 469.074 470.614 470.254 471.362 463.945 451.039 464.092 778.257 775.116 779.332 792.854 774.624 764.435 751.654 730.124 760.734 775.047 798.484 793.077 796.466 794.065 764.872 764.476 776.972 787.921 789.064 792.093 794.36 801.205 795.133 787.227 779.045 779.443 788.69 796.526 800.899 795.725 803.513 793.044 770.207 773.787 794.624 801.833 816.812 815.168 804.415 800.539 772.939 773.875 796.338 810.043 829.127 831.301 831.088 826.728 757.339 768.973 802.788 813.993 805.808 819.609 825.434 802.099 771.108 804.306 812.69 804.395 830.346 799.757 803.542 816.813 -40.2912 -9.11472 -6.7156 -30.7315 -16.4244 -22.3475 -14.0668 -25.426 -16.7689 -6.15279 -3.23552 -10.1867 -5.83456 -3.34875 -4.16748 -12.0452 -18.7507 -5.40316 0.924906 0.839916 8.16553 4.78714 0.708719 -11.3915 -18.5813 -5.15091 12.7359 12.9717 13.3078 8.78126 -0.349233 -16.5158 -4.97767 23.12 19.7928 15.4037 13.2533 20.1983 22.3048 -2.58756 0.22901 17.5217 20.3331 8.91465 15.268 37.6738 35.8711 14.7073 -11.6066 22.8364 10.8107 15.5323 16.2938 27.9409 15.5966 3.1497 -61.6722 -22.336 -20.9454 -11.4007 -13.0624 9.05031 9.46895 -4.98279 -26.3953
)";