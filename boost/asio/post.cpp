#include<boost/asio.hpp>
#include<boost/shared_ptr.hpp>
#include<boost/thread.hpp>
#include<boost/thread/mutex.hpp>
#include<boost/bind.hpp>
#include<iostream>

using namespace std;

boost::mutex global_lock;


void WorkerThread( boost::shared_ptr<boost::asio::io_service> ios )
{
  global_lock.lock();
  cout << boost::this_thread::get_id() << "Thread start" << endl;
  global_lock.unlock();

  ios->run();


  global_lock.lock();
  cout << boost::this_thread::get_id() << "Thread finish" << endl;
  global_lock.unlock();
} 


int main()
{
  boost::shared_ptr< boost::asio::io_service > io_service( 
      new boost::asio::io_service
      );
  boost::shared_ptr< boost::asio::io_service::work > work(
      new boost::asio::io_service::work( *io_service )
      );
  
  boost::shared_ptr<boost::asio::io_service> ios( new boost::asio::io_service );
  /*
  boost::shared_ptr<boost::asio::io_service::work> work(*ios);
  */

  return 0;
}
