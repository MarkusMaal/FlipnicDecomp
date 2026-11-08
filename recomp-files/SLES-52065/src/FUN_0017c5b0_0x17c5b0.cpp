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

// Function: FUN_0017c5b0
// Address: 0x17c5b0 - 0x17c85c
void FUN_0017c5b0_0x17c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c5b0_0x17c5b0");
#endif

    switch (ctx->pc) {
        case 0x17c634u: goto label_17c634;
        case 0x17c688u: goto label_17c688;
        case 0x17c6a0u: goto label_17c6a0;
        case 0x17c728u: goto label_17c728;
        case 0x17c76cu: goto label_17c76c;
        case 0x17c7e0u: goto label_17c7e0;
        case 0x17c800u: goto label_17c800;
        case 0x17c80cu: goto label_17c80c;
        default: break;
    }

    ctx->pc = 0x17c5b0u;

    // 0x17c5b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17c5b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17c5bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5c4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17c5c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c5c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17c5ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17c5d0: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x17c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x17c5d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17c5d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c5d8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17c5d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c5dc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17c5dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c5e0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17c5e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c5e4: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x17c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17c5e8: 0xc4800214  lwc1        $f0, 0x214($a0)
    ctx->pc = 0x17c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5ec: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x17c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c5f0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5f4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x17c5f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x17c5f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c5f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c5fc: 0x0  nop
    ctx->pc = 0x17c5fcu;
    // NOP
    // 0x17c600: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C600u;
    {
        const bool branch_taken_0x17c600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C600u;
        // 0x17c604: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c600) {
            ctx->pc = 0x17C610u;
            goto label_17c610;
        }
    }
    ctx->pc = 0x17C608u;
    // 0x17c608: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x17C608u;
    {
        const bool branch_taken_0x17c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C608u;
        // 0x17c60c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c608) {
            ctx->pc = 0x17C83Cu;
            goto label_17c83c;
        }
    }
    ctx->pc = 0x17C610u;
label_17c610:
    // 0x17c610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c614: 0x0  nop
    ctx->pc = 0x17c614u;
    // NOP
    // 0x17c618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C618u;
    {
        const bool branch_taken_0x17c618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C618u;
        // 0x17c61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c618) {
            ctx->pc = 0x17C628u;
            goto label_17c628;
        }
    }
    ctx->pc = 0x17C620u;
    // 0x17c620: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x17C620u;
    {
        const bool branch_taken_0x17c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C620u;
        // 0x17c624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c620) {
            ctx->pc = 0x17C83Cu;
            goto label_17c83c;
        }
    }
    ctx->pc = 0x17C628u;
label_17c628:
    // 0x17c628: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x17c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x17c62c: 0xc05f330  jal         func_17CCC0
    ctx->pc = 0x17C62Cu;
    SET_GPR_U32(ctx, 31, 0x17C634u);
    ctx->pc = 0x17C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C62Cu;
    // 0x17c630: 0x26260210  addiu       $a2, $s1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCC0u, 0x17C62Cu, 0x17C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C634u;
label_17c634:
    // 0x17c634: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x17c634u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x17c638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c63c: 0x0  nop
    ctx->pc = 0x17c63cu;
    // NOP
    // 0x17c640: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x17c640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c644: 0x0  nop
    ctx->pc = 0x17c644u;
    // NOP
    // 0x17c648: 0x45010077  bc1t        . + 4 + (0x77 << 2)
    ctx->pc = 0x17C648u;
    {
        const bool branch_taken_0x17c648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C648u;
        // 0x17c64c: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c648) {
            ctx->pc = 0x17C828u;
            goto label_17c828;
        }
    }
    ctx->pc = 0x17C650u;
    // 0x17c650: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c654: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x17c654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x17c658: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17C658u;
    {
        const bool branch_taken_0x17c658 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C658u;
        // 0x17c65c: 0xc4740054  lwc1        $f20, 0x54($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c658) {
            ctx->pc = 0x17C6A0u;
            goto label_17c6a0;
        }
    }
    ctx->pc = 0x17C660u;
    // 0x17c660: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x17c664: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x17c668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c66c: 0x0  nop
    ctx->pc = 0x17c66cu;
    // NOP
    // 0x17c670: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x17c670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c674: 0x0  nop
    ctx->pc = 0x17c674u;
    // NOP
    // 0x17c678: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C678u;
    {
        const bool branch_taken_0x17c678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C678u;
        // 0x17c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c678) {
            ctx->pc = 0x17C688u;
            goto label_17c688;
        }
    }
    ctx->pc = 0x17C680u;
    // 0x17c680: 0xc042118  jal         func_108460
    ctx->pc = 0x17C680u;
    SET_GPR_U32(ctx, 31, 0x17C688u);
    ctx->pc = 0x17C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C680u;
    // 0x17c684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C680u, 0x17C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C688u;
label_17c688:
    // 0x17c688: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c68c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c694: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x17c694u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x17c698: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17C698u;
    SET_GPR_U32(ctx, 31, 0x17C6A0u);
    ctx->pc = 0x17C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C698u;
    // 0x17c69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17C698u, 0x17C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6A0u;
label_17c6a0:
    // 0x17c6a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c6a8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x17c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c6b0: 0x0  nop
    ctx->pc = 0x17c6b0u;
    // NOP
    // 0x17c6b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17C6B4u;
    {
        const bool branch_taken_0x17c6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6B4u;
        // 0x17c6b8: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6b4) {
            ctx->pc = 0x17C6D4u;
            goto label_17c6d4;
        }
    }
    ctx->pc = 0x17C6BCu;
    // 0x17c6bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17c6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c6c0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17c6c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c6c4: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17c6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c6c8: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x17c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17c6cc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x17C6CCu;
    {
        const bool branch_taken_0x17c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6CCu;
        // 0x17c6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6cc) {
            ctx->pc = 0x17C83Cu;
            goto label_17c83c;
        }
    }
    ctx->pc = 0x17C6D4u;
label_17c6d4:
    // 0x17c6d4: 0xe61502e8  swc1        $f21, 0x2E8($s0)
    ctx->pc = 0x17c6d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x17c6d8: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x17c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x17c6dc: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x17c6dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c6e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17c6e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c6e4: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x17c6e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17c6e8: 0x0  nop
    ctx->pc = 0x17c6e8u;
    // NOP
    // 0x17c6ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17c6ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17c6f0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x17c6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c6f4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x17c6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17c6f8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17c6fc: 0xc60301c0  lwc1        $f3, 0x1C0($s0)
    ctx->pc = 0x17c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17c700: 0xc6220210  lwc1        $f2, 0x210($s1)
    ctx->pc = 0x17c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c704: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x17c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c708: 0xc6210218  lwc1        $f1, 0x218($s1)
    ctx->pc = 0x17c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c70c: 0x46031540  add.s       $f21, $f2, $f3
    ctx->pc = 0x17c70cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x17c710: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x17c710u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x17c714: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x17c714u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x17c718: 0x0  nop
    ctx->pc = 0x17c718u;
    // NOP
    // 0x17c71c: 0x0  nop
    ctx->pc = 0x17c71cu;
    // NOP
    // 0x17c720: 0xc07ef00  jal         func_1FBC00
    ctx->pc = 0x17C720u;
    SET_GPR_U32(ctx, 31, 0x17C728u);
    ctx->pc = 0x1FBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC00u, 0x17C720u, 0x17C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C728u;
label_17c728:
    // 0x17c728: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x17c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c72c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c730: 0x0  nop
    ctx->pc = 0x17c730u;
    // NOP
    // 0x17c734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c738: 0x0  nop
    ctx->pc = 0x17c738u;
    // NOP
    // 0x17c73c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17c740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c744: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x17c744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x17c748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c74c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x17c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17c750: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x17c750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c754: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x17c754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17c758: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17c758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c75c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x17c75cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c760: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x17c760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x17c764: 0xc0425d4  jal         func_109750
    ctx->pc = 0x17C764u;
    SET_GPR_U32(ctx, 31, 0x17C76Cu);
    ctx->pc = 0x17C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C764u;
    // 0x17c768: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x17C764u, 0x17C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C76Cu;
label_17c76c:
    // 0x17c76c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x17c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c774: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x17c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c778: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x17c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x17c77c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x17c77cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x17c780: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x17c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x17c784: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x17c784u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x17c788: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x17c788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17c78c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x17c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c790: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x17c790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x17c794: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x17c794u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x17c798: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x17c798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17c79c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17c79cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c7a0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17c7a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17c7a4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17c7a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17c7a8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17c7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17c7ac: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17c7acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17c7b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x17c7b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17c7b4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17c7b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17c7b8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17c7b8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17c7bc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17c7bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c7c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x17c7c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17c7c4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17c7c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c7c8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x17c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17c7cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17c7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17c7d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c7d4: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x17c7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c7d8: 0xc056194  jal         func_158650
    ctx->pc = 0x17C7D8u;
    SET_GPR_U32(ctx, 31, 0x17C7E0u);
    ctx->pc = 0x17C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7D8u;
    // 0x17c7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x17C7D8u, 0x17C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7E0u;
label_17c7e0:
    // 0x17c7e0: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x17c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c7e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x17c7e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17c7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17c7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c7f4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17c7f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x17c7f8: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x17C7F8u;
    SET_GPR_U32(ctx, 31, 0x17C800u);
    ctx->pc = 0x17C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7F8u;
    // 0x17c7fc: 0xe60002a0  swc1        $f0, 0x2A0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x17C7F8u, 0x17C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C800u;
label_17c800:
    // 0x17c800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c804: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x17C804u;
    SET_GPR_U32(ctx, 31, 0x17C80Cu);
    ctx->pc = 0x17C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C804u;
    // 0x17c808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x17C804u, 0x17C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C80Cu;
label_17c80c:
    // 0x17c80c: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x17c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x17c810: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17c810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c814: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17c814u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c818: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17c818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c81c: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x17c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17c820: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C820u;
    {
        const bool branch_taken_0x17c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C820u;
        // 0x17c824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c820) {
            ctx->pc = 0x17C83Cu;
            goto label_17c83c;
        }
    }
    ctx->pc = 0x17C828u;
label_17c828:
    // 0x17c828: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17c828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c82c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17c82cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c830: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17c830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c834: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x17c834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17c838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c83c:
    // 0x17c83c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17c83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c840: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17c840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17c844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c848: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17c84c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c850: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17c850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c854: 0x3e00008  jr          $ra
    ctx->pc = 0x17C854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C854u;
        // 0x17c858: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C85Cu;
}
