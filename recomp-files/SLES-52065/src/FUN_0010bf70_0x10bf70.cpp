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

// Function: FUN_0010bf70
// Address: 0x10bf70 - 0x10c05c
void FUN_0010bf70_0x10bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010bf70_0x10bf70");
#endif

    switch (ctx->pc) {
        case 0x10bfb0u: goto label_10bfb0;
        case 0x10bfd4u: goto label_10bfd4;
        case 0x10c010u: goto label_10c010;
        case 0x10c024u: goto label_10c024;
        case 0x10c038u: goto label_10c038;
        default: break;
    }

    ctx->pc = 0x10bf70u;

    // 0x10bf70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10bf74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10bf78: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x10bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10bf7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10bf80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10bf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10bf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10bf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf8c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10bf8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10bf90: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10bf90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10bf94: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x10bf94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10bf98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10bf9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10bf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10bfa0: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x10bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x10bfa4: 0xc48c0200  lwc1        $f12, 0x200($a0)
    ctx->pc = 0x10bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10bfa8: 0xc054e18  jal         func_153860
    ctx->pc = 0x10BFA8u;
    SET_GPR_U32(ctx, 31, 0x10BFB0u);
    ctx->pc = 0x10BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFA8u;
    // 0x10bfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x10BFA8u, 0x10BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFB0u;
label_10bfb0:
    // 0x10bfb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10bfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10bfb4: 0x0  nop
    ctx->pc = 0x10bfb4u;
    // NOP
    // 0x10bfb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10bfb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10bfbc: 0x0  nop
    ctx->pc = 0x10bfbcu;
    // NOP
    // 0x10bfc0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x10BFC0u;
    {
        const bool branch_taken_0x10bfc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFC0u;
        // 0x10bfc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bfc0) {
            ctx->pc = 0x10C048u;
            goto label_10c048;
        }
    }
    ctx->pc = 0x10BFC8u;
    // 0x10bfc8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10bfcc: 0xc046458  jal         func_119160
    ctx->pc = 0x10BFCCu;
    SET_GPR_U32(ctx, 31, 0x10BFD4u);
    ctx->pc = 0x10BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFCCu;
    // 0x10bfd0: 0x2484e318  addiu       $a0, $a0, -0x1CE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10BFCCu, 0x10BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFD4u;
label_10bfd4:
    // 0x10bfd4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10bfd8: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10bfd8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10bfdc: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x10bfdcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10bfe0: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x10bfe0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x10bfe4: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x10bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x10bfe8: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x10bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x10bfec: 0x7ca80020  sq          $t0, 0x20($a1)
    ctx->pc = 0x10bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x10bff0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x10bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10bff4: 0x7a060370  lq          $a2, 0x370($s0)
    ctx->pc = 0x10bff4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x10bff8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x10bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x10bffc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10c000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c004: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10c008: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10C008u;
    SET_GPR_U32(ctx, 31, 0x10C010u);
    ctx->pc = 0x10C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C008u;
    // 0x10c00c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10C008u, 0x10C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C010u;
label_10c010:
    // 0x10c010: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c018: 0xa60201e8  sh          $v0, 0x1E8($s0)
    ctx->pc = 0x10c018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c01c: 0xc042118  jal         func_108460
    ctx->pc = 0x10C01Cu;
    SET_GPR_U32(ctx, 31, 0x10C024u);
    ctx->pc = 0x10C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C01Cu;
    // 0x10c020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10C01Cu, 0x10C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C024u;
label_10c024:
    // 0x10c024: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10c024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x10c028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c02c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10c02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c030: 0xc0425a4  jal         func_109690
    ctx->pc = 0x10C030u;
    SET_GPR_U32(ctx, 31, 0x10C038u);
    ctx->pc = 0x10C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C030u;
    // 0x10c034: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x10C030u, 0x10C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C038u;
label_10c038:
    // 0x10c038: 0x862343f0  lh          $v1, 0x43F0($s1)
    ctx->pc = 0x10c038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 17392)));
    // 0x10c03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c040: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x10c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x10c044: 0xa62343f0  sh          $v1, 0x43F0($s1)
    ctx->pc = 0x10c044u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17392), (uint16_t)GPR_U32(ctx, 3));
label_10c048:
    // 0x10c048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10c04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c054: 0x3e00008  jr          $ra
    ctx->pc = 0x10C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C054u;
        // 0x10c058: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C05Cu;
}
