#ifndef SCORE_H
#define SCORE_H

class Score
{
public:
    Score();
    Score(unsigned score);
    ~Score() {}

    unsigned getScore() { return score; }

    void setScore(unsigned score) { this->score = score; };
    void addScore(unsigned score) { this->score += score; };
    void subtractScore(unsigned score) { this->score -= score; };
private:
    unsigned score;
};

#endif
