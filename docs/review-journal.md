# Review Journal

The cases below are the review handles I would use before changing the implementation.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 174, lane `ship`
- `stress`: `nonce pressure`, score 151, lane `ship`
- `edge`: `settlement risk`, score 218, lane `ship`
- `recovery`: `proof depth`, score 210, lane `ship`
- `stale`: `event finality`, score 156, lane `ship`

## Note

The useful failure mode here is a wrong decision on a named case, not a vague style disagreement.
