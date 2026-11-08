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

// Function: FUN_00179c10
// Address: 0x179c10 - 0x17a080
void FUN_00179c10_0x179c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179c10_0x179c10");
#endif

    switch (ctx->pc) {
        case 0x179c3cu: goto label_179c3c;
        case 0x179c78u: goto label_179c78;
        case 0x179dacu: goto label_179dac;
        case 0x179e00u: goto label_179e00;
        case 0x179e64u: goto label_179e64;
        case 0x179ed4u: goto label_179ed4;
        case 0x179f60u: goto label_179f60;
        case 0x179f90u: goto label_179f90;
        case 0x179fdcu: goto label_179fdc;
        case 0x17a000u: goto label_17a000;
        case 0x17a01cu: goto label_17a01c;
        default: break;
    }

    ctx->pc = 0x179c10u;

    // 0x179c10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x179c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x179c14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x179c18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x179c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x179c1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x179c20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x179c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x179c28: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x179c28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x179c2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x179c30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x179c34: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x179C34u;
    {
        const bool branch_taken_0x179c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C34u;
        // 0x179c38: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c34) {
            ctx->pc = 0x17A050u;
            goto label_17a050;
        }
    }
    ctx->pc = 0x179C3Cu;
label_179c3c:
    // 0x179c3c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x179c40: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x179c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179c44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x179c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x179c48: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x179c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179c4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x179c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179c50: 0xf8e00000  sqc2        $vf0, 0x0($a3)
    ctx->pc = 0x179c50u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179c54: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x179c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179c58: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x179c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x179c5c: 0xf9000000  sqc2        $vf0, 0x0($t0)
    ctx->pc = 0x179c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c68: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x179c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179c6c: 0xc6405ff4  lwc1        $f0, 0x5FF4($s2)
    ctx->pc = 0x179c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179c70: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x179C70u;
    {
        const bool branch_taken_0x179c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C70u;
        // 0x179c74: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c70) {
            ctx->pc = 0x179D6Cu;
            goto label_179d6c;
        }
    }
    ctx->pc = 0x179C78u;
label_179c78:
    // 0x179c78: 0x1206003b  beq         $s0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x179C78u;
    {
        const bool branch_taken_0x179c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x179C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C78u;
        // 0x179c7c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c78) {
            ctx->pc = 0x179D68u;
            goto label_179d68;
        }
    }
    ctx->pc = 0x179C80u;
    // 0x179c80: 0x1206000a  beq         $s0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x179C80u;
    {
        const bool branch_taken_0x179c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x179C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C80u;
        // 0x179c84: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c80) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x179C88u;
    // 0x179c88: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x179c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179c8c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x179C8Cu;
    {
        const bool branch_taken_0x179c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C8Cu;
        // 0x179c90: 0x28c10040  slti        $at, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c8c) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x179C94u;
    // 0x179c94: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x179C94u;
    {
        const bool branch_taken_0x179c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c94) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x179C9Cu;
    // 0x179c9c: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179C9Cu;
    {
        const bool branch_taken_0x179c9c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x179c9c) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x179CA4u;
    // 0x179ca4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x179CA4u;
    {
        const bool branch_taken_0x179ca4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x179ca4) {
            ctx->pc = 0x179CB8u;
            goto label_179cb8;
        }
    }
    ctx->pc = 0x179CACu;
label_179cac:
    // 0x179cac: 0x0  nop
    ctx->pc = 0x179cacu;
    // NOP
    // 0x179cb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x179CB0u;
    {
        const bool branch_taken_0x179cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB0u;
        // 0x179cb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb0) {
            ctx->pc = 0x179CF8u;
            goto label_179cf8;
        }
    }
    ctx->pc = 0x179CB8u;
label_179cb8:
    // 0x179cb8: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x179cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x179cbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x179CBCu;
    {
        const bool branch_taken_0x179cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179cbc) {
            ctx->pc = 0x179CCCu;
            goto label_179ccc;
        }
    }
    ctx->pc = 0x179CC4u;
    // 0x179cc4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x179cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cc8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x179cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179ccc:
    // 0x179ccc: 0x0  nop
    ctx->pc = 0x179cccu;
    // NOP
    // 0x179cd0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x179cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x179cd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x179cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x179cd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x179cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179cdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179ce0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x179ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x179ce4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179CE4u;
    {
        const bool branch_taken_0x179ce4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x179CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE4u;
        // 0x179ce8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ce4) {
            ctx->pc = 0x179CF4u;
            goto label_179cf4;
        }
    }
    ctx->pc = 0x179CECu;
    // 0x179cec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x179cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179cf0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x179cf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_179cf4:
    // 0x179cf4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x179cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_179cf8:
    // 0x179cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179cfc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x179cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x179d00: 0xc4414070  lwc1        $f1, 0x4070($v0)
    ctx->pc = 0x179d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179d04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x179d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179d08: 0x0  nop
    ctx->pc = 0x179d08u;
    // NOP
    // 0x179d0c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x179D0Cu;
    {
        const bool branch_taken_0x179d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179d0c) {
            ctx->pc = 0x179D50u;
            goto label_179d50;
        }
    }
    ctx->pc = 0x179D14u;
    // 0x179d14: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x179d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x179d18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x179d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x179d1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179d20: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179d24: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x179d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x179d28: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x179d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x179d2c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x179d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179d30: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x179d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179d34: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x179d34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179d38: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x179d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179d3c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x179d3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x179d40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179d44: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179d48: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x179d48u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179d4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_179d50:
    // 0x179d50: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x179d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179d54: 0x0  nop
    ctx->pc = 0x179d54u;
    // NOP
    // 0x179d58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x179D58u;
    {
        const bool branch_taken_0x179d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179d58) {
            ctx->pc = 0x179D68u;
            goto label_179d68;
        }
    }
    ctx->pc = 0x179D60u;
    // 0x179d60: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x179d60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x179d64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x179d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179d68:
    // 0x179d68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x179d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_179d6c:
    // 0x179d6c: 0x0  nop
    ctx->pc = 0x179d6cu;
    // NOP
    // 0x179d70: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x179d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179d74: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x179D74u;
    {
        const bool branch_taken_0x179d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179d74) {
            ctx->pc = 0x179C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179c78;
        }
    }
    ctx->pc = 0x179D7Cu;
    // 0x179d7c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x179d7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179d84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x179d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x179d8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179d94: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x179d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179d98: 0x46011583  div.s       $f22, $f2, $f1
    ctx->pc = 0x179d98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x179d9c: 0x0  nop
    ctx->pc = 0x179d9cu;
    // NOP
    // 0x179da0: 0x0  nop
    ctx->pc = 0x179da0u;
    // NOP
    // 0x179da4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179DA4u;
    SET_GPR_U32(ctx, 31, 0x179DACu);
    ctx->pc = 0x179DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DA4u;
    // 0x179da8: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179DA4u, 0x179DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DACu;
label_179dac:
    // 0x179dac: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x179dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179db0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179db4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x179db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179db8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179dbc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x179dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179dc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179dc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179dc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x179dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179dcc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x179dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179dd0: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x179dd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x179dd4: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x179dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x179dd8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x179dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x179ddc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x179ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x179de0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x179de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x179de4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x179de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x179de8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179dec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179df0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179df4: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179df4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179df8: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179DF8u;
    SET_GPR_U32(ctx, 31, 0x179E00u);
    ctx->pc = 0x179DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DF8u;
    // 0x179dfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179DF8u, 0x179E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E00u;
label_179e00:
    // 0x179e00: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x179e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x179e04: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x179e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x179e08: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x179e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x179e0c: 0xc6405ff0  lwc1        $f0, 0x5FF0($s2)
    ctx->pc = 0x179e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179e10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x179e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x179e14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x179e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179e18: 0x0  nop
    ctx->pc = 0x179e18u;
    // NOP
    // 0x179e1c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x179E1Cu;
    {
        const bool branch_taken_0x179e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e1c) {
            ctx->pc = 0x179ED4u;
            goto label_179ed4;
        }
    }
    ctx->pc = 0x179E24u;
    // 0x179e24: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x179e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179e28: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x179e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179e2c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179e30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179e34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179e38: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x179e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x179e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179e40: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x179e44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179e48: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x179e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179e4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x179e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179e50: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x179e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179e54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179e58: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179e5c: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x179E5Cu;
    SET_GPR_U32(ctx, 31, 0x179E64u);
    ctx->pc = 0x179E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E5Cu;
    // 0x179e60: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x179E5Cu, 0x179E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E64u;
label_179e64:
    // 0x179e64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x179e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179e68: 0x0  nop
    ctx->pc = 0x179e68u;
    // NOP
    // 0x179e6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x179e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179e70: 0x0  nop
    ctx->pc = 0x179e70u;
    // NOP
    // 0x179e74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x179E74u;
    {
        const bool branch_taken_0x179e74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E74u;
        // 0x179e78: 0x3c02be4c  lui         $v0, 0xBE4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e74) {
            ctx->pc = 0x179E8Cu;
            goto label_179e8c;
        }
    }
    ctx->pc = 0x179E7Cu;
    // 0x179e7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x179e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x179e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179E84u;
    {
        const bool branch_taken_0x179e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e84) {
            ctx->pc = 0x179E9Cu;
            goto label_179e9c;
        }
    }
    ctx->pc = 0x179E8Cu;
label_179e8c:
    // 0x179e8c: 0x0  nop
    ctx->pc = 0x179e8cu;
    // NOP
    // 0x179e90: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x179e94: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x179e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x179e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179e9c:
    // 0x179e9c: 0x0  nop
    ctx->pc = 0x179e9cu;
    // NOP
    // 0x179ea0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x179ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179ea4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x179ea4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x179ea8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eac: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x179eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179eb0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x179eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179eb4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x179eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179eb8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x179eb8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x179ebc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x179ebcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x179ec0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x179ec0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x179ec4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x179ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x179ec8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x179ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x179ecc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179ECCu;
    SET_GPR_U32(ctx, 31, 0x179ED4u);
    ctx->pc = 0x179ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ECCu;
    // 0x179ed0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179ECCu, 0x179ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179ED4u;
label_179ed4:
    // 0x179ed4: 0x0  nop
    ctx->pc = 0x179ed4u;
    // NOP
    // 0x179ed8: 0xc6406000  lwc1        $f0, 0x6000($s2)
    ctx->pc = 0x179ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179edc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x179edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179ee0: 0x0  nop
    ctx->pc = 0x179ee0u;
    // NOP
    // 0x179ee4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x179EE4u;
    {
        const bool branch_taken_0x179ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179ee4) {
            ctx->pc = 0x179EF0u;
            goto label_179ef0;
        }
    }
    ctx->pc = 0x179EECu;
    // 0x179eec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x179eecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_179ef0:
    // 0x179ef0: 0xc6405ffc  lwc1        $f0, 0x5FFC($s2)
    ctx->pc = 0x179ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179ef4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x179ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179ef8: 0x0  nop
    ctx->pc = 0x179ef8u;
    // NOP
    // 0x179efc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x179EFCu;
    {
        const bool branch_taken_0x179efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179efc) {
            ctx->pc = 0x179F08u;
            goto label_179f08;
        }
    }
    ctx->pc = 0x179F04u;
    // 0x179f04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x179f04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_179f08:
    // 0x179f08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179f0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179f10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179f14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179f18: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x179f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179f1c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x179f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179f20: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x179f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179f24: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x179f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179f28: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x179f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179f2c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x179f2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179f34: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x179f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x179f38: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x179f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x179f3c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x179f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x179f40: 0xc6405ff8  lwc1        $f0, 0x5FF8($s2)
    ctx->pc = 0x179f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179f44: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x179f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x179f48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x179f48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179f4c: 0x0  nop
    ctx->pc = 0x179f4cu;
    // NOP
    // 0x179f50: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x179F50u;
    {
        const bool branch_taken_0x179f50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F50u;
        // 0x179f54: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f50) {
            ctx->pc = 0x179F90u;
            goto label_179f90;
        }
    }
    ctx->pc = 0x179F58u;
    // 0x179f58: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x179F58u;
    SET_GPR_U32(ctx, 31, 0x179F60u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x179F58u, 0x179F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F60u;
label_179f60:
    // 0x179f60: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x179f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179f64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x179f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x179f68: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x179f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f70: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x179f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179f74: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x179f74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x179f78: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x179f78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x179f7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x179f7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x179f80: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x179f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x179f84: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x179f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x179f88: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179F88u;
    SET_GPR_U32(ctx, 31, 0x179F90u);
    ctx->pc = 0x179F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F88u;
    // 0x179f8c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179F88u, 0x179F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F90u;
label_179f90:
    // 0x179f90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179f94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179f98: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179f9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179fa0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x179fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179fa4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179fa8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x179fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179fac: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x179facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x179fb0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x179fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x179fb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x179fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179fb8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x179fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179fbc: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x179fbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179fc0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x179fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179fc4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179fc8: 0x4bc30868  vadd.xyz    $vf1, $vf1, $vf3
    ctx->pc = 0x179fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179fcc: 0x4bc40868  vadd.xyz    $vf1, $vf1, $vf4
    ctx->pc = 0x179fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179fd0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179fd4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179FD4u;
    SET_GPR_U32(ctx, 31, 0x179FDCu);
    ctx->pc = 0x179FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FD4u;
    // 0x179fd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179FD4u, 0x179FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179FDCu;
label_179fdc:
    // 0x179fdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179fe0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179fe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179fe8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179fec: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x179fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x179ff0: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x179ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x179ff4: 0xc64c6004  lwc1        $f12, 0x6004($s2)
    ctx->pc = 0x179ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179ff8: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x179FF8u;
    SET_GPR_U32(ctx, 31, 0x17A000u);
    ctx->pc = 0x179FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FF8u;
    // 0x179ffc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x179FF8u, 0x17A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A000u;
label_17a000:
    // 0x17a000: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a004: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17a008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a00c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a010: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17a014: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17A014u;
    SET_GPR_U32(ctx, 31, 0x17A01Cu);
    ctx->pc = 0x17A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A014u;
    // 0x17a018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17A014u, 0x17A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A01Cu;
label_17a01c:
    // 0x17a01c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a020: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x17a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17a024: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17a024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17a028: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17a028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17a02c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x17a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x17a030: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a034: 0xc6426004  lwc1        $f2, 0x6004($s2)
    ctx->pc = 0x17a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17a038: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a03c: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x17a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a040: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x17a040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x17a044: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x17a044u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x17a048: 0x4602a81c  madd.s      $f0, $f21, $f2
    ctx->pc = 0x17a048u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[2]));
    // 0x17a04c: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x17a04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_17a050:
    // 0x17a050: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x17a050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x17a054: 0x1460fef9  bnez        $v1, . + 4 + (-0x107 << 2)
    ctx->pc = 0x17A054u;
    {
        const bool branch_taken_0x17a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a054) {
            ctx->pc = 0x179C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179c3c;
        }
    }
    ctx->pc = 0x17A05Cu;
    // 0x17a05c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a060: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17a064: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17a064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a068: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17a06c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17a06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a070: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17a074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a078: 0x3e00008  jr          $ra
    ctx->pc = 0x17A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A078u;
        // 0x17a07c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A080u;
}
