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

// Function: FUN_001d1660
// Address: 0x1d1660 - 0x1d1694
void FUN_001d1660_0x1d1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1660_0x1d1660");
#endif

    switch (ctx->pc) {
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1688u: goto label_1d1688;
        default: break;
    }

    ctx->pc = 0x1d1660u;

    // 0x1d1660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1668: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1D1668u;
    SET_GPR_U32(ctx, 31, 0x1D1670u);
    ctx->pc = 0x1D166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1668u;
    // 0x1d166c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1D1668u, 0x1D1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1670u;
label_1d1670:
    // 0x1d1670: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d1670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1d1674: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d1674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1678: 0x248434a0  addiu       $a0, $a0, 0x34A0
    ctx->pc = 0x1d1678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
    // 0x1d167c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d167cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1680: 0xc060020  jal         func_180080
    ctx->pc = 0x1D1680u;
    SET_GPR_U32(ctx, 31, 0x1D1688u);
    ctx->pc = 0x1D1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1680u;
    // 0x1d1684: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x1D1680u, 0x1D1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1688u;
label_1d1688:
    // 0x1d1688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d168c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D168Cu;
        // 0x1d1690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D168Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1694u;
}
