function A = DH(teta,d,a,alfa)
A= [ cos(teta)  -cos(alfa)*sin(teta)    sin(alfa)*sin(teta)     a*cos(teta);
    sin(teta)   cos(alfa)*cos(teta)     -sin(alfa)*cos(teta)    a*sin(teta);
    0           sin(alfa)       cos(alfa)       d;
    0           0               0           1];