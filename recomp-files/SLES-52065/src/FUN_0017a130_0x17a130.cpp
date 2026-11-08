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

// Function: FUN_0017a130
// Address: 0x17a130 - 0x17a158
void FUN_0017a130_0x17a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a130_0x17a130");
#endif

    switch (ctx->pc) {
        case 0x17a14cu: goto label_17a14c;
        default: break;
    }

    ctx->pc = 0x17a130u;

    // 0x17a130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a138: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x17a138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a13c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A13Cu;
    {
        const bool branch_taken_0x17a13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a13c) {
            ctx->pc = 0x17A14Cu;
            goto label_17a14c;
        }
    }
    ctx->pc = 0x17A144u;
    // 0x17a144: 0xc05c9ac  jal         func_1726B0
    ctx->pc = 0x17A144u;
    SET_GPR_U32(ctx, 31, 0x17A14Cu);
    ctx->pc = 0x1726B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726B0u, 0x17A144u, 0x17A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A14Cu;
label_17a14c:
    // 0x17a14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a150: 0x3e00008  jr          $ra
    ctx->pc = 0x17A150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A150u;
        // 0x17a154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A158u;
}
