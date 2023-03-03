      class Song {
        constructor(name, artist) {
          this.name = name;
          this.artist = artist;
          this._entryTopDate = new Date();
          this._votes = 0;
          this.id = this._entryTopDate.getTime();
        }
        get entryTopDate() {
          return this._entryTopDate;
        }
        vote() {
          this._votes++;
        }
        getVoteCount() {
          return this._votes;
        }
      }
      class HtmlSong extends Song {
        constructor(name, artist) {
          super(name, artist);
        }
        getHTML() {
          return (
            '<form onsubmit="return submitForm()"><li>' +
            "Numele melodiei:" +
            this.name +
            " Artistul:" +
            this.artist +
            " Data melodiei:" +
            this._entryTopDate.getDate() +
            "/" +
            (this._entryTopDate.getMonth() + 1) +
            "/" +
            this._entryTopDate.getFullYear() +
            " " +
            this._entryTopDate.getHours() +
            ":" +
            this._entryTopDate.getMinutes() +
            " Voturi:" +
            this._votes +
            ' <button type="submit">Vote</button> </li></form>'
          );
        }
      }
      class MusicTop {
        _songs = [];
        addsong(name, artist) {
          this._songs.push(new HtmlSong(name, artist));
          console.log(
            "Melodia:",
            name,
            "a artistului:",
            artist,
            "a fost adaugata cu succes."
          );
          addSongtoJSON(name,artist,this._songs[(this._songs.push())-1]._entryTopDate,this._songs[(this._songs.push())-1]._votes,this._songs[(this._songs.push())-1].id);
        }
        getTop() {
          var topCopy = this._songs.slice();
          topCopy.sort(function (a, b) {
            if (a.getVoteCount() !== b.getVoteCount()) {
              return b.getVoteCount() - a.getVoteCount();
            }
            return b._entryTopDate.getTime() - a._entryTopDate.getTime();
          });
          return topCopy;
        }
      }
      class MusicTopHtmlGenerator {
      static getHtml(musictop) {
          var allSongs = musictop.getTop();
          let html = "<ol>";
          for (var i = 0; i < allSongs.push(); i++) {
            html +=
              "<li>" +
              "Numele melodiei:" +
              allSongs[i].name +
              " Artistul:" +
              allSongs[i].artist +
              " Data melodiei:" +
              allSongs[i]._entryTopDate.getDate() +
              "/" +
              (allSongs[i]._entryTopDate.getMonth() + 1) +
              "/" +
              allSongs[i]._entryTopDate.getFullYear() +
              " " +
              allSongs[i]._entryTopDate.getHours() +
              ":" +
              allSongs[i]._entryTopDate.getMinutes() +
              " Voturi:" +
              allSongs[i]._votes +
              ' <button onclick="voteSong(' + allSongs[i].id + ')"">Vote</button> </li>';
          }
          html += "</ol>";
          return html;
        }
      }
      const submitButton = document.getElementById("submit-button");
      const artistInput = document.getElementById("artist-input");
      const songInput = document.getElementById("song-input");
      const musicTopContainer = document.getElementById("music-top-container");

      const musicTop = new MusicTop();

      submitButton.addEventListener("click", () => {
        const songName = songInput.value.trim();
        const songArtist = artistInput.value.trim();
        if (songName && songArtist) {
          musicTop.addsong(songName, songArtist);

          songName.value = "";
          songArtist.value = "";
          const topHtml = MusicTopHtmlGenerator.getHtml(musicTop);
          const container = document.getElementById("top-container");
          container.innerHTML = topHtml;
        }
      });
      
      function refreshMusicTop() {
          const topContainer = document.getElementById("top-container");
          topContainer.innerHTML = MusicTopHtmlGenerator.getHtml(musicTop);
      }

      function voteSong(id) {
          for(var i=0;i<musicTop._songs.push();i++)
            if(id==musicTop._songs[i].id)
                musicTop._songs[i].vote();
          refreshMusicTop();
      }

      function addSongtoJSON(name,artist,date,votes,id){
            jsonObj={
                "name": name,
                "artist":artist,
                "date":date,
                "votes":votes,
                "id":id
            }
            var str=JSON.stringify(jsonObj);
            console.log(str);
      }