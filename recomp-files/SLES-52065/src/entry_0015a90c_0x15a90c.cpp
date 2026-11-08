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

// Function: entry_0015a90c
// Address: 0x15a90c - 0x15a928
void entry_0015a90c_0x15a90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a90c_0x15a90c");
#endif

    switch (ctx->pc) {
        case 0x15a920u: goto label_15a920;
        default: break;
    }

    ctx->pc = 0x15a90cu;

    // 0x15a90c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a910: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15a910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15a914: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15a918: 0xc0564fc  jal         func_1593F0
    ctx->pc = 0x15A918u;
    SET_GPR_U32(ctx, 31, 0x15A920u);
    ctx->pc = 0x15A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A918u;
    // 0x15a91c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x15A918u, 0x15A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A920u;
label_15a920:
    // 0x15a920: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15A920u;
    {
        const bool branch_taken_0x15a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A920u;
        // 0x15a924: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a920) {
            ctx->pc = 0x15A93Cu;
            return;
        }
    }
    ctx->pc = 0x15A928u;
}
