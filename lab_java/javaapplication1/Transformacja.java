package javaapplication1;

public interface Transformacja {

    Punkt transformuj(Punkt p);

    Transformacja getTranformacjaOdwrotna()
            throws BrakTransformacjiOdwrotnejException;

}
