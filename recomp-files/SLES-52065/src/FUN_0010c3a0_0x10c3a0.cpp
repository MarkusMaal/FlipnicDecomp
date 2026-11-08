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

// Function: FUN_0010c3a0
// Address: 0x10c3a0 - 0x10c444
void FUN_0010c3a0_0x10c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c3a0_0x10c3a0");
#endif

    switch (ctx->pc) {
        case 0x10c3c0u: goto label_10c3c0;
        case 0x10c3d4u: goto label_10c3d4;
        case 0x10c3e0u: goto label_10c3e0;
        default: break;
    }

    ctx->pc = 0x10c3a0u;

    // 0x10c3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c3a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10c3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10c3b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10c3b4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x10c3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c3b8: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x10C3B8u;
    SET_GPR_U32(ctx, 31, 0x10C3C0u);
    ctx->pc = 0x10C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C3B8u;
    // 0x10c3bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x10C3B8u, 0x10C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3C0u;
label_10c3c0:
    // 0x10c3c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3c4: 0x86230030  lh          $v1, 0x30($s1)
    ctx->pc = 0x10c3c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10c3c8: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x10c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x10c3cc: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x10C3CCu;
    SET_GPR_U32(ctx, 31, 0x10C3D4u);
    ctx->pc = 0x10C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C3CCu;
    // 0x10c3d0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x10C3CCu, 0x10C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3D4u;
label_10c3d4:
    // 0x10c3d4: 0x8c520020  lw          $s2, 0x20($v0)
    ctx->pc = 0x10c3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10c3d8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10C3D8u;
    SET_GPR_U32(ctx, 31, 0x10C3E0u);
    ctx->pc = 0x10C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C3D8u;
    // 0x10c3dc: 0x8c51002c  lw          $s1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10C3D8u, 0x10C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3E0u;
label_10c3e0:
    // 0x10c3e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x10c3e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c3e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10c3e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10c3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10c3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10c3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10c3f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10c3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10c3f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x10c3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x10c3f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x10c3fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10c3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10c400: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10c400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10c404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10c404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c408: 0x0  nop
    ctx->pc = 0x10c408u;
    // NOP
    // 0x10c40c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10c40cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10c410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10c410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10c414: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10c414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10c418: 0x0  nop
    ctx->pc = 0x10c418u;
    // NOP
    // 0x10c41c: 0xa602024c  sh          $v0, 0x24C($s0)
    ctx->pc = 0x10c41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 588), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c420: 0x8602024c  lh          $v0, 0x24C($s0)
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x10c424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10c424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10c428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c42c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10c430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c434: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10c438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10c438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C43Cu;
        // 0x10c440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C444u;
}
