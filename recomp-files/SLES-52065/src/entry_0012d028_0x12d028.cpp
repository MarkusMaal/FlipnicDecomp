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

// Function: entry_0012d028
// Address: 0x12d028 - 0x12d03c
void entry_0012d028_0x12d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d028_0x12d028");
#endif

    ctx->pc = 0x12d028u;

    // 0x12d028: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x12d028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12d02c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D02Cu;
    {
        const bool branch_taken_0x12d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D02Cu;
        // 0x12d030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d02c) {
            ctx->pc = 0x12D03Cu;
            return;
        }
    }
    ctx->pc = 0x12D034u;
    // 0x12d034: 0xc04b490  jal         func_12D240
    ctx->pc = 0x12D034u;
    SET_GPR_U32(ctx, 31, 0x12D03Cu);
    ctx->pc = 0x12D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D240u, 0x12D034u, 0x12D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D03Cu;
}
