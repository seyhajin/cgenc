
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