import tweepy
#from TwitterOAuth import OAuthVerifier

def OAuthVerifier():
    consumerKey = 'PaGraW3gtKjIC0yQ0IgHct0m8'
    consumerSecret = 'kIhwzptIoYJio5jDImywkYxaPFGwQyUr962i4C6OwL1eO2VQPS'
    authorization = tweepy.OAuthHandler(consumerKey, consumerSecret)
    accessToken = '1101744877115629569-d6gPFB0fGszEuRcmXogKXrfG2PtUAL'
    accessSecret = 'yM3IgPBYE63lBexHVz0dWYp2AUmiFSHmjLAEUF9bKbzRU'
    authorization.set_access_token(accessToken, accessSecret)
    api=tweepy.API(authorization)
    return api

def getUserStatistics(user):
    print('\nName: ', user.name)
    print('\nScreen name: ', user.screen_name)
    print('\nID: ', user.id)
    print('\nAccount creation datre and time : ', user.created_at)
    print('\nLocation: ', user.location)
    print("\nDescription: ", user.description)
    print('\nNo. of friends: ', user.friends_count)
    print('\nNo. of followers: ', user.followers_count)
    print('\nNo of Favourite Tweets: ', user.favourites_count)
    print("\nNo of posted tweets: ", user.statuses_count)
    print("\n Associated url: ", user.url)

#def getUserFollowers(api):
#    print('\n Followers: ')
#    for followers in api.followers(s):
#        print(follower.screen_name)

#def getUserFriends(api):
#    print("\n Friends")
#    for friend in api.friends():
#        print(friend.screen_name)

#def getUserTweets(api):
#    print('\n Tweets: ')
#    for tweet in api.user_timeline():
#        print(tweet_text)

def getUserFollowers(api):
    print('\n Followers: ')
    for followers in tweepy.Cursor(api.followers).items():
        print(follower.screen_name)

def getUserFriends(api):
    print("\n Friends")
    for friend in tweepy.Cursor(api.friends).items():
        print(friend.screen_name)

def getUserTweets(api):
    print('\n Tweets: ')
    for tweet in tweepy.Cursor(api.api_timeline).items():
        print(tweet_text)

def main():
    api = OAuthVerifier()
    print('Application Varified!  ')

    #to print api inforamtion
    #authenticated api
    user=api.me()
    getUserStatistics(user)

    #Different  api
    name= input('\n Enter the user identification: ')
    user = api.get_user(name)
    getUserStatistics(user)
    getUserFollowers(api)
    getUserFriends(api)
    getUserTweets(api)

if __name__=='__main__':
    main()