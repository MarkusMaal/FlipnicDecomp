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

// Function: FUN_00165a80
// Address: 0x165a80 - 0x165ac8
void FUN_00165a80_0x165a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165a80_0x165a80");
#endif

    switch (ctx->pc) {
        case 0x165a94u: goto label_165a94;
        default: break;
    }

    ctx->pc = 0x165a80u;

    // 0x165a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165a8c: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x165A8Cu;
    SET_GPR_U32(ctx, 31, 0x165A94u);
    ctx->pc = 0x165A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A8Cu;
    // 0x165a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x165A8Cu, 0x165A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A94u;
label_165a94:
    // 0x165a94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x165a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165a98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x165a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165a9c: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x165a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165aa0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x165aa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165aa4: 0x0  nop
    ctx->pc = 0x165aa4u;
    // NOP
    // 0x165aa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165AA8u;
    {
        const bool branch_taken_0x165aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AA8u;
        // 0x165aac: 0xe6010210  swc1        $f1, 0x210($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165aa8) {
            ctx->pc = 0x165AB8u;
            goto label_165ab8;
        }
    }
    ctx->pc = 0x165AB0u;
    // 0x165ab0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x165ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x165ab4: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x165ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
label_165ab8:
    // 0x165ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x165AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AC0u;
        // 0x165ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165AC8u;
}
