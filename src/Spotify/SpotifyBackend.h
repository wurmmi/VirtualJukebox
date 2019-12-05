/*****************************************************************************/
/**
 * @file    SpotifyBackend.h
 * @author  Stefan Jahn <stefan.jahn332@gmail.com>
 * @brief   Class handles Music Playback with a Spotify Backend
 */
/*****************************************************************************/

#ifndef _SPOTIFYBACKEND_H_
#define _SPOTIFYBACKEND_H_

#include "MusicBackend.h"
#include "Types/GlobalTypes.h"
#include "Types/Queue.h"
#include "Types/Result.h"

class SpotifyBackend : public MusicBackend {
 public:
  virtual TResultOpt initBackend(void) override;
  virtual TResult<std::vector<BaseTrack>> queryTracks(
      std::string const &pattern, size_t const num) override;
  virtual TResultOpt setPlayback(BaseTrack const &track) override;
  virtual TResult<PlaybackTrack> getCurrentPlayback(void) override;
  virtual TResultOpt pause(void) override;
  virtual TResultOpt play() override;
  virtual TResult<size_t> getVolume(void) override;
  virtual TResultOpt setVolume(size_t const percent) override;
};

#endif /* _SPOTIFYBACKEND_H_ */