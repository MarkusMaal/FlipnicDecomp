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

// Function: entry_001fcee4
// Address: 0x1fcee4 - 0x1fcf00
void entry_001fcee4_0x1fcee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcee4_0x1fcee4");
#endif

    switch (ctx->pc) {
        case 0x1fcefcu: goto label_1fcefc;
        default: break;
    }

    ctx->pc = 0x1fcee4u;

    // 0x1fcee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcee8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCEE8u;
    {
        const bool branch_taken_0x1fcee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEE8u;
        // 0x1fceec: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcee8) {
            ctx->pc = 0x1FCF00u;
            return;
        }
    }
    ctx->pc = 0x1FCEF0u;
    // 0x1fcef0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fcef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcef4: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FCEF4u;
    SET_GPR_U32(ctx, 31, 0x1FCEFCu);
    ctx->pc = 0x1FCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEF4u;
    // 0x1fcef8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FCEF4u, 0x1FCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEFCu;
label_1fcefc:
    // 0x1fcefc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x1fcf00u;
}
