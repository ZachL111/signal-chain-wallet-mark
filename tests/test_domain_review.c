#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {49, 48, 18, 82};
    assert(domain_review_score(item) == 174);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
