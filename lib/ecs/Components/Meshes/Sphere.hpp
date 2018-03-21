#pragma once

#include "Mesh.hpp"

#include <glm/glm.hpp>
#include <array>

namespace Components::Meshes {
	class Sphere : public Mesh {
	public:
		void cleanup() {
			/* Destroy index buffer */
			glDeleteBuffers(1, &indexBuffer);

			/* Destroy vertex buffer */
			glDeleteBuffers(1, &vertexBuffer);

			/* Destroy normal buffer */
			glDeleteBuffers(1, &normalBuffer);

			/* Destroy uv buffer */
			glDeleteBuffers(1, &texCoordBuffer);
		}

		Sphere() {
			createVertexBuffer();
			createTexCoordBuffer();
			createIndexBuffer();
			createNormalBuffer();
		}
		
		GLuint getVertexBuffer() {
			return vertexBuffer;
		}

		GLuint getIndexBuffer() {
			return indexBuffer;
		}

		GLuint getNormalBuffer() {
			return normalBuffer;
		}

		GLuint getTexCoordBuffer() {
			return texCoordBuffer;
		}

		uint32_t getTotalIndices() {
			return 960;
		}

		glm::vec3 getCentroid() {
			return glm::vec3(0);
		}

	private:
		std::array<float, 684> verts = {
			0.f,
			0.f,
			-1.f,
			0.723607004f,
			-0.525725007f,
			-0.447219998f,
			0.723607004f,
			-0.525725007f,
			-0.447219998f,
			-0.27638799f,
			-0.850648999f,
			-0.447219998f,
			-0.894425988f,
			0.f,
			-0.447216004f,
			-0.27638799f,
			0.850648999f,
			-0.447219998f,
			0.723607004f,
			0.525725007f,
			-0.447219998f,
			0.723607004f,
			0.525725007f,
			-0.447219998f,
			0.27638799f,
			-0.850648999f,
			0.447219998f,
			-0.723607004f,
			-0.525725007f,
			0.447219998f,
			-0.723607004f,
			-0.525725007f,
			0.447219998f,
			-0.723607004f,
			0.525725007f,
			0.447219998f,
			-0.723607004f,
			0.525725007f,
			0.447219998f,
			0.27638799f,
			0.850648999f,
			0.447219998f,
			0.894425988f,
			0.f,
			0.447216004f,
			0.f,
			0.f,
			1.f,
			-0.232822001f,
			-0.716562986f,
			-0.657518983f,
			-0.232822001f,
			-0.716562986f,
			-0.657518983f,
			-0.162456006f,
			-0.499994993f,
			-0.850654006f,
			-0.077606998f,
			-0.238852993f,
			-0.967949986f,
			0.203180999f,
			-0.147617996f,
			-0.967949986f,
			0.425323009f,
			-0.309011012f,
			-0.850654006f,
			0.609547019f,
			-0.442856014f,
			-0.657518983f,
			0.609547019f,
			-0.442856014f,
			-0.657518983f,
			0.531940997f,
			-0.681711972f,
			-0.502301991f,
			0.531940997f,
			-0.681711972f,
			-0.502301991f,
			0.531940997f,
			-0.681711972f,
			-0.502301991f,
			0.262869f,
			-0.809011996f,
			-0.525738001f,
			-0.029639f,
			-0.864184022f,
			-0.502301991f,
			0.812729001f,
			0.295237988f,
			-0.502300978f,
			0.850647986f,
			0.f,
			-0.525735974f,
			0.812729001f,
			-0.295237988f,
			-0.502300978f,
			0.203180999f,
			0.147617996f,
			-0.967949986f,
			0.425323009f,
			0.309011012f,
			-0.850654006f,
			0.609547019f,
			0.442856014f,
			-0.657518983f,
			0.609547019f,
			0.442856014f,
			-0.657518983f,
			-0.753441989f,
			0.f,
			-0.657514989f,
			-0.753441989f,
			0.f,
			-0.657514989f,
			-0.525730014f,
			0.f,
			-0.850651979f,
			-0.251147002f,
			0.f,
			-0.967948973f,
			-0.483971f,
			-0.716565013f,
			-0.502301991f,
			-0.483971f,
			-0.716565013f,
			-0.502301991f,
			-0.68818903f,
			-0.49999699f,
			-0.525735974f,
			-0.68818903f,
			-0.49999699f,
			-0.525735974f,
			-0.68818903f,
			-0.49999699f,
			-0.525735974f,
			-0.831050992f,
			-0.238852993f,
			-0.502299011f,
			-0.232822001f,
			0.716562986f,
			-0.657518983f,
			-0.232822001f,
			0.716562986f,
			-0.657518983f,
			-0.162456006f,
			0.499994993f,
			-0.850654006f,
			-0.077606998f,
			0.238852993f,
			-0.967949986f,
			-0.831050992f,
			0.238852993f,
			-0.502299011f,
			-0.68818903f,
			0.49999699f,
			-0.525735974f,
			-0.68818903f,
			0.49999699f,
			-0.525735974f,
			-0.68818903f,
			0.49999699f,
			-0.525735974f,
			-0.483971f,
			0.716565013f,
			-0.502301991f,
			-0.483971f,
			0.716565013f,
			-0.502301991f,
			-0.029639f,
			0.864184022f,
			-0.502301991f,
			0.262869f,
			0.809011996f,
			-0.525738001f,
			0.531940997f,
			0.681711972f,
			-0.502301991f,
			0.531940997f,
			0.681711972f,
			-0.502301991f,
			0.531940997f,
			0.681711972f,
			-0.502301991f,
			0.956625998f,
			-0.147617996f,
			0.251148999f,
			0.951057971f,
			-0.309013009f,
			0.f,
			0.860697985f,
			-0.442858011f,
			-0.251150995f,
			0.860697985f,
			0.442858011f,
			-0.251150995f,
			0.951057971f,
			0.309013009f,
			0.f,
			0.956625998f,
			0.147617996f,
			0.251148999f,
			0.155214995f,
			-0.955421984f,
			0.251152009f,
			0.f,
			-1.f,
			0.f,
			-0.155214995f,
			-0.955421984f,
			-0.251152009f,
			0.687159002f,
			-0.681715012f,
			-0.251152009f,
			0.687159002f,
			-0.681715012f,
			-0.251152009f,
			0.587786019f,
			-0.809017003f,
			0.f,
			0.587786019f,
			-0.809017003f,
			0.f,
			0.436006993f,
			-0.864188015f,
			0.251152009f,
			-0.860697985f,
			-0.442858011f,
			0.251150995f,
			-0.951057971f,
			-0.309013009f,
			0.f,
			-0.956625998f,
			-0.147617996f,
			-0.251148999f,
			-0.436006993f,
			-0.864188015f,
			-0.251152009f,
			-0.587786019f,
			-0.809017003f,
			0.f,
			-0.587786019f,
			-0.809017003f,
			0.f,
			-0.687159002f,
			-0.681715012f,
			0.251152009f,
			-0.687159002f,
			-0.681715012f,
			0.251152009f,
			-0.687159002f,
			0.681715012f,
			0.251152009f,
			-0.687159002f,
			0.681715012f,
			0.251152009f,
			-0.587786019f,
			0.809017003f,
			0.f,
			-0.587786019f,
			0.809017003f,
			0.f,
			-0.436006993f,
			0.864188015f,
			-0.251152009f,
			-0.956625998f,
			0.147617996f,
			-0.251148999f,
			-0.951057971f,
			0.309013009f,
			0.f,
			-0.860697985f,
			0.442858011f,
			0.251150995f,
			0.436006993f,
			0.864188015f,
			0.251152009f,
			0.587786019f,
			0.809017003f,
			0.f,
			0.587786019f,
			0.809017003f,
			0.f,
			0.687159002f,
			0.681715012f,
			-0.251152009f,
			0.687159002f,
			0.681715012f,
			-0.251152009f,
			-0.155214995f,
			0.955421984f,
			-0.251152009f,
			0.f,
			1.f,
			0.f,
			0.155214995f,
			0.955421984f,
			0.251152009f,
			0.831050992f,
			-0.238852993f,
			0.502299011f,
			0.68818903f,
			-0.49999699f,
			0.525735974f,
			0.68818903f,
			-0.49999699f,
			0.525735974f,
			0.68818903f,
			-0.49999699f,
			0.525735974f,
			0.483971f,
			-0.716565013f,
			0.502301991f,
			0.483971f,
			-0.716565013f,
			0.502301991f,
			0.029639f,
			-0.864184022f,
			0.502301991f,
			-0.262869f,
			-0.809011996f,
			0.525738001f,
			-0.531940997f,
			-0.681711972f,
			0.502301991f,
			-0.531940997f,
			-0.681711972f,
			0.502301991f,
			-0.531940997f,
			-0.681711972f,
			0.502301991f,
			-0.812729001f,
			-0.295237988f,
			0.502300978f,
			-0.850647986f,
			0.f,
			0.525735974f,
			-0.812729001f,
			0.295237988f,
			0.502300978f,
			-0.531940997f,
			0.681711972f,
			0.502301991f,
			-0.531940997f,
			0.681711972f,
			0.502301991f,
			-0.531940997f,
			0.681711972f,
			0.502301991f,
			-0.262869f,
			0.809011996f,
			0.525738001f,
			0.029639f,
			0.864184022f,
			0.502301991f,
			0.483971f,
			0.716565013f,
			0.502301991f,
			0.483971f,
			0.716565013f,
			0.502301991f,
			0.68818903f,
			0.49999699f,
			0.525735974f,
			0.68818903f,
			0.49999699f,
			0.525735974f,
			0.68818903f,
			0.49999699f,
			0.525735974f,
			0.831050992f,
			0.238852993f,
			0.502299011f,
			0.077606998f,
			-0.238852993f,
			0.967949986f,
			0.162456006f,
			-0.499994993f,
			0.850654006f,
			0.232822001f,
			-0.716562986f,
			0.657518983f,
			0.232822001f,
			-0.716562986f,
			0.657518983f,
			0.753441989f,
			0.f,
			0.657514989f,
			0.753441989f,
			0.f,
			0.657514989f,
			0.525730014f,
			0.f,
			0.850651979f,
			0.251147002f,
			0.f,
			0.967948973f,
			-0.203180999f,
			-0.147617996f,
			0.967949986f,
			-0.425323009f,
			-0.309011012f,
			0.850654006f,
			-0.609547019f,
			-0.442856014f,
			0.657518983f,
			-0.609547019f,
			-0.442856014f,
			0.657518983f,
			-0.203180999f,
			0.147617996f,
			0.967949986f,
			-0.425323009f,
			0.309011012f,
			0.850654006f,
			-0.609547019f,
			0.442856014f,
			0.657518983f,
			-0.609547019f,
			0.442856014f,
			0.657518983f,
			0.077606998f,
			0.238852993f,
			0.967949986f,
			0.162456006f,
			0.499994993f,
			0.850654006f,
			0.232822001f,
			0.716562986f,
			0.657518983f,
			0.232822001f,
			0.716562986f,
			0.657518983f,
			0.361799985f,
			0.26286301f,
			0.894429028f,
			0.638194025f,
			0.262863994f,
			0.723609984f,
			0.638194025f,
			0.262863994f,
			0.723609984f,
			0.447209001f,
			0.525727987f,
			0.72361201f,
			0.447209001f,
			0.525727987f,
			0.72361201f,
			-0.138197005f,
			0.425318986f,
			0.894429982f,
			-0.052790001f,
			0.688184977f,
			0.72361201f,
			-0.052790001f,
			0.688184977f,
			0.72361201f,
			-0.361804008f,
			0.587777972f,
			0.72361201f,
			-0.361804008f,
			0.587777972f,
			0.72361201f,
			-0.447210014f,
			0.f,
			0.894429028f,
			-0.670817018f,
			0.162457004f,
			0.723610997f,
			-0.670817018f,
			0.162457004f,
			0.723610997f,
			-0.670817018f,
			-0.162457004f,
			0.723610997f,
			-0.670817018f,
			-0.162457004f,
			0.723610997f,
			-0.138197005f,
			-0.425318986f,
			0.894429982f,
			-0.361804008f,
			-0.587777972f,
			0.72361201f,
			-0.361804008f,
			-0.587777972f,
			0.72361201f,
			-0.052790001f,
			-0.688184977f,
			0.72361201f,
			-0.052790001f,
			-0.688184977f,
			0.72361201f,
			0.361799985f,
			-0.26286301f,
			0.894429028f,
			0.447209001f,
			-0.525727987f,
			0.72361201f,
			0.447209001f,
			-0.525727987f,
			0.72361201f,
			0.638194025f,
			-0.262863994f,
			0.723609984f,
			0.638194025f,
			-0.262863994f,
			0.723609984f,
			0.861804008f,
			0.425321996f,
			0.276396006f,
			0.809019029f,
			0.587782025f,
			0.f,
			0.670821011f,
			0.68818903f,
			0.27639699f,
			0.670821011f,
			0.68818903f,
			0.27639699f,
			-0.138199002f,
			0.95105499f,
			0.27639699f,
			-0.309015989f,
			0.951057017f,
			0.f,
			-0.447214991f,
			0.850648999f,
			0.27639699f,
			-0.947212994f,
			0.162458003f,
			0.276396006f,
			-1.f,
			0.f,
			.000001f,
			-0.947212994f,
			-0.162458003f,
			0.27639699f,
			-0.447216004f,
			-0.850647986f,
			0.27639699f,
			-0.309017003f,
			-0.951056004f,
			-.000001f,
			-0.138199002f,
			-0.95105499f,
			0.27639699f,
			0.670819998f,
			-0.688189983f,
			0.276396006f,
			0.670819998f,
			-0.688189983f,
			0.276396006f,
			0.809019029f,
			-0.587782979f,
			-.000002f,
			0.861804008f,
			-0.425323009f,
			0.27639401f,
			0.309017003f,
			0.951056004f,
			0.f,
			0.447216004f,
			0.850647986f,
			-0.276398003f,
			0.138199002f,
			0.95105499f,
			-0.276398003f,
			-0.809018016f,
			0.587782979f,
			0.f,
			-0.670818985f,
			0.688190997f,
			-0.27639699f,
			-0.670818985f,
			0.688190997f,
			-0.27639699f,
			-0.861802995f,
			0.425323993f,
			-0.276396006f,
			-0.809018016f,
			-0.587782979f,
			0.f,
			-0.861802995f,
			-0.425323993f,
			-0.276396006f,
			-0.670818985f,
			-0.688190997f,
			-0.27639699f,
			-0.670818985f,
			-0.688190997f,
			-0.27639699f,
			0.309017003f,
			-0.951056004f,
			0.f,
			0.138199002f,
			-0.95105499f,
			-0.276398003f,
			0.447216004f,
			-0.850647986f,
			-0.276398003f,
			1.f,
			0.f,
			0.f,
			0.947212994f,
			-0.162458003f,
			-0.276396006f,
			0.947212994f,
			0.162458003f,
			-0.276396006f,
			0.361802995f,
			0.587778986f,
			-0.72361201f,
			0.361802995f,
			0.587778986f,
			-0.72361201f,
			0.138197005f,
			0.425321013f,
			-0.894429028f,
			0.052788999f,
			0.68818599f,
			-0.723610997f,
			0.052788999f,
			0.68818599f,
			-0.723610997f,
			-0.447210997f,
			0.525726974f,
			-0.72361201f,
			-0.447210997f,
			0.525726974f,
			-0.72361201f,
			-0.361800998f,
			0.26286301f,
			-0.894429028f,
			-0.638194978f,
			0.26286301f,
			-0.723608971f,
			-0.638194978f,
			0.26286301f,
			-0.723608971f,
			-0.638194978f,
			-0.262863994f,
			-0.723608971f,
			-0.638194978f,
			-0.262863994f,
			-0.723608971f,
			-0.361800998f,
			-0.262863994f,
			-0.894428015f,
			-0.447210997f,
			-0.525729001f,
			-0.723609984f,
			-0.447210997f,
			-0.525729001f,
			-0.723609984f,
			0.670817018f,
			0.162457004f,
			-0.723610997f,
			0.670817018f,
			0.162457004f,
			-0.723610997f,
			0.670817971f,
			-0.162458003f,
			-0.723609984f,
			0.670817971f,
			-0.162458003f,
			-0.723609984f,
			0.447210997f,
			-.000001f,
			-0.894428015f,
			0.052790001f,
			-0.688184977f,
			-0.72361201f,
			0.052790001f,
			-0.688184977f,
			-0.72361201f,
			0.138199002f,
			-0.425321013f,
			-0.894429028f,
			0.361804992f,
			-0.587778986f,
			-0.723610997f,
			0.361804992f,
			-0.587778986f,
			-0.723610997f
		};
		std::array<float, 684> normals = {
			0.f,
			0.f,
			-1.f,
			0.72359997f,
			-0.525699973f,
			-0.4472f,
			0.72359997f,
			-0.525699973f,
			-0.4472f,
			-0.2764f,
			-0.850600004f,
			-0.4472f,
			-0.894400001f,
			0.f,
			-0.4472f,
			-0.2764f,
			0.850600004f,
			-0.4472f,
			0.72359997f,
			0.525699973f,
			-0.4472f,
			0.72359997f,
			0.525699973f,
			-0.4472f,
			0.2764f,
			-0.850600004f,
			0.4472f,
			-0.72359997f,
			-0.525699973f,
			0.4472f,
			-0.72359997f,
			-0.525699973f,
			0.4472f,
			-0.72359997f,
			0.525699973f,
			0.4472f,
			-0.72359997f,
			0.525699973f,
			0.4472f,
			0.2764f,
			0.850600004f,
			0.4472f,
			0.894400001f,
			0.f,
			0.4472f,
			0.f,
			0.f,
			1.f,
			-0.230800003f,
			-0.710300028f,
			-0.665000021f,
			-0.230800003f,
			-0.710300028f,
			-0.665000021f,
			-0.162499994f,
			-0.5f,
			-0.850600004f,
			-0.080600001f,
			-0.247999996f,
			-0.965399981f,
			0.210899994f,
			-0.153300002f,
			-0.965399981f,
			0.425300002f,
			-0.308999985f,
			-0.850600004f,
			0.604200006f,
			-0.43900001f,
			-0.665000021f,
			0.604200006f,
			-0.43900001f,
			-0.665000021f,
			0.523599982f,
			-0.686999977f,
			-0.503799975f,
			0.523599982f,
			-0.686999977f,
			-0.503799975f,
			0.523599982f,
			-0.686999977f,
			-0.503799975f,
			0.262899995f,
			-0.809000015f,
			-0.525699973f,
			-0.0198f,
			-0.863600016f,
			-0.503799975f,
			0.815199971f,
			0.285699993f,
			-0.503799975f,
			0.850600004f,
			0.f,
			-0.525699973f,
			0.815199971f,
			-0.285699993f,
			-0.503799975f,
			0.210899994f,
			0.153300002f,
			-0.965399981f,
			0.425300002f,
			0.308999985f,
			-0.850600004f,
			0.604200006f,
			0.43900001f,
			-0.665000021f,
			0.604200006f,
			0.43900001f,
			-0.665000021f,
			-0.746800005f,
			0.f,
			-0.665000021f,
			-0.746800005f,
			0.f,
			-0.665000021f,
			-0.525699973f,
			0.f,
			-0.850600004f,
			-0.260800004f,
			0.f,
			-0.965399981f,
			-0.49149999f,
			-0.710300028f,
			-0.503799975f,
			-0.49149999f,
			-0.710300028f,
			-0.503799975f,
			-0.688199997f,
			-0.5f,
			-0.525699973f,
			-0.688199997f,
			-0.5f,
			-0.525699973f,
			-0.688199997f,
			-0.5f,
			-0.525699973f,
			-0.827400029f,
			-0.247999996f,
			-0.503799975f,
			-0.230800003f,
			0.710300028f,
			-0.665000021f,
			-0.230800003f,
			0.710300028f,
			-0.665000021f,
			-0.162499994f,
			0.5f,
			-0.850600004f,
			-0.080600001f,
			0.247999996f,
			-0.965399981f,
			-0.827400029f,
			0.247999996f,
			-0.503799975f,
			-0.688199997f,
			0.5f,
			-0.525699973f,
			-0.688199997f,
			0.5f,
			-0.525699973f,
			-0.688199997f,
			0.5f,
			-0.525699973f,
			-0.49149999f,
			0.710300028f,
			-0.503799975f,
			-0.49149999f,
			0.710300028f,
			-0.503799975f,
			-0.0198f,
			0.863600016f,
			-0.503799975f,
			0.262899995f,
			0.809000015f,
			-0.525699973f,
			0.523599982f,
			0.686999977f,
			-0.503799975f,
			0.523599982f,
			0.686999977f,
			-0.503799975f,
			0.523599982f,
			0.686999977f,
			-0.503799975f,
			0.957799971f,
			-0.153300002f,
			0.243000001f,
			0.950999975f,
			-0.308999985f,
			0.f,
			0.86500001f,
			-0.43900001f,
			-0.243000001f,
			0.86500001f,
			0.43900001f,
			-0.243000001f,
			0.950999975f,
			0.308999985f,
			0.f,
			0.957799971f,
			0.153300002f,
			0.243000001f,
			0.150199994f,
			-0.958299994f,
			0.243000001f,
			0.f,
			-1.f,
			0.f,
			-0.150199994f,
			-0.958299994f,
			-0.243000001f,
			0.684800029f,
			-0.686999977f,
			-0.243000001f,
			0.684800029f,
			-0.686999977f,
			-0.243000001f,
			0.587800026f,
			-0.809000015f,
			0.f,
			0.587800026f,
			-0.809000015f,
			0.f,
			0.441700011f,
			-0.863600016f,
			0.243000001f,
			-0.86500001f,
			-0.43900001f,
			0.243000001f,
			-0.950999975f,
			-0.308999985f,
			0.f,
			-0.957799971f,
			-0.153300002f,
			-0.243000001f,
			-0.441700011f,
			-0.863600016f,
			-0.243000001f,
			-0.587800026f,
			-0.809000015f,
			0.f,
			-0.587800026f,
			-0.809000015f,
			0.f,
			-0.684800029f,
			-0.686999977f,
			0.243000001f,
			-0.684800029f,
			-0.686999977f,
			0.243000001f,
			-0.684800029f,
			0.686999977f,
			0.243000001f,
			-0.684800029f,
			0.686999977f,
			0.243000001f,
			-0.587800026f,
			0.809000015f,
			0.f,
			-0.587800026f,
			0.809000015f,
			0.f,
			-0.441700011f,
			0.863600016f,
			-0.243000001f,
			-0.957799971f,
			0.153300002f,
			-0.243000001f,
			-0.950999975f,
			0.308999985f,
			0.f,
			-0.86500001f,
			0.43900001f,
			0.243000001f,
			0.441700011f,
			0.863600016f,
			0.243000001f,
			0.587800026f,
			0.809000015f,
			0.f,
			0.587800026f,
			0.809000015f,
			0.f,
			0.684800029f,
			0.686999977f,
			-0.243000001f,
			0.684800029f,
			0.686999977f,
			-0.243000001f,
			-0.150199994f,
			0.958299994f,
			-0.243000001f,
			0.f,
			1.f,
			0.f,
			0.150199994f,
			0.958299994f,
			0.243000001f,
			0.827400029f,
			-0.247999996f,
			0.503799975f,
			0.688199997f,
			-0.5f,
			0.525699973f,
			0.688199997f,
			-0.5f,
			0.525699973f,
			0.688199997f,
			-0.5f,
			0.525699973f,
			0.49149999f,
			-0.710300028f,
			0.503799975f,
			0.49149999f,
			-0.710300028f,
			0.503799975f,
			0.0198f,
			-0.863600016f,
			0.503799975f,
			-0.262899995f,
			-0.809000015f,
			0.525699973f,
			-0.523599982f,
			-0.686999977f,
			0.503799975f,
			-0.523599982f,
			-0.686999977f,
			0.503799975f,
			-0.523599982f,
			-0.686999977f,
			0.503799975f,
			-0.815199971f,
			-0.285699993f,
			0.503799975f,
			-0.850600004f,
			0.f,
			0.525699973f,
			-0.815199971f,
			0.285699993f,
			0.503799975f,
			-0.523599982f,
			0.686999977f,
			0.503799975f,
			-0.523599982f,
			0.686999977f,
			0.503799975f,
			-0.523599982f,
			0.686999977f,
			0.503799975f,
			-0.262899995f,
			0.809000015f,
			0.525699973f,
			0.0198f,
			0.863600016f,
			0.503799975f,
			0.49149999f,
			0.710300028f,
			0.503799975f,
			0.49149999f,
			0.710300028f,
			0.503799975f,
			0.688199997f,
			0.5f,
			0.525699973f,
			0.688199997f,
			0.5f,
			0.525699973f,
			0.688199997f,
			0.5f,
			0.525699973f,
			0.827400029f,
			0.247999996f,
			0.503799975f,
			0.080600001f,
			-0.247999996f,
			0.965399981f,
			0.162499994f,
			-0.5f,
			0.850600004f,
			0.230800003f,
			-0.710300028f,
			0.665000021f,
			0.230800003f,
			-0.710300028f,
			0.665000021f,
			0.746800005f,
			0.f,
			0.665000021f,
			0.746800005f,
			0.f,
			0.665000021f,
			0.525699973f,
			0.f,
			0.850600004f,
			0.260800004f,
			0.f,
			0.965399981f,
			-0.210899994f,
			-0.153300002f,
			0.965399981f,
			-0.425300002f,
			-0.308999985f,
			0.850600004f,
			-0.604200006f,
			-0.43900001f,
			0.665000021f,
			-0.604200006f,
			-0.43900001f,
			0.665000021f,
			-0.210899994f,
			0.153300002f,
			0.965399981f,
			-0.425300002f,
			0.308999985f,
			0.850600004f,
			-0.604200006f,
			0.43900001f,
			0.665000021f,
			-0.604200006f,
			0.43900001f,
			0.665000021f,
			0.080600001f,
			0.247999996f,
			0.965399981f,
			0.162499994f,
			0.5f,
			0.850600004f,
			0.230800003f,
			0.710300028f,
			0.665000021f,
			0.230800003f,
			0.710300028f,
			0.665000021f,
			0.368200004f,
			0.267500013f,
			0.890399992f,
			0.631699979f,
			0.267500013f,
			0.727500021f,
			0.631699979f,
			0.267500013f,
			0.727500021f,
			0.449600011f,
			0.518100023f,
			0.727500021f,
			0.449600011f,
			0.518100023f,
			0.727500021f,
			-0.140599996f,
			0.432799995f,
			0.890399992f,
			-0.0592f,
			0.683499992f,
			0.727500021f,
			-0.0592f,
			0.683499992f,
			0.727500021f,
			-0.353799999f,
			0.587700009f,
			0.727500021f,
			-0.353799999f,
			0.587700009f,
			0.727500021f,
			-0.4551f,
			0.f,
			0.890399992f,
			-0.668299973f,
			0.154899999f,
			0.727500021f,
			-0.668299973f,
			0.154899999f,
			0.727500021f,
			-0.668299973f,
			-0.154899999f,
			0.727500021f,
			-0.668299973f,
			-0.154899999f,
			0.727500021f,
			-0.140599996f,
			-0.432799995f,
			0.890399992f,
			-0.353799999f,
			-0.587700009f,
			0.727500021f,
			-0.353799999f,
			-0.587700009f,
			0.727500021f,
			-0.0592f,
			-0.683499992f,
			0.727500021f,
			-0.0592f,
			-0.683499992f,
			0.727500021f,
			0.368200004f,
			-0.267500013f,
			0.890399992f,
			0.449600011f,
			-0.518100023f,
			0.727500021f,
			0.449600011f,
			-0.518100023f,
			0.727500021f,
			0.631699979f,
			-0.267500013f,
			0.727500021f,
			0.631699979f,
			-0.267500013f,
			0.727500021f,
			0.859300017f,
			0.432799995f,
			0.272399992f,
			0.809000015f,
			0.587800026f,
			0.0089f,
			0.677200019f,
			0.683499992f,
			0.272399992f,
			0.677200019f,
			0.683499992f,
			0.272399992f,
			-0.1461f,
			0.950999975f,
			0.272399992f,
			-0.308999985f,
			0.950999975f,
			0.0089f,
			-0.440699995f,
			0.855300009f,
			0.272399992f,
			-0.949599981f,
			0.154899999f,
			0.272399992f,
			-0.999899983f,
			0.f,
			0.0089f,
			-0.949599981f,
			-0.154899999f,
			0.272399992f,
			-0.440699995f,
			-0.855300009f,
			0.272399992f,
			-0.308999985f,
			-0.950999975f,
			0.0089f,
			-0.1461f,
			-0.950999975f,
			0.272399992f,
			0.677200019f,
			-0.683499992f,
			0.272399992f,
			0.677200019f,
			-0.683499992f,
			0.272399992f,
			0.809000015f,
			-0.587800026f,
			0.0089f,
			0.859300017f,
			-0.432799995f,
			0.272399992f,
			0.308999985f,
			0.950999975f,
			-0.0089f,
			0.440699995f,
			0.855300009f,
			-0.272399992f,
			0.1461f,
			0.950999975f,
			-0.272399992f,
			-0.809000015f,
			0.587800026f,
			-0.0089f,
			-0.677200019f,
			0.683499992f,
			-0.272399992f,
			-0.677200019f,
			0.683499992f,
			-0.272399992f,
			-0.859300017f,
			0.432799995f,
			-0.272399992f,
			-0.809000015f,
			-0.587800026f,
			-0.0089f,
			-0.859300017f,
			-0.432799995f,
			-0.272399992f,
			-0.677200019f,
			-0.683499992f,
			-0.272399992f,
			-0.677200019f,
			-0.683499992f,
			-0.272399992f,
			0.308999985f,
			-0.950999975f,
			-0.0089f,
			0.1461f,
			-0.950999975f,
			-0.272399992f,
			0.440699995f,
			-0.855300009f,
			-0.272399992f,
			0.999899983f,
			0.f,
			-0.0089f,
			0.949599981f,
			-0.154899999f,
			-0.272399992f,
			0.949599981f,
			0.154899999f,
			-0.272399992f,
			0.353799999f,
			0.587800026f,
			-0.727500021f,
			0.353799999f,
			0.587800026f,
			-0.727500021f,
			0.140599996f,
			0.432799995f,
			-0.890399992f,
			0.0592f,
			0.683499992f,
			-0.727500021f,
			0.0592f,
			0.683499992f,
			-0.727500021f,
			-0.449600011f,
			0.518100023f,
			-0.727500021f,
			-0.449600011f,
			0.518100023f,
			-0.727500021f,
			-0.368200004f,
			0.267500013f,
			-0.890399992f,
			-0.631699979f,
			0.267500013f,
			-0.727500021f,
			-0.631699979f,
			0.267500013f,
			-0.727500021f,
			-0.631699979f,
			-0.267500013f,
			-0.727500021f,
			-0.631699979f,
			-0.267500013f,
			-0.727500021f,
			-0.368200004f,
			-0.267500013f,
			-0.890399992f,
			-0.449600011f,
			-0.518100023f,
			-0.727500021f,
			-0.449600011f,
			-0.518100023f,
			-0.727500021f,
			0.668299973f,
			0.154899999f,
			-0.727500021f,
			0.668299973f,
			0.154899999f,
			-0.727500021f,
			0.668299973f,
			-0.154899999f,
			-0.727500021f,
			0.668299973f,
			-0.154899999f,
			-0.727500021f,
			0.4551f,
			0.f,
			-0.890399992f,
			0.0592f,
			-0.683499992f,
			-0.727500021f,
			0.0592f,
			-0.683499992f,
			-0.727500021f,
			0.140599996f,
			-0.432799995f,
			-0.890399992f,
			0.353799999f,
			-0.587800026f,
			-0.727500021f,
			0.353799999f,
			-0.587800026f,
			-0.727500021f,
		};
		std::array<float, 456> uvs = {
		0.829162002f,
			0.540529013f,
			0.064124003f,
			0.308887005f,
			0.654506981f,
			0.435645014f,
			0.423393011f,
			0.444058001f,
			0.606082022f,
			0.187304005f,
			0.096037999f,
			0.444058001f,
			0.327152014f,
			0.435645014f,
			0.064124003f,
			0.065719999f,
			0.558673024f,
			0.646125972f,
			0.399228007f,
			0.065719999f,
			0.327558994f,
			0.654538989f,
			0.399228007f,
			0.308887005f,
			0.000204f,
			0.654538989f,
			0.231317997f,
			0.646125972f,
			0.270978987f,
			0.187304005f,
			0.844658017f,
			0.165922001f,
			0.775317013f,
			0.374810994f,
			0.431692988f,
			0.395087987f,
			0.791590989f,
			0.424896002f,
			0.81121403f,
			0.485289991f,
			0.876151025f,
			0.506389976f,
			0.927524984f,
			0.469063997f,
			0.015489f,
			0.289721996f,
			0.97013098f,
			0.438109994f,
			0.609746993f,
			0.424526989f,
			0.952183008f,
			0.382869989f,
			0.051385f,
			0.344962001f,
			0.547362983f,
			0.421375006f,
			0.479957014f,
			0.429251999f,
			0.051385999f,
			0.119024001f,
			0.045965999f,
			0.187304005f,
			0.051385999f,
			0.255582988f,
			0.876151025f,
			0.57466799f,
			0.927525997f,
			0.611993015f,
			0.015489f,
			0.084885001f,
			0.97013098f,
			0.642947972f,
			0.654914975f,
			0.540530026f,
			0.654717982f,
			0.187304005f,
			0.70757699f,
			0.540529013f,
			0.771080017f,
			0.540529013f,
			0.374953985f,
			0.433073997f,
			0.717234015f,
			0.374810994f,
			0.624242008f,
			0.071670003f,
			0.327558994f,
			0.429376006f,
			0.670005023f,
			0.424896002f,
			0.618821025f,
			0.132064f,
			0.775318027f,
			0.706247985f,
			0.104336999f,
			0.395087987f,
			0.791590989f,
			0.656162024f,
			0.81121403f,
			0.595767975f,
			0.618821025f,
			0.242542997f,
			0.000204f,
			0.429376006f,
			0.624242008f,
			0.302937001f,
			0.670005977f,
			0.656162977f,
			0.047598999f,
			0.433073997f,
			0.717235029f,
			0.706247985f,
			0.152602002f,
			0.429251999f,
			0.220008001f,
			0.421375006f,
			0.282391995f,
			0.424526989f,
			0.051385f,
			0.029645f,
			0.952183008f,
			0.698186994f,
			0.225635007f,
			0.221442997f,
			0.167551994f,
			0.258767992f,
			0.109468997f,
			0.289721996f,
			0.109468997f,
			0.084885001f,
			0.167551994f,
			0.115838997f,
			0.225635007f,
			0.153163999f,
			0.529018998f,
			0.601831019f,
			0.491032988f,
			0.545091987f,
			0.453047991f,
			0.488353014f,
			0.109467998f,
			0.344963014f,
			0.647732973f,
			0.481265992f,
			0.62687999f,
			0.540147007f,
			0.167551994f,
			0.374404013f,
			0.593913972f,
			0.599469006f,
			0.444572002f,
			0.084885001f,
			0.502655983f,
			0.115838997f,
			0.560738027f,
			0.153163999f,
			0.388152987f,
			0.490714997f,
			0.355186999f,
			0.550037026f,
			0.502655983f,
			0.000204f,
			0.334333003f,
			0.608918011f,
			0.444572002f,
			0.029643999f,
			0.006978f,
			0.608918011f,
			0.444572002f,
			0.344963014f,
			0.027832f,
			0.550037026f,
			0.502655029f,
			0.374404013f,
			0.060796998f,
			0.490714997f,
			0.560738027f,
			0.221442997f,
			0.502655983f,
			0.258767992f,
			0.444572002f,
			0.289723009f,
			0.266559005f,
			0.599469006f,
			0.167551994f,
			0.000204f,
			0.299524009f,
			0.540147007f,
			0.320378006f,
			0.481265992f,
			0.109467998f,
			0.029643999f,
			0.125691995f,
			0.488353014f,
			0.163678005f,
			0.545091987f,
			0.201663002f,
			0.601831019f,
			0.28371799f,
			0.242542997f,
			0.685500979f,
			0.28155601f,
			0.289137989f,
			0.302937001f,
			0.654506981f,
			0.660808027f,
			0.60711199f,
			0.657109976f,
			0.732730985f,
			0.331640989f,
			0.502108991f,
			0.660932004f,
			0.434702992f,
			0.66881001f,
			0.386489004f,
			0.029645f,
			0.967679024f,
			0.32358101f,
			0.372319996f,
			0.665656984f,
			0.386489004f,
			0.119024001f,
			0.381069005f,
			0.187304005f,
			0.386489004f,
			0.255582988f,
			0.044964001f,
			0.665656984f,
			0.967679024f,
			0.008264f,
			0.386489004f,
			0.344962001f,
			0.107348002f,
			0.66881001f,
			0.174753994f,
			0.660933018f,
			0.732730985f,
			0.000204f,
			0.279756993f,
			0.657109976f,
			0.289137989f,
			0.071670003f,
			0.685500979f,
			0.050289001f,
			0.327152014f,
			0.660808027f,
			0.28371799f,
			0.132064f,
			0.826709986f,
			0.221160993f,
			0.807087004f,
			0.281554997f,
			0.550373971f,
			0.695096016f,
			0.790813982f,
			0.331640989f,
			0.319613993f,
			0.187304005f,
			0.670410991f,
			0.165922001f,
			0.723073006f,
			0.165922001f,
			0.786575019f,
			0.165922001f,
			0.891646981f,
			0.200062007f,
			0.943020999f,
			0.237387002f,
			0.350591987f,
			0.084885001f,
			0.985626996f,
			0.268341005f,
			0.891646981f,
			0.131782994f,
			0.943020999f,
			0.094457999f,
			0.350591987f,
			0.289721996f,
			0.985626996f,
			0.063504003f,
			0.826709986f,
			0.110683002f,
			0.807087004f,
			0.050289001f,
			0.223018005f,
			0.695096016f,
			0.790813982f,
			0.000204f,
			0.760985017f,
			0.105130002f,
			0.697063982f,
			0.105130002f,
			0.334899992f,
			0.126510993f,
			0.741232991f,
			0.044337999f,
			0.273122013f,
			0.708567977f,
			0.876618028f,
			0.067558996f,
			0.856866002f,
			0.006767f,
			0.157564998f,
			0.712773979f,
			0.928331971f,
			0.029988f,
			0.086147003f,
			0.715373993f,
			0.948082983f,
			0.165922001f,
			0.999795973f,
			0.128351003f,
			0.335307002f,
			0.224875003f,
			0.999795973f,
			0.203492999f,
			0.335307002f,
			0.149731994f,
			0.876618981f,
			0.264284998f,
			0.928331971f,
			0.301856995f,
			0.413502991f,
			0.715373993f,
			0.856866002f,
			0.325078011f,
			0.484921008f,
			0.712773979f,
			0.760985017f,
			0.226714f,
			0.741231978f,
			0.287506998f,
			0.600477993f,
			0.708567023f,
			0.697063982f,
			0.226714f,
			0.334899992f,
			0.248096004f,
			0.231473997f,
			0.088940002f,
			0.167551994f,
			0.051368002f,
			0.231473997f,
			0.028147001f,
			0.321040004f,
			0.60332799f,
			0.134063005f,
			0.610135019f,
			0.092258997f,
			0.547692001f,
			0.062645003f,
			0.61273402f,
			0.438733995f,
			0.224875003f,
			0.502655029f,
			0.187303007f,
			0.438733995f,
			0.149731994f,
			0.389999986f,
			0.61273402f,
			0.419615f,
			0.547692001f,
			0.461418986f,
			0.610134006f,
			0.648395002f,
			0.60332799f,
			0.231473997f,
			0.346460015f,
			0.167550996f,
			0.323238999f,
			0.231472999f,
			0.285667002f,
			0.235095993f,
			0.542492986f,
			0.264710993f,
			0.477450013f,
			0.193292007f,
			0.480049998f,
			0.502655029f,
			0.323238999f,
			0.006316f,
			0.486856014f,
			0.566577017f,
			0.346460015f,
			0.566577017f,
			0.285667986f,
			0.502655983f,
			0.051368002f,
			0.566577017f,
			0.088940002f,
			0.566577017f,
			0.028147001f,
			0.333671004f,
			0.486856014f,
			0.562452018f,
			0.542491972f,
			0.520648003f,
			0.480049998f,
			0.59206599f,
			0.477450013f,
			0.167551994f,
			0.187304005f,
			0.103629999f,
			0.224875003f,
			0.103629999f,
			0.149731994f,
			0.912836015f,
			0.676464021f,
			0.241208002f,
			0.374810994f,
			0.861123025f,
			0.638891995f,
			0.841371f,
			0.699684978f,
			0.16979f,
			0.377411008f,
			0.725736022f,
			0.662113011f,
			0.054233f,
			0.38161701f,
			0.745489001f,
			0.601320982f,
			0.681568027f,
			0.601320982f,
			0.670002997f,
			0.248095006f,
			0.681568027f,
			0.479737014f,
			0.670002997f,
			0.126512006f,
			0.745489001f,
			0.479737014f,
			0.725736022f,
			0.418945014f,
			0.381588012f,
			0.38161701f,
			0.000204f,
			0.149731994f,
			0.984300971f,
			0.578100026f,
			0.000204f,
			0.224875003f,
			0.984300971f,
			0.502956986f,
			0.932587981f,
			0.540529013f,
			0.841369987f,
			0.381374002f,
			0.49714601f,
			0.377409995f,
			0.861123025f,
			0.442166001f,
			0.912836015f,
			0.404594004f,
			0.568563998f,
			0.374810994f	
		};
		std::array<unsigned short, 960> indices = {
			0,
			20,
			19,
			1,
			22,
			31,
			0,
			19,
			39,
			0,
			39,
			49,
			0,
			49,
			32,
			1,
			31,
			63,
			3,
			28,
			69,
			4,
			45,
			77,
			5,
			54,
			87,
			6,
			58,
			94,
			1,
			63,
			70,
			3,
			69,
			78,
			4,
			77,
			88,
			5,
			87,
			96,
			7,
			95,
			64,
			8,
			103,
			126,
			9,
			107,
			134,
			11,
			112,
			138,
			13,
			117,
			142,
			14,
			123,
			128,
			131,
			140,
			15,
			130,
			144,
			131,
			129,
			145,
			130,
			131,
			144,
			140,
			144,
			141,
			140,
			130,
			145,
			144,
			145,
			147,
			144,
			144,
			147,
			141,
			147,
			143,
			141,
			128,
			123,
			146,
			123,
			120,
			146,
			145,
			121,
			147,
			121,
			118,
			147,
			148,
			119,
			142,
			119,
			13,
			142,
			140,
			136,
			15,
			141,
			149,
			140,
			143,
			150,
			141,
			140,
			149,
			136,
			149,
			137,
			136,
			141,
			150,
			149,
			150,
			152,
			149,
			149,
			152,
			137,
			152,
			139,
			137,
			142,
			117,
			151,
			117,
			116,
			151,
			151,
			116,
			153,
			116,
			113,
			153,
			152,
			114,
			139,
			115,
			11,
			138,
			136,
			132,
			15,
			137,
			154,
			136,
			139,
			155,
			137,
			136,
			154,
			132,
			154,
			133,
			132,
			137,
			155,
			154,
			155,
			157,
			154,
			154,
			157,
			133,
			157,
			135,
			133,
			138,
			112,
			156,
			112,
			111,
			156,
			156,
			111,
			158,
			111,
			110,
			158,
			158,
			110,
			134,
			110,
			9,
			134,
			132,
			124,
			15,
			133,
			159,
			132,
			135,
			160,
			133,
			132,
			159,
			124,
			159,
			125,
			124,
			133,
			160,
			159,
			160,
			162,
			159,
			159,
			162,
			125,
			162,
			127,
			125,
			135,
			108,
			160,
			109,
			106,
			161,
			161,
			106,
			163,
			106,
			105,
			163,
			163,
			105,
			126,
			105,
			8,
			126,
			124,
			131,
			15,
			125,
			164,
			124,
			127,
			165,
			125,
			124,
			164,
			131,
			164,
			130,
			131,
			125,
			165,
			164,
			165,
			167,
			164,
			164,
			167,
			130,
			167,
			129,
			130,
			126,
			103,
			166,
			104,
			100,
			165,
			165,
			100,
			167,
			101,
			99,
			168,
			168,
			99,
			128,
			99,
			14,
			128,
			66,
			123,
			14,
			65,
			169,
			66,
			64,
			170,
			65,
			66,
			169,
			123,
			169,
			120,
			123,
			65,
			170,
			169,
			170,
			171,
			169,
			169,
			171,
			120,
			172,
			119,
			122,
			64,
			95,
			170,
			95,
			92,
			170,
			170,
			92,
			171,
			93,
			91,
			172,
			172,
			91,
			119,
			91,
			13,
			119,
			98,
			117,
			13,
			97,
			173,
			98,
			96,
			174,
			97,
			98,
			173,
			117,
			173,
			116,
			117,
			97,
			174,
			173,
			174,
			175,
			173,
			173,
			175,
			116,
			175,
			113,
			116,
			96,
			87,
			174,
			87,
			85,
			174,
			174,
			85,
			175,
			85,
			83,
			175,
			175,
			83,
			113,
			83,
			12,
			113,
			90,
			112,
			11,
			89,
			176,
			90,
			88,
			177,
			89,
			90,
			176,
			112,
			176,
			111,
			112,
			89,
			177,
			176,
			177,
			178,
			176,
			176,
			178,
			111,
			178,
			110,
			111,
			88,
			77,
			177,
			77,
			76,
			177,
			177,
			76,
			178,
			76,
			75,
			178,
			178,
			75,
			110,
			75,
			9,
			110,
			81,
			109,
			10,
			79,
			179,
			81,
			78,
			180,
			79,
			81,
			179,
			109,
			179,
			106,
			109,
			79,
			180,
			179,
			180,
			181,
			179,
			179,
			181,
			106,
			181,
			105,
			106,
			78,
			69,
			180,
			69,
			68,
			180,
			180,
			68,
			181,
			68,
			67,
			181,
			181,
			67,
			105,
			67,
			8,
			105,
			74,
			103,
			8,
			72,
			182,
			74,
			70,
			184,
			73,
			74,
			182,
			103,
			182,
			102,
			103,
			73,
			184,
			183,
			184,
			185,
			183,
			183,
			185,
			101,
			185,
			99,
			101,
			70,
			63,
			184,
			63,
			62,
			184,
			184,
			62,
			185,
			62,
			61,
			185,
			185,
			61,
			99,
			61,
			14,
			99,
			91,
			98,
			13,
			93,
			186,
			91,
			94,
			187,
			93,
			91,
			186,
			98,
			186,
			97,
			98,
			93,
			187,
			186,
			187,
			188,
			186,
			186,
			188,
			97,
			188,
			96,
			97,
			94,
			58,
			187,
			58,
			57,
			187,
			187,
			57,
			188,
			57,
			56,
			188,
			188,
			56,
			96,
			56,
			5,
			96,
			84,
			90,
			11,
			86,
			189,
			84,
			87,
			190,
			85,
			84,
			189,
			90,
			189,
			89,
			90,
			86,
			191,
			189,
			191,
			192,
			189,
			189,
			192,
			89,
			192,
			88,
			89,
			87,
			54,
			190,
			54,
			51,
			190,
			191,
			52,
			192,
			52,
			50,
			192,
			192,
			50,
			88,
			50,
			4,
			88,
			75,
			82,
			9,
			76,
			193,
			75,
			77,
			194,
			76,
			75,
			193,
			82,
			193,
			80,
			82,
			76,
			194,
			193,
			194,
			195,
			193,
			193,
			195,
			80,
			196,
			78,
			79,
			77,
			45,
			194,
			45,
			42,
			194,
			194,
			42,
			195,
			43,
			40,
			196,
			196,
			40,
			78,
			40,
			3,
			78,
			67,
			74,
			8,
			68,
			197,
			67,
			69,
			198,
			68,
			67,
			197,
			74,
			197,
			72,
			74,
			68,
			198,
			197,
			198,
			199,
			197,
			197,
			199,
			72,
			199,
			71,
			72,
			69,
			28,
			198,
			28,
			27,
			198,
			198,
			27,
			199,
			27,
			24,
			199,
			199,
			24,
			71,
			24,
			2,
			71,
			61,
			66,
			14,
			62,
			200,
			61,
			63,
			201,
			62,
			61,
			200,
			66,
			200,
			65,
			66,
			62,
			201,
			200,
			201,
			202,
			200,
			200,
			202,
			65,
			202,
			64,
			65,
			63,
			31,
			201,
			31,
			30,
			201,
			201,
			30,
			202,
			30,
			29,
			202,
			202,
			29,
			64,
			29,
			7,
			64,
			34,
			59,
			7,
			33,
			203,
			35,
			32,
			205,
			33,
			35,
			203,
			60,
			204,
			57,
			58,
			33,
			205,
			203,
			205,
			206,
			203,
			204,
			207,
			57,
			207,
			56,
			57,
			32,
			49,
			205,
			49,
			48,
			205,
			205,
			48,
			206,
			48,
			46,
			206,
			207,
			47,
			56,
			47,
			5,
			56,
			47,
			54,
			5,
			48,
			208,
			46,
			49,
			210,
			48,
			47,
			209,
			54,
			208,
			53,
			55,
			48,
			210,
			208,
			210,
			211,
			208,
			208,
			211,
			53,
			212,
			50,
			52,
			49,
			39,
			210,
			39,
			38,
			210,
			210,
			38,
			211,
			38,
			36,
			211,
			212,
			37,
			50,
			37,
			4,
			50,
			37,
			45,
			4,
			38,
			213,
			36,
			39,
			215,
			38,
			37,
			214,
			45,
			214,
			42,
			45,
			38,
			215,
			213,
			215,
			216,
			213,
			213,
			216,
			44,
			216,
			41,
			44,
			39,
			19,
			215,
			19,
			18,
			215,
			215,
			18,
			216,
			18,
			16,
			216,
			217,
			17,
			40,
			17,
			3,
			40,
			29,
			34,
			7,
			30,
			218,
			29,
			31,
			220,
			30,
			29,
			218,
			34,
			219,
			33,
			35,
			30,
			220,
			218,
			221,
			222,
			219,
			219,
			222,
			33,
			222,
			32,
			33,
			31,
			22,
			220,
			23,
			21,
			221,
			221,
			21,
			222,
			21,
			20,
			222,
			222,
			20,
			32,
			20,
			0,
			32,
			17,
			28,
			3,
			18,
			223,
			16,
			19,
			225,
			18,
			17,
			224,
			28,
			224,
			27,
			28,
			18,
			225,
			223,
			225,
			226,
			223,
			224,
			227,
			27,
			227,
			24,
			27,
			19,
			20,
			225,
			20,
			21,
			225,
			225,
			21,
			226,
			21,
			23,
			226,
			226,
			23,
			25,
			22,
			1,
			26
		};

		GLuint vertexBuffer;
		GLuint indexBuffer;
		GLuint normalBuffer;
		GLuint texCoordBuffer;

		void createVertexBuffer() {
			size_t bufferSize = verts.size() * sizeof(float);
			glGenBuffers(1, &vertexBuffer);
			glNamedBufferData(vertexBuffer, bufferSize, verts.data(), GL_STATIC_DRAW);
		}

		void createIndexBuffer() {
			size_t bufferSize = indices.size() * sizeof(unsigned short);
			glGenBuffers(1, &indexBuffer);
			glNamedBufferData(indexBuffer, bufferSize, indices.data(), GL_STATIC_DRAW);
		}

		void createNormalBuffer() {
			size_t bufferSize = normals.size() * sizeof(float);
			glGenBuffers(1, &normalBuffer);
			glNamedBufferData(normalBuffer, bufferSize, normals.data(), GL_STATIC_DRAW);
		}

		void createTexCoordBuffer() {
			size_t bufferSize = uvs.size() * sizeof(float);
			glGenBuffers(1, &texCoordBuffer);
			glNamedBufferData(texCoordBuffer, bufferSize, uvs.data(), GL_STATIC_DRAW);
		}
	};
}