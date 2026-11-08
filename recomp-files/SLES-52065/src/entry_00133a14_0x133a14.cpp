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

// Function: entry_00133a14
// Address: 0x133a14 - 0x133a30
void entry_00133a14_0x133a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133a14_0x133a14");
#endif

    switch (ctx->pc) {
        case 0x133a1cu: goto label_133a1c;
        default: break;
    }

    ctx->pc = 0x133a14u;

label_133a14:
    // 0x133a14: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x133A14u;
    SET_GPR_U32(ctx, 31, 0x133A1Cu);
    ctx->pc = 0x133A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A14u;
    // 0x133a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x133A14u, 0x133A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A1Cu;
label_133a1c:
    // 0x133a1c: 0x0  nop
    ctx->pc = 0x133a1cu;
    // NOP
    // 0x133a20: 0x0  nop
    ctx->pc = 0x133a20u;
    // NOP
    // 0x133a24: 0x0  nop
    ctx->pc = 0x133a24u;
    // NOP
    // 0x133a28: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133A28u;
    {
        const bool branch_taken_0x133a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a28) {
            ctx->pc = 0x133A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133a14;
        }
    }
    ctx->pc = 0x133A30u;
}
