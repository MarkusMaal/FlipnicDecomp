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

// Function: entry_0013eb34
// Address: 0x13eb34 - 0x13eb44
void entry_0013eb34_0x13eb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb34_0x13eb34");
#endif

    switch (ctx->pc) {
        case 0x13eb3cu: goto label_13eb3c;
        default: break;
    }

    ctx->pc = 0x13eb34u;

    // 0x13eb34: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13EB34u;
    SET_GPR_U32(ctx, 31, 0x13EB3Cu);
    ctx->pc = 0x13EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB34u;
    // 0x13eb38: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13EB34u, 0x13EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB3Cu;
label_13eb3c:
    // 0x13eb3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x13EB3Cu;
    {
        const bool branch_taken_0x13eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB3Cu;
        // 0x13eb40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb3c) {
            ctx->pc = 0x13EBC8u;
            return;
        }
    }
    ctx->pc = 0x13EB44u;
}
