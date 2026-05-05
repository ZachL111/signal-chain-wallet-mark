#include "policy.h"

enum {
    THRESHOLD = 151,
    RISK_PENALTY = 7,
    LATENCY_PENALTY = 3,
    WEIGHT_BONUS = 6
};

int score_signal(Signal signal) {
    return signal.demand * 2 + signal.capacity + signal.weight * WEIGHT_BONUS
        - signal.latency * LATENCY_PENALTY - signal.risk * RISK_PENALTY;
}

const char *classify_signal(Signal signal) {
    return score_signal(signal) >= THRESHOLD ? "accept" : "review";
}
