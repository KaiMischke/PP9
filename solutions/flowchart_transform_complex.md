
wchart TD
    A[Start] --> B[Initialize result = 1, i = 1]
    B --> C{Is i <= x?}
    C -- No --> G[Return result]
    C -- Yes --> D{Is i % 2 == 0?}
    D -- Yes --> E[Add i to result]
    D -- No --> F[Multiply result by i]
    E --> H{Is result > 1000?}
    F --> H
    H -- Yes --> I[Subtract 100 from result]
    H -- No --> J[No change]
    I --> K[Increment i by 1]
    J --> K
    K --> C
    G --> L[End]
