#include "weights.h"

const char* weightsText = R"(
InputNeurons
736
OutputLayer
-283.531 -277.416 -248.354 -245.023 -243.395 -255.197 -259.12 -282.481 -146.476 -158.193 -142.826 -128.374 -130.346 -137.029 -149.876 -134.58 -107.27 -108.447 -95.8277 -95.5192 -103.375 -98.0894 -103.912 -95.5708 -81.3843 -93.7111 -83.5341 -95.1937 -93.3523 -84.0475 -96.2211 -78.6499 -84.6343 -91.1178 -80.8333 -81.2488 -88.0195 -82.1957 -100.665 -79.864 -81.3047 -89.6586 -75.6739 -70.5508 -76.8259 -99.662 -103.529 -73.5972 -177.003 -229.164 -251.73 -242.338 -249.108 -215.167 -209.591 -168.639 -221.777 -251.213 -285.921 -274.631 -281.025 -279.839 -253.534 -220.958 -238.619 -279.408 -293.368 -299.494 -296.696 -302.912 -284.191 -247.852 -250.326 -277.195 -291.413 -306.478 -302.678 -302.699 -281.175 -269.384 -253.458 -272.459 -288.801 -288.289 -292.66 -288.993 -282.623 -256.12 -240.199 -260.017 -278.468 -280.032 -284.317 -285.027 -279.418 -246.572 -234.019 -240.354 -258.754 -266.158 -268.019 -272.29 -250.809 -259.736 -212.564 -244.105 -237.825 -242.645 -257.215 -253.214 -243.561 -213.341 -267.818 -271.291 -268.406 -278.13 -282.11 -264.346 -258.214 -265.51 -271.783 -295.055 -285.26 -284.218 -297.126 -305.291 -302.845 -255.609 -277.57 -292.658 -306.113 -301.908 -306.393 -304.998 -297.529 -301.269 -288.657 -293.095 -302.399 -314.985 -310.547 -311.323 -293.754 -293.168 -281.609 -296.727 -304.806 -309.474 -315.807 -299.149 -299.153 -281.347 -280.272 -294.151 -301.573 -307.564 -303.047 -308.494 -296.625 -286.401 -284.542 -294.708 -294.426 -283.898 -302.729 -294.867 -307.838 -271.043 -258.514 -282.779 -268.157 -280.06 -281.242 -272.967 -273.931 -269.207 -470.224 -464.309 -468.174 -477.613 -473.901 -466.232 -459.021 -462.67 -471.675 -475.313 -476.602 -476.956 -471.467 -470.255 -463.334 -458.331 -462.265 -466.357 -464.333 -473.049 -465.212 -461.863 -465.301 -456.885 -455.804 -460.888 -468.217 -463.748 -459.929 -472.668 -455.637 -455.407 -451.528 -456.389 -459.767 -456.681 -456.532 -447.414 -451.371 -441.161 -437.433 -448.322 -448.347 -450.068 -448.909 -443.005 -441.127 -424.563 -432.424 -449.776 -446.71 -452.328 -447.187 -453.742 -439.11 -418.679 -437.651 -448.207 -453.305 -455.596 -461.807 -457.81 -429.922 -424.1 -765.641 -791.346 -804.724 -795.839 -803.405 -791.487 -786.99 -794.68 -744.481 -766.113 -788.94 -805.992 -795.96 -830.627 -836.914 -808 -763.723 -780.426 -796.953 -809.009 -829.427 -826.768 -832.951 -812.216 -762.112 -779.097 -793.065 -796.571 -812.006 -805.387 -800.54 -806.066 -777.24 -786.756 -793.869 -795.951 -804.216 -797.982 -808.949 -780.317 -776.396 -791.503 -793.167 -790.825 -790.404 -801.495 -801.525 -778.649 -759.867 -781.671 -800.588 -790.291 -796.353 -793.719 -771.489 -757.864 -775.018 -767.422 -772.78 -795.836 -769.332 -761.703 -730.911 -716.239 58.9158 39.5284 32.1583 26.5416 36.3728 24.9921 2.68881 39.593 9.10754 -1.72775 1.44991 -2.44789 -3.68958 -15.9183 -7.54074 8.65579 -3.75903 -9.86968 -6.35948 -1.09272 2.90552 -17.6585 -27.6754 9.82796 19.4523 -7.54785 -5.04276 -4.27991 0.940914 -6.3759 -6.79328 22.3005 40.3136 15.4048 1.53821 1.84012 -0.0284184 4.74163 16.1029 33.1403 30.2081 14.5961 10.0688 8.35316 4.58474 9.09415 11.4567 29.7203 30.269 15.4273 15.9192 15.8813 15.0262 16.2552 14.7365 24.3471 56.0462 12.855 20.2571 43.6743 26.7939 41.4574 18.276 40.1565 85.0031 87.7289 74.9724 59.9105 71.3013 96.1944 93.966 69.2955 82.4971 90.7512 79.275 78.4402 79.6045 79.9446 93.4605 75.6007 83.5381 89.4251 80.7484 85.1912 84.1388 76.6771 89.7167 75.8329 103.491 106.279 91.5311 95.256 92.7084 95.3078 100.802 91.509 164.451 170.337 161.094 150.023 150.784 143.196 167.843 154.601 195.338 199.739 183.468 162.03 171.348 144.551 152.94 165.011 205.611 242.549 234.254 249.362 246.374 242.825 241.971 215.978 238.985 238.283 254.488 264.852 268.376 267.841 254.044 239.082 249.433 264.885 280.575 282.86 281.539 284.307 276.189 249.992 255.464 267.905 287.093 289.476 295.741 288.037 278.899 256.296 267.639 283.696 295.292 309.04 301.354 306.459 290.54 268.559 245.699 280.15 292.211 301.396 297.061 292.439 281.834 258.562 239.568 262.253 276.314 283.262 258.045 268.719 255.68 238.867 173.137 217.638 255.419 234.968 262.617 224.303 203.684 177.643 268.359 282.035 272.977 279.988 281.06 277.853 269.955 263.565 278.229 296.734 294.651 291.113 298.302 293.016 305.032 281.772 288.203 298.505 302.038 307.028 301.737 301.453 299.918 287.264 284.396 295.916 302.919 312.569 302.806 297.81 288.954 290.204 288.563 290.096 308.802 312.972 314.638 306.599 292.705 286.631 287.193 300.158 299.669 304.421 293.284 306.165 307.788 280.597 276.268 292.676 294.263 275.732 295.934 286.042 290.529 262.197 257.42 275.391 261.913 274.556 275.203 278.846 275.699 264.108 444.27 446.266 462.961 462.213 467.487 454.095 432.824 432.147 432.375 445.449 445.351 452.373 451.115 452.105 446.027 411.248 436.256 447.818 445.586 451.338 450.318 448.579 446.951 436.594 451.062 454.517 459.695 462.666 454.608 451.422 450.55 446.959 462.918 458.495 471.356 465.99 466.357 460.571 452.688 460.389 470.928 474.244 474.945 472.207 464.879 466.682 466.228 463.914 482.593 481.996 484.807 481.108 475.456 483.978 476.934 480.524 480.576 478.321 478.436 474.645 474.08 465.874 463.513 467.523 798.22 786.7 793.805 808.615 796.963 776.294 777.495 749.076 774.218 790.188 809.228 806.238 811.836 808.938 780.397 789.523 789.1 798.659 805.49 805.556 811.027 811.885 811.443 814.033 796.517 796.248 805.111 817.882 820.858 820.323 815.071 816.242 798.817 790.637 808.054 824.911 844.297 850.298 833.458 811.435 798.125 806.473 820.041 839.184 850.788 867.303 837.261 859.073 800.014 800.617 833.461 833.66 846.375 849.472 830.859 854.876 794.36 828.663 834.178 833.203 862.242 859.772 838.998 865.654 -33.6803 -1.54391 0.55415 -20.5145 -7.70013 -9.2274 -2.28262 -12.6659 -12.2803 5.06698 9.71204 -2.25654 6.84884 6.42342 2.95964 -5.55431 -5.3366 4.54466 13.9775 19.1459 22.3223 18.1327 16.8641 3.97261 -4.71618 8.72405 25.7401 28.67 26.3091 22.5541 18.0482 -3.70167 7.35283 29.8065 31.9968 30.4108 33.8006 37.7924 34.522 14.0057 20.1787 28.513 33.5846 20.1378 32.623 55.0186 51.8157 24.5861 9.11329 30.7936 21.8871 23.4404 21.0445 36.7804 25.4456 15.0239 -31.8431 -0.829149 3.29676 0.669708 6.40231 30.7745 14.5261 14.3846 846.166
)";