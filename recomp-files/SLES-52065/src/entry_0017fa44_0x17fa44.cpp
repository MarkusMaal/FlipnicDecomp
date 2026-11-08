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

// Function: entry_0017fa44
// Address: 0x17fa44 - 0x17fa60
void entry_0017fa44_0x17fa44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa44_0x17fa44");
#endif

    switch (ctx->pc) {
        case 0x17fa4cu: goto label_17fa4c;
        default: break;
    }

    ctx->pc = 0x17fa44u;

label_17fa44:
    // 0x17fa44: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x17FA44u;
    SET_GPR_U32(ctx, 31, 0x17FA4Cu);
    ctx->pc = 0x17FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA44u;
    // 0x17fa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x17FA44u, 0x17FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x0  nop
    ctx->pc = 0x17fa4cu;
    // NOP
    // 0x17fa50: 0x0  nop
    ctx->pc = 0x17fa50u;
    // NOP
    // 0x17fa54: 0x0  nop
    ctx->pc = 0x17fa54u;
    // NOP
    // 0x17fa58: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FA58u;
    {
        const bool branch_taken_0x17fa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fa58) {
            ctx->pc = 0x17FA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fa44;
        }
    }
    ctx->pc = 0x17FA60u;
}
