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

// Function: FUN_001614b0
// Address: 0x1614b0 - 0x1614e8
void FUN_001614b0_0x1614b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001614b0_0x1614b0");
#endif

    switch (ctx->pc) {
        case 0x1614c8u: goto label_1614c8;
        case 0x1614d8u: goto label_1614d8;
        default: break;
    }

    ctx->pc = 0x1614b0u;

    // 0x1614b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1614b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1614b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1614b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1614b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1614b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1614bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1614bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614c0: 0xc058408  jal         func_161020
    ctx->pc = 0x1614C0u;
    SET_GPR_U32(ctx, 31, 0x1614C8u);
    ctx->pc = 0x1614C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614C0u;
    // 0x1614c4: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161020u, 0x1614C0u, 0x1614C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614C8u;
label_1614c8:
    // 0x1614c8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1614c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1614cc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1614ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1614d0: 0xc055c70  jal         func_1571C0
    ctx->pc = 0x1614D0u;
    SET_GPR_U32(ctx, 31, 0x1614D8u);
    ctx->pc = 0x1614D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614D0u;
    // 0x1614d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571C0u, 0x1614D0u, 0x1614D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614D8u;
label_1614d8:
    // 0x1614d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1614d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1614dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1614dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1614E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614E0u;
        // 0x1614e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614E8u;
}
