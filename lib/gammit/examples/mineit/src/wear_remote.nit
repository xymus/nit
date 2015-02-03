

# Android Wear remote for Gamnit in virtual reality mode
module wear_remote

import android
import java::collections

redef class App
	fun nodes: JavaStringArray in "Java" `{
	    HashSet <String>results = new HashSet<String>();
	    NodeApi.GetConnectedNodesResult nodes =
		    Wearable.NodeApi.getConnectedNodes(mGoogleApiClient).await();

	    for (Node node : nodes.getNodes()) {
			results.add(node.getId());
	    }

	    return results.toArray(new String[x.size()]);
	`}

	fun write_to_phone(message: String) in "Java" `{
	    Wearable.MessageApi.sendMessage(
	      mGoogleApiClient, nodeId, START_ACTIVITY_PATH, new byte[0]).setResultCallback(
		  new ResultCallback<SendMessageResult>() {
		      @Override
		      public void onResult(SendMessageResult sendMessageResult) {
		          if (!sendMessageResult.getStatus().isSuccess()) {
		              Log.e(TAG, "Failed to send message with status code: "
		                      + sendMessageResult.getStatus().getStatusCode());
		          }
		      }
		  }
	      );
	`}
end

redef class NativeActivity

	fun listen_for_messages in "Java" `{
		
		recv.addListener(mGoogleApiClient, new MessageApi.MessageListener() {

			@Override
			public void onMessageReceived(MessageEvent messageEvent) {
				if (messageEvent.getPath().equals(START_ACTIVITY_PATH)) {
					android.Log.d("nit", received_message);
					//Intent startIntent = new Intent(this, MainActivity.class);
					//startIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
					//startActivity(startIntent);
				}
			}
		}
	`}
end
