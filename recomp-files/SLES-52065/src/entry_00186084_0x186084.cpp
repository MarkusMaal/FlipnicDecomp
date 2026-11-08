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

// Function: entry_00186084
// Address: 0x186084 - 0x1860a0
void entry_00186084_0x186084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186084_0x186084");
#endif

    switch (ctx->pc) {
        case 0x18608cu: goto label_18608c;
        default: break;
    }

    ctx->pc = 0x186084u;

label_186084:
    // 0x186084: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x186084u;
    SET_GPR_U32(ctx, 31, 0x18608Cu);
    ctx->pc = 0x186088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186084u;
    // 0x186088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x186084u, 0x18608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18608Cu;
label_18608c:
    // 0x18608c: 0x0  nop
    ctx->pc = 0x18608cu;
    // NOP
    // 0x186090: 0x0  nop
    ctx->pc = 0x186090u;
    // NOP
    // 0x186094: 0x0  nop
    ctx->pc = 0x186094u;
    // NOP
    // 0x186098: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186098u;
    {
        const bool branch_taken_0x186098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186098) {
            ctx->pc = 0x186084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186084;
        }
    }
    ctx->pc = 0x1860A0u;
}
