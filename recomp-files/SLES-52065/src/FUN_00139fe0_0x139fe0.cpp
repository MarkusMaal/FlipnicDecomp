#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00139fe0
// Address: 0x139fe0 - 0x13a114
void FUN_00139fe0_0x139fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139fe0_0x139fe0");
#endif

    switch (ctx->pc) {
        case 0x13a00cu: goto label_13a00c;
        case 0x13a020u: goto label_13a020;
        case 0x13a048u: goto label_13a048;
        case 0x13a084u: goto label_13a084;
        default: break;
    }

    ctx->pc = 0x139fe0u;

    // 0x139fe0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x139fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x139fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ff4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x139ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x139ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ffc: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x139ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x13a000: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x13a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13a004: 0xc061bd0  jal         func_186F40
    ctx->pc = 0x13A004u;
    SET_GPR_U32(ctx, 31, 0x13A00Cu);
    ctx->pc = 0x13A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A004u;
    // 0x13a008: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x13A004u, 0x13A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A00Cu;
label_13a00c:
    // 0x13a00c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13a010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a018: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x13A018u;
    SET_GPR_U32(ctx, 31, 0x13A020u);
    ctx->pc = 0x13A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A018u;
    // 0x13a01c: 0x34463880  ori         $a2, $v0, 0x3880 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x13A018u, 0x13A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A020u;
label_13a020:
    // 0x13a020: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a024: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a028: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13a02c: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x13a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13a030: 0x8cc7001c  lw          $a3, 0x1C($a2)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x13a034: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13a038: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13a03c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x13a03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x13a040: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13A040u;
    {
        const bool branch_taken_0x13a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A040u;
        // 0x13a044: 0xa63021  addu        $a2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a040) {
            ctx->pc = 0x13A0F4u;
            goto label_13a0f4;
        }
    }
    ctx->pc = 0x13A048u;
label_13a048:
    // 0x13a048: 0x8f878594  lw          $a3, -0x7A6C($gp)
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x13a04c: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x13a04cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x13a050: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a054: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x13a054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13a058: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x13a058u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13a05c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13a060: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13a064: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13a068: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13a06c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x13a06cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13a070: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x13a070u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13a074: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x13a074u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13a078: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x13a078u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13a07c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13A07Cu;
    {
        const bool branch_taken_0x13a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A07Cu;
        // 0x13a080: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a07c) {
            ctx->pc = 0x13A0DCu;
            goto label_13a0dc;
        }
    }
    ctx->pc = 0x13A084u;
label_13a084:
    // 0x13a084: 0x0  nop
    ctx->pc = 0x13a084u;
    // NOP
    // 0x13a088: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x13a08c: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x13a08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x13a090: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x13a090u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13a094: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x13a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a098: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x13a098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x13a09c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x13a09cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x13a0a0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x13a0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a0a4: 0x2086021  addu        $t4, $s0, $t0
    ctx->pc = 0x13a0a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x13a0a8: 0x8ce70038  lw          $a3, 0x38($a3)
    ctx->pc = 0x13a0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x13a0ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13a0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13a0b0: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x13a0b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13a0b4: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x13a0b4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a0b8: 0xd98b0000  lqc2        $vf11, 0x0($t4)
    ctx->pc = 0x13a0b8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13a0bc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13a0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a0c0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13a0c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a0c4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13a0c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a0c8: 0x4be03a4b  vmaddw.xyzw $vf9, $vf7, $vf0w
    ctx->pc = 0x13a0c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x13a0cc: 0x4bea49bc  vmulax.xyzw $ACC, $vf9, $vf10x
    ctx->pc = 0x13a0ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a0d0: 0x4be05a4b  vmaddw.xyzw $vf9, $vf11, $vf0w
    ctx->pc = 0x13a0d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x13a0d4: 0xf9890000  sqc2        $vf9, 0x0($t4)
    ctx->pc = 0x13a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x13a0d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13a0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_13a0dc:
    // 0x13a0dc: 0x0  nop
    ctx->pc = 0x13a0dcu;
    // NOP
    // 0x13a0e0: 0x12b382b  sltu        $a3, $t1, $t3
    ctx->pc = 0x13a0e0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x13a0e4: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13A0E4u;
    {
        const bool branch_taken_0x13a0e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a0e4) {
            ctx->pc = 0x13A084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a084;
        }
    }
    ctx->pc = 0x13A0ECu;
    // 0x13a0ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a0f0: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x13a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_13a0f4:
    // 0x13a0f4: 0x0  nop
    ctx->pc = 0x13a0f4u;
    // NOP
    // 0x13a0f8: 0x14a6ffd3  bne         $a1, $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13A0F8u;
    {
        const bool branch_taken_0x13a0f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x13a0f8) {
            ctx->pc = 0x13A048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a048;
        }
    }
    ctx->pc = 0x13A100u;
    // 0x13a100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A10Cu;
        // 0x13a110: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A114u;
}
