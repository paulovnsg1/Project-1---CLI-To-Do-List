    #ifndef TASK_H
    #define TASK_H

    #include <string>

    class Task{

        public:
            Task (int id, std::string description);

            int getId () const;
            std::string getDescription () const;
            bool isDone() const;
            void markDone();


        private:
            int id;
            std::string description;
            bool done;

    };





    #endif