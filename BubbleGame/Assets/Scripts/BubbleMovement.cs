	using UnityEngine;
	using System.Collections;

public class BubbleMovement : MonoBehaviour {
	public Vector3 target;

	public float speed=13f;

	private Rigidbody2D rb2d;

	Vector3 screenPos;

	int direction = 1;

	void  Start (){
		rb2d = GetComponent<Rigidbody2D> ();
		target = Random.insideUnitSphere * 5;
		transform.Rotate(target);
	}
	void  Update (){
		transform.position += (transform.forward * speed * Time.deltaTime)*direction;
	}

	void OnTriggerEnter2D (Collider2D other){
		if (other.gameObject.CompareTag ("Wall")){
				direction *= -1;
		}
		if (other.gameObject.CompareTag ("PickUp")){
			direction *= -1;
		}
	}
}

