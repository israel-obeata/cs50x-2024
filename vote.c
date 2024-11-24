// Display winner of election
    print_winner();
    }

    // Update vote totals given a new vote
    bool vote(string name)
    {
        // TODO
        for (int i = 0; i < candidate_count; i++)
              {
                    if (strcmp(candidates[i].name, name) == 0)
                                {
                                            candida                                                          return false;

                                                                                                                   {
                                                                            // TODO
                                                                                int max_votes = 0;
                                                                                    int max_index = 0;
                                                                                        for (int i = 0; i < candidate_count; i++)
                                                                                            {
                                                                                                    if (candidates[i].votes >= max_votes)
                                                                                                            {
                                                                                                                        max_index = i;
                                                                                                                                    max_votes = candidates[i].votes;
                                                                                                                                            }
                                                                                                                                                }
                                                                                                                                                    for (int i = 0; i < candidate_count; i++)
                                                                                                                                                        {
                                                                                                                                                                if (candidates[i].votes == max_votes)
                                                                                                                                                                        {
                                                                                                                                                                                    printf("%s\n", candidates[i].name);
                                                                                                                                                                                            }
                                                                                                                                                                                                }
                                                                                                                                                                                                    return;
                                                                                                                                                                                                    }


