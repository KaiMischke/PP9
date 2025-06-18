
wchart TD
    A[Start] --> B[Initialize state = 0, i = 0]
    B --> C{Is i < len?}
    C -- No --> F[Go to switch(state)]
    C -- Yes --> D{arr[i] < 0, == 0, or > 0?}
    D -- "< 0" --> E1[state = -1]
    D -- "== 0" --> E2[state = 0]
    D -- "> 0" --> E3[state = 1]
    E1 --> G{Is state == 1?}
    E2 --> G
    E3 --> G
    G -- Yes --> H[Break loop]
    G -- No --> I[Increment i by 1]
    H --> F
    I --> C
    F --> J{Switch(state)}
    J -- Case 1 --> K[Return true]
    J -- Default --> L[Return false]
    K --> M[End]
    L --> M
