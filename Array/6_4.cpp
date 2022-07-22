bool canreachend(vector<int> max_advance_step) {
    int further_reach_so_far = 0;
    int last_index = max_advance_step.size() - 1;

    for(int i = 0; i < last_index; i++) {

        further_reach_so_far = max(further_reach_so_far, max_advance_step[i] + i);
    }
    return further_reach_so_far >= last_index;
}
