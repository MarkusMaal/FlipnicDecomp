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

// Function: entry_0018ab2c
// Address: 0x18ab2c - 0x18ab48
void entry_0018ab2c_0x18ab2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab2c_0x18ab2c");
#endif

    switch (ctx->pc) {
        case 0x18ab34u: goto label_18ab34;
        default: break;
    }

    ctx->pc = 0x18ab2cu;

label_18ab2c:
    // 0x18ab2c: 0xc062ae0  jal         func_18AB80
    ctx->pc = 0x18AB2Cu;
    SET_GPR_U32(ctx, 31, 0x18AB34u);
    ctx->pc = 0x18AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB2Cu;
    // 0x18ab30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB80u, 0x18AB2Cu, 0x18AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB34u;
label_18ab34:
    // 0x18ab34: 0x0  nop
    ctx->pc = 0x18ab34u;
    // NOP
    // 0x18ab38: 0x0  nop
    ctx->pc = 0x18ab38u;
    // NOP
    // 0x18ab3c: 0x0  nop
    ctx->pc = 0x18ab3cu;
    // NOP
    // 0x18ab40: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AB40u;
    {
        const bool branch_taken_0x18ab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab40) {
            ctx->pc = 0x18AB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ab2c;
        }
    }
    ctx->pc = 0x18AB48u;
}
