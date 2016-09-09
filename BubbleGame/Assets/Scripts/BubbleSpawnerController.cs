using UnityEngine;
using System.Collections;

public class BubbleSpawnerController : MonoBehaviour {
	public Vector3 target;
	public float speed=13f;

	int direction = 1;

	private Rigidbody2D rb2d;

	Vector3 screenPos;

	//rate at which bubbles spawn
	public float spawnRate = 1;     

	//bubble 
	public GameObject bubble;    

	// Use this for initialization
	void Start () {
		InvokeRepeating("SpawnBubble", 1, spawnRate);  
		rb2d = GetComponent<Rigidbody2D> ();
		target = Random.insideUnitSphere * 5;
		transform.Rotate(target);
	}

	// Update is called once per frame
	void Update () {

	}

	void SpawnBubble(){
		//a clone of the bubble prefab
		GameObject bubbleClone;  

		//spawns enemyClone at this location and rotation   
		bubbleClone = Instantiate(bubble, this.transform.position, this.transform.rotation) as GameObject;   
		Vector3 position = new Vector3(Random.Range(-2.6f, 2.6f), Random.Range(-4.3f, 4.3f), 0);
		Instantiate(bubble, position, Quaternion.identity);

		//randomly moves spawned bubble
		rb2d.MovePosition((Vector3)rb2d.position + (transform.forward * speed * Time.deltaTime * direction));
	}
	void OnTriggerEnter2D (Collider2D other){
		if (other.gameObject.CompareTag ("Wall") || other.gameObject.CompareTag("Player")){
			direction *= -1;
		}
	}
}

