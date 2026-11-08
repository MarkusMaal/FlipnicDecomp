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

// Function: entry_00120c28
// Address: 0x120c28 - 0x120c34
void entry_00120c28_0x120c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120c28_0x120c28");
#endif

    ctx->pc = 0x120c28u;

    // 0x120c28: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x120c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x120c2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x120C2Cu;
    {
        const bool branch_taken_0x120c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C2Cu;
        // 0x120c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c2c) {
            ctx->pc = 0x120CA8u;
            return;
        }
    }
    ctx->pc = 0x120C34u;
}
