#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> sequence {};
    if (count < 0 ){
        return {};
    }
    for (size_t i {}; i < count; i++){
        sequence.push_back(step*(i+1));
    }

    return sequence;
}