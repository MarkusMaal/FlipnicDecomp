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

// Function: FUN_0014c7d0
// Address: 0x14c7d0 - 0x14c804
void FUN_0014c7d0_0x14c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c7d0_0x14c7d0");
#endif

    switch (ctx->pc) {
        case 0x14c7e8u: goto label_14c7e8;
        case 0x14c7f4u: goto label_14c7f4;
        default: break;
    }

    ctx->pc = 0x14c7d0u;

    // 0x14c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7e0: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x14C7E0u;
    SET_GPR_U32(ctx, 31, 0x14C7E8u);
    ctx->pc = 0x14C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7E0u;
    // 0x14c7e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x14C7E0u, 0x14C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7E8u;
label_14c7e8:
    // 0x14c7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7ec: 0xc053204  jal         func_14C810
    ctx->pc = 0x14C7ECu;
    SET_GPR_U32(ctx, 31, 0x14C7F4u);
    ctx->pc = 0x14C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7ECu;
    // 0x14c7f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C810u, 0x14C7ECu, 0x14C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7F4u;
label_14c7f4:
    // 0x14c7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c7f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7FCu;
        // 0x14c800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C804u;
}
