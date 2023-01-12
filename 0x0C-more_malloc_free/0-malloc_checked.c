        char *arr;
        unsigned int i;

        if (size == 0)
        {
                return (NULL);
        }

        arr = malloc(sizeof(char) * size);

        /* check if malloc was successful */

        if (arr == NULL)
                return (NULL);

        for (i = 0; i < size; i++)
        {
                arr[i] = c;
        }

        return (arr);

}

