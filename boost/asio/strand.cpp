#include<boost/asio.hpp>
#include<boost/thread.hpp>
#include<boost/thread/mutex.hpp>
#include<boost/bind.hpp>
#include<iostream>

boost::mutex mutex_lock;
using namespace std;

void Thread(boost::shared_ptr< boost::asio::io_service > ios)
{
  mutex_lock.lock();
  cout << "[" << boost::this_thread::get_id() << "] Thread Start" << endl;
  mutex_lock.unlock();

  ios->run();

  mutex_lock.lock();
  cout << "[" << boost::this_thread::get_id() << "] Thread Finish" << endl;
  mutex_lock.unlock();

}

void PrintNum( int x )
{
   cout << "[" << x << "]" << endl;
}

int main()
{
    boost::shared_ptr< boost::asio::io_service > ios(
          new boost::asio::io_service
        );
    boost::shared_ptr< boost::asio::io_service::work> work(
          new boost::asio::io_service::work(*ios) 
        );

    boost::asio::io_service::strand strand( *ios );

    boost::thread_group thread_pool;
    for( int i = 0; i < 3; i++ )
    {
        thread_pool.create_thread( boost::bind( &Thread, ios) );
    }

    strand.post( boost::bind( &PrintNum, 1) );
    strand.post( boost::bind( &PrintNum, 2) );
    strand.post( boost::bind( &PrintNum, 3) );

    work.reset(); 
    thread_pool.join_all();

    return 0;
}

