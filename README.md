ParticleSim
===========


A simple particle simulator written in C++ using the SDL library.

### Compilation

Have the SDL development library installed. Type make while in the src directory.

```bash
cd src
make
```

### Usage

Basic usage is as follows:

```bash
./slid [number of particles]
```

### Examples

Each particle is given a random starting location, random velocity, and random acceleration. Collisions with the walls do not result in energy loss currently. If a particle has a non-zero acceleration it will eventually come to rest.

```bash
./slid 50
```
![Original image](https://github.com/cparadis6191/Particle-Sim/blob/master/examples/particles.gif)

This second example shows an interesting effect from the random distribution. A vague grid-like pattern can be seen which might be a result of my usage of the C random number functions or might be a limitation of the random generation itself (leaning towards my usage).

```bash
./slid 10000
```
![Original image](https://github.com/cparadis6191/Particle-Sim/blob/master/examples/particles_uneven_random_distribution.gif)
