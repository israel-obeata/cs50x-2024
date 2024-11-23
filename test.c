}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
        for (int i = 0; i < candidate_count; i++)
            {
                    if (strcmp(candidates[i].name, name) == 0)
                            {
                                        candidates[i].votes++;
                                                    return true;
                                                            }
                                                                }
                                                                    return false;
                                                                    }

                                                                    // Print the winner (or winners) of the election
                                                                    void print_winner(void)
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
