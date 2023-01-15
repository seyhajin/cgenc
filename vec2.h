@generic [<T, float, f>, <C, int, i>], <T, double, d>, <T, int, i>

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