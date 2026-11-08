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

// Function: entry_00188d84
// Address: 0x188d84 - 0x188d98
void entry_00188d84_0x188d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d84_0x188d84");
#endif

    switch (ctx->pc) {
        case 0x188d90u: goto label_188d90;
        default: break;
    }

    ctx->pc = 0x188d84u;

    // 0x188d84: 0x0  nop
    ctx->pc = 0x188d84u;
    // NOP
    // 0x188d88: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x188D88u;
    SET_GPR_U32(ctx, 31, 0x188D90u);
    ctx->pc = 0x188D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D88u;
    // 0x188d8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x188D88u, 0x188D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D90u;
label_188d90:
    // 0x188d90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x188D90u;
    {
        const bool branch_taken_0x188d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d90) {
            ctx->pc = 0x188DC4u;
            return;
        }
    }
    ctx->pc = 0x188D98u;
}
