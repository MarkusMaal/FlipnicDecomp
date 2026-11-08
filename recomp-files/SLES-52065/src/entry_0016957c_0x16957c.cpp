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

// Function: entry_0016957c
// Address: 0x16957c - 0x16959c
void entry_0016957c_0x16957c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016957c_0x16957c");
#endif

    switch (ctx->pc) {
        case 0x169594u: goto label_169594;
        default: break;
    }

    ctx->pc = 0x16957cu;

    // 0x16957c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169580: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169580u;
    {
        const bool branch_taken_0x169580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169580u;
        // 0x169584: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169580) {
            ctx->pc = 0x16959Cu;
            return;
        }
    }
    ctx->pc = 0x169588u;
    // 0x169588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16958c: 0xc042118  jal         func_108460
    ctx->pc = 0x16958Cu;
    SET_GPR_U32(ctx, 31, 0x169594u);
    ctx->pc = 0x169590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16958Cu;
    // 0x169590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16958Cu, 0x169594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169594u;
label_169594:
    // 0x169594: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x169594u;
    {
        const bool branch_taken_0x169594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169594u;
        // 0x169598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169594) {
            ctx->pc = 0x169714u;
            return;
        }
    }
    ctx->pc = 0x16959Cu;
}
