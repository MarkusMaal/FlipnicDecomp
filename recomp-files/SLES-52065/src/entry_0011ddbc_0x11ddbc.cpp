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

// Function: entry_0011ddbc
// Address: 0x11ddbc - 0x11ddd8
void entry_0011ddbc_0x11ddbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ddbc_0x11ddbc");
#endif

    switch (ctx->pc) {
        case 0x11ddc8u: goto label_11ddc8;
        default: break;
    }

    ctx->pc = 0x11ddbcu;

label_11ddbc:
    // 0x11ddbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddc0: 0xc046c90  jal         func_11B240
    ctx->pc = 0x11DDC0u;
    SET_GPR_U32(ctx, 31, 0x11DDC8u);
    ctx->pc = 0x11DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDC0u;
    // 0x11ddc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B240u, 0x11DDC0u, 0x11DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDC8u;
label_11ddc8:
    // 0x11ddc8: 0x0  nop
    ctx->pc = 0x11ddc8u;
    // NOP
    // 0x11ddcc: 0x0  nop
    ctx->pc = 0x11ddccu;
    // NOP
    // 0x11ddd0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DDD0u;
    {
        const bool branch_taken_0x11ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ddd0) {
            ctx->pc = 0x11DDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ddbc;
        }
    }
    ctx->pc = 0x11DDD8u;
}
