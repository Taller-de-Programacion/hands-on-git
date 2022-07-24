# Factorial

El programa `factorial` toma por línea de comandos un número e imprime el
factorial de dicho número.

Por ejemplo

```shell
$ ./factorial 5
120
```

Por definición el factorial de 0 es 1

```shell
$ ./factorial 0
1
```

La implementación de `factorial` es muy simple y solo calcula
el factorial de números naturales. Factoriales de números negativos,
imaginarios u otros no esta soportado y se imprimirá un error
por salida de error estándar.

```shell
$ ./factorial -1
Not supported.
```

```shell
$ ./factorial 0.25
Not supported.
```

```shell
$ ./factorial
Not supported.
```


