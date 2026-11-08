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

// Function: entry_001df25c
// Address: 0x1df25c - 0x1df270
void entry_001df25c_0x1df25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df25c_0x1df25c");
#endif

    switch (ctx->pc) {
        case 0x1df26cu: goto label_1df26c;
        default: break;
    }

    ctx->pc = 0x1df25cu;

    // 0x1df25c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF25Cu;
    {
        const bool branch_taken_0x1df25c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF25Cu;
        // 0x1df260: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df25c) {
            ctx->pc = 0x1DF270u;
            return;
        }
    }
    ctx->pc = 0x1DF264u;
    // 0x1df264: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DF264u;
    SET_GPR_U32(ctx, 31, 0x1DF26Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DF264u, 0x1DF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF26Cu;
label_1df26c:
    // 0x1df26c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1df26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1df270u;
}
