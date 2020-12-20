project('monogame', 'c', 'cpp', default_options : ['cpp_std=c++17' ])

deps = [
    dependency('sdl2')
]

includes = [
    include_directories('include/')
]

sources = [
    'src/mgplatform.cpp'
]

library('monogame', sources, include_directories : includes, dependencies : deps)