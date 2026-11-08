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

// Function: entry_0010c24c
// Address: 0x10c24c - 0x10c2fc
void entry_0010c24c_0x10c24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c24c_0x10c24c");
#endif

    switch (ctx->pc) {
        case 0x10c270u: goto label_10c270;
        case 0x10c294u: goto label_10c294;
        case 0x10c2d0u: goto label_10c2d0;
        case 0x10c2e4u: goto label_10c2e4;
        case 0x10c2f8u: goto label_10c2f8;
        default: break;
    }

    ctx->pc = 0x10c24cu;

label_10c24c:
    // 0x10c24c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10c24cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c250:
    // 0x10c250: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10c250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c254:
    // 0x10c254: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x10c254u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c258:
    // 0x10c258: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10c25c:
    // 0x10c25c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10c25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10c260:
    // 0x10c260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c264:
    // 0x10c264: 0xc62c0200  lwc1        $f12, 0x200($s1)
    ctx->pc = 0x10c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10c268:
    // 0x10c268: 0xc054e18  jal         func_153860
label_10c26c:
    if (ctx->pc == 0x10C26Cu) {
        ctx->pc = 0x10C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C268u;
        // 0x10c26c: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C270u;
        goto label_10c270;
    }
    ctx->pc = 0x10C268u;
    SET_GPR_U32(ctx, 31, 0x10C270u);
    ctx->pc = 0x10C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C268u;
    // 0x10c26c: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x10C268u, 0x10C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C270u;
label_10c270:
    // 0x10c270: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10c270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10c274:
    // 0x10c274: 0x0  nop
    ctx->pc = 0x10c274u;
    // NOP
label_10c278:
    // 0x10c278: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10c278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10c27c:
    // 0x10c27c: 0x0  nop
    ctx->pc = 0x10c27cu;
    // NOP
label_10c280:
    // 0x10c280: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_10c284:
    if (ctx->pc == 0x10C284u) {
        ctx->pc = 0x10C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C280u;
        // 0x10c284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C288u;
        goto label_10c288;
    }
    ctx->pc = 0x10C280u;
    {
        const bool branch_taken_0x10c280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C280u;
        // 0x10c284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c280) {
            ctx->pc = 0x10C2FCu;
            return;
        }
    }
    ctx->pc = 0x10C288u;
label_10c288:
    // 0x10c288: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10c28c:
    // 0x10c28c: 0xc046458  jal         func_119160
label_10c290:
    if (ctx->pc == 0x10C290u) {
        ctx->pc = 0x10C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C28Cu;
        // 0x10c290: 0x2484e318  addiu       $a0, $a0, -0x1CE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C294u;
        goto label_10c294;
    }
    ctx->pc = 0x10C28Cu;
    SET_GPR_U32(ctx, 31, 0x10C294u);
    ctx->pc = 0x10C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C28Cu;
    // 0x10c290: 0x2484e318  addiu       $a0, $a0, -0x1CE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C28Cu, 0x10C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C294u;
label_10c294:
    // 0x10c294: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10c294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10c298:
    // 0x10c298: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10c298u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_10c29c:
    // 0x10c29c: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x10c29cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_10c2a0:
    // 0x10c2a0: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x10c2a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_10c2a4:
    // 0x10c2a4: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x10c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_10c2a8:
    // 0x10c2a8: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x10c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
label_10c2ac:
    // 0x10c2ac: 0x7ca80020  sq          $t0, 0x20($a1)
    ctx->pc = 0x10c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
label_10c2b0:
    // 0x10c2b0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x10c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10c2b4:
    // 0x10c2b4: 0x7a060370  lq          $a2, 0x370($s0)
    ctx->pc = 0x10c2b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 880)));
label_10c2b8:
    // 0x10c2b8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x10c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_10c2bc:
    // 0x10c2bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10c2c0:
    // 0x10c2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c2c4:
    // 0x10c2c4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c2c8:
    // 0x10c2c8: 0xc0465f0  jal         func_1197C0
label_10c2cc:
    if (ctx->pc == 0x10C2CCu) {
        ctx->pc = 0x10C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2C8u;
        // 0x10c2cc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C2D0u;
        goto label_10c2d0;
    }
    ctx->pc = 0x10C2C8u;
    SET_GPR_U32(ctx, 31, 0x10C2D0u);
    ctx->pc = 0x10C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2C8u;
    // 0x10c2cc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10C2C8u, 0x10C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C2D0u;
label_10c2d0:
    // 0x10c2d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10c2d4:
    // 0x10c2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c2d8:
    // 0x10c2d8: 0xa60201e8  sh          $v0, 0x1E8($s0)
    ctx->pc = 0x10c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 2));
label_10c2dc:
    // 0x10c2dc: 0xc042118  jal         func_108460
label_10c2e0:
    if (ctx->pc == 0x10C2E0u) {
        ctx->pc = 0x10C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2DCu;
        // 0x10c2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C2E4u;
        goto label_10c2e4;
    }
    ctx->pc = 0x10C2DCu;
    SET_GPR_U32(ctx, 31, 0x10C2E4u);
    ctx->pc = 0x10C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2DCu;
    // 0x10c2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10C2DCu, 0x10C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C2E4u;
label_10c2e4:
    // 0x10c2e4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10c2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10c2e8:
    // 0x10c2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c2ec:
    // 0x10c2ec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10c2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10c2f0:
    // 0x10c2f0: 0x320f809  jalr        $t9
label_10c2f4:
    if (ctx->pc == 0x10C2F4u) {
        ctx->pc = 0x10C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2F0u;
        // 0x10c2f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C2F8u;
        goto label_10c2f8;
    }
    ctx->pc = 0x10C2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C2F8u);
        ctx->pc = 0x10C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2F0u;
        // 0x10c2f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C2F0u, 0x10C2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C2F8u;
label_10c2f8:
    // 0x10c2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10c2fcu;
}
