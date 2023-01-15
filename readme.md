# cgenc - c generics generator for c

Simple C generics generator for C.

- Needs a generic template input file to be translated whose first line must start with `@generic` followed by the generic types we want to translate, separated by commas. 
- The declaration of a generic type must follow the following format: `<ref, type, tag>` (ex: `<T, float, t>`). The translation process is simple, it replaces each occurrence of `<T>` (upper-case) by the **type** and `<t>` (lower-case) by the **tag** of which `T` is the reference (**ref**) of the generic type (noted the case difference).
- Several generic types can be grouped together by putting them in square brackets and each reference must be unique.

## Usage

```bash
usage:  cgenc [options] [inputs]

inputs:                   - paths of the template files

options:
    -g,--generic=        - specifies the '@generic' declaration to use (template '@generic' declaration will be ignored)
    -h,--help            - shows this help
    -v,--version         - shows the version
```

## Example

```bash
./cgenc vec2.h -g="<T, float, f>"
```

### Generic input (_vec2.h_)
```c++
@generic <T, float, f>, <T, double, d>, <T, int, i>

typedef struct vec2<t> {
    <T> x, y;
} vec2<t>;

vec2<t> vec2<t>_set(<T> x, <T> y) {
    vec2<t> res = { x, y };
    return res;
}

<T> vec2<t>_dot(vec2<t> a, vec2<t> b) {
    <T> dot = (a.x * b.x + a.y * b.y);
    return dot;
}

vec2<t> vec2<t>_add(vec2<t> a, vec2<t> b) {
    vec2<t> res = { a.x + b.x, a.y + b.y };
    return res;
}

vec2<t> vec2<t>_sub(vec2<t> a, vec2<t> b) {
    vec2<t> res = { a.x - b.x, a.y - b.y };
    return res;
}

vec2<t> vec2<t>_mul(vec2<t> a, vec2<t> b) {
    vec2<t> res = { a.x * b.x, a.y * b.y };
    return res;
}

vec2<t> vec2<t>_div(vec2<t> a, vec2<t> b) {
    vec2<t> res = { a.x / b.x, a.y / b.y };
    return res;
}

<T> min_(<T> a, <T> b) {
    return (a < b) ? a : b;
}
```

### Generic output for `<T, float, f>` (_vec2f.h_)
```c++

typedef struct vec2f {
    float x, y;
} vec2f;

vec2f vec2f_set(float x, float y) {
    vec2f res = { x, y };
    return res;
}

float vec2f_dot(vec2f a, vec2f b) {
    float dot = (a.x * b.x + a.y * b.y);
    return dot;
}

vec2f vec2f_add(vec2f a, vec2f b) {
    vec2f res = { a.x + b.x, a.y + b.y };
    return res;
}

vec2f vec2f_sub(vec2f a, vec2f b) {
    vec2f res = { a.x - b.x, a.y - b.y };
    return res;
}

vec2f vec2f_mul(vec2f a, vec2f b) {
    vec2f res = { a.x * b.x, a.y * b.y };
    return res;
}

vec2f vec2f_div(vec2f a, vec2f b) {
    vec2f res = { a.x / b.x, a.y / b.y };
    return res;
}

float min_(float a, float b) {
    return (a < b) ? a : b;
}
```