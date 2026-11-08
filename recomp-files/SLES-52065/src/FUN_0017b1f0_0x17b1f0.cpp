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

// Function: FUN_0017b1f0
// Address: 0x17b1f0 - 0x17b2b0
void FUN_0017b1f0_0x17b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b1f0_0x17b1f0");
#endif

    switch (ctx->pc) {
        case 0x17b218u: goto label_17b218;
        case 0x17b298u: goto label_17b298;
        default: break;
    }

    ctx->pc = 0x17b1f0u;

    // 0x17b1f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17b1f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b1fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b208: 0x8c820414  lw          $v0, 0x414($a0)
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
    // 0x17b20c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17b20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b210: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x17B210u;
    SET_GPR_U32(ctx, 31, 0x17B218u);
    ctx->pc = 0x17B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B210u;
    // 0x17b214: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x17B210u, 0x17B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B218u;
label_17b218:
    // 0x17b218: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x17b218u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b21c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b220: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17b220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17b224: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x17b228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b22c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x17b22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b230: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b234: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17b234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17b238: 0x8e230410  lw          $v1, 0x410($s1)
    ctx->pc = 0x17b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x17b23c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17b23cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b240: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17b240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17b244: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17b244u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b248: 0x0  nop
    ctx->pc = 0x17b248u;
    // NOP
    // 0x17b24c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17b24cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17b254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17b258: 0x0  nop
    ctx->pc = 0x17b258u;
    // NOP
    // 0x17b25c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b264: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b268: 0xae22041c  sw          $v0, 0x41C($s1)
    ctx->pc = 0x17b268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 2));
    // 0x17b26c: 0x8e22041c  lw          $v0, 0x41C($s1)
    ctx->pc = 0x17b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
    // 0x17b270: 0x244301e0  addiu       $v1, $v0, 0x1E0
    ctx->pc = 0x17b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x17b274: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17b278: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x17b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17b27c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b27cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b280: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17b280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b284: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17b284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b288: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x17b288u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b290: 0xc05ec08  jal         func_17B020
    ctx->pc = 0x17B290u;
    SET_GPR_U32(ctx, 31, 0x17B298u);
    ctx->pc = 0x17B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B290u;
    // 0x17b294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B020u, 0x17B290u, 0x17B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B298u;
label_17b298:
    // 0x17b298: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b29c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2A8u;
        // 0x17b2ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2B0u;
}
