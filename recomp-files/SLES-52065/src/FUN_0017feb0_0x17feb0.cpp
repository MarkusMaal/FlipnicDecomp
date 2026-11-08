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

// Function: FUN_0017feb0
// Address: 0x17feb0 - 0x180034
void FUN_0017feb0_0x17feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017feb0_0x17feb0");
#endif

    switch (ctx->pc) {
        case 0x17fef0u: goto label_17fef0;
        case 0x17ff6cu: goto label_17ff6c;
        case 0x17ff98u: goto label_17ff98;
        case 0x17ffe4u: goto label_17ffe4;
        case 0x17fff4u: goto label_17fff4;
        case 0x180018u: goto label_180018;
        default: break;
    }

    ctx->pc = 0x17feb0u;

    // 0x17feb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17feb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17feb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17febc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fec4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17fec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fecc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17feccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fed4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17fed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fed8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17fedc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17fedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17fee0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x17FEE0u;
    {
        const bool branch_taken_0x17fee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEE0u;
        // 0x17fee4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fee0) {
            ctx->pc = 0x17FFECu;
            goto label_17ffec;
        }
    }
    ctx->pc = 0x17FEE8u;
    // 0x17fee8: 0xc05ff9c  jal         func_17FE70
    ctx->pc = 0x17FEE8u;
    SET_GPR_U32(ctx, 31, 0x17FEF0u);
    ctx->pc = 0x17FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEE8u;
    // 0x17feec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE70u, 0x17FEE8u, 0x17FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEF0u;
label_17fef0:
    // 0x17fef0: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x17fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17fef4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17fef8: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x17fefc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ff00: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x17ff00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17ff04: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17ff08: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17ff0c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x17ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x17ff10: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x17ff10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ff14: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x17ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17ff18: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x17ff18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17ff1c: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x17ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x17ff20: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17ff24: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x17ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x17ff28: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x17ff28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x17ff2c: 0x12230011  beq         $s1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17FF2Cu;
    {
        const bool branch_taken_0x17ff2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF2Cu;
        // 0x17ff30: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff2c) {
            ctx->pc = 0x17FF74u;
            goto label_17ff74;
        }
    }
    ctx->pc = 0x17FF34u;
    // 0x17ff34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ff38: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FF38u;
    {
        const bool branch_taken_0x17ff38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF38u;
        // 0x17ff3c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff38) {
            ctx->pc = 0x17FF50u;
            goto label_17ff50;
        }
    }
    ctx->pc = 0x17FF40u;
    // 0x17ff40: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FF40u;
    {
        const bool branch_taken_0x17ff40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ff40) {
            ctx->pc = 0x17FF50u;
            goto label_17ff50;
        }
    }
    ctx->pc = 0x17FF48u;
    // 0x17ff48: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x17FF48u;
    {
        const bool branch_taken_0x17ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF48u;
        // 0x17ff4c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff48) {
            ctx->pc = 0x18001Cu;
            goto label_18001c;
        }
    }
    ctx->pc = 0x17FF50u;
label_17ff50:
    // 0x17ff50: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ff54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ff58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ff58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff5c: 0x4be5213e  vitof12.xyzw $vf5, $vf4
    ctx->pc = 0x17ff5cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ff60: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x17ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17ff64: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17FF64u;
    SET_GPR_U32(ctx, 31, 0x17FF6Cu);
    ctx->pc = 0x17FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF64u;
    // 0x17ff68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17FF64u, 0x17FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF6Cu;
label_17ff6c:
    // 0x17ff6c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17FF6Cu;
    {
        const bool branch_taken_0x17ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff6c) {
            ctx->pc = 0x180018u;
            goto label_180018;
        }
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ff78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ff7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ff7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff80: 0x4be5213e  vitof12.xyzw $vf5, $vf4
    ctx->pc = 0x17ff80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ff84: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x17ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17ff88: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x17ff8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ff90: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x17FF90u;
    SET_GPR_U32(ctx, 31, 0x17FF98u);
    ctx->pc = 0x17FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF90u;
    // 0x17ff94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x17FF90u, 0x17FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF98u;
label_17ff98:
    // 0x17ff98: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x17ff98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x17ff9c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ffa0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x17ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ffa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffa8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ffac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ffb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17ffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17ffb4: 0x0  nop
    ctx->pc = 0x17ffb4u;
    // NOP
    // 0x17ffb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17ffb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17ffbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17ffbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17ffc0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x17ffc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17ffc4: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x17ffc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x17ffc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ffcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ffccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ffd0: 0x0  nop
    ctx->pc = 0x17ffd0u;
    // NOP
    // 0x17ffd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17ffd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ffd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17ffd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17ffdc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17FFDCu;
    SET_GPR_U32(ctx, 31, 0x17FFE4u);
    ctx->pc = 0x17FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFDCu;
    // 0x17ffe0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17FFDCu, 0x17FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFE4u;
label_17ffe4:
    // 0x17ffe4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17FFE4u;
    {
        const bool branch_taken_0x17ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ffe4) {
            ctx->pc = 0x180018u;
            goto label_180018;
        }
    }
    ctx->pc = 0x17FFECu;
label_17ffec:
    // 0x17ffec: 0xc05ff9c  jal         func_17FE70
    ctx->pc = 0x17FFECu;
    SET_GPR_U32(ctx, 31, 0x17FFF4u);
    ctx->pc = 0x17FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFECu;
    // 0x17fff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE70u, 0x17FFECu, 0x17FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFF4u;
label_17fff4:
    // 0x17fff4: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17fff8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17fffc: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x180000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x180000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180004: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x180004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x180008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18000c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x180010: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x180010u;
    SET_GPR_U32(ctx, 31, 0x180018u);
    ctx->pc = 0x180014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180010u;
    // 0x180014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x180010u, 0x180018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180018u;
label_180018:
    // 0x180018: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x180018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18001c:
    // 0x18001c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18001cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18002c: 0x3e00008  jr          $ra
    ctx->pc = 0x18002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18002Cu;
        // 0x180030: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18002Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180034u;
}
