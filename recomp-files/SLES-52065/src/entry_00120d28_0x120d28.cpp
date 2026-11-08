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

// Function: entry_00120d28
// Address: 0x120d28 - 0x120d34
void entry_00120d28_0x120d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d28_0x120d28");
#endif

    ctx->pc = 0x120d28u;

    // 0x120d28: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x120d28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x120d2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x120D2Cu;
    {
        const bool branch_taken_0x120d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D2Cu;
        // 0x120d30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d2c) {
            ctx->pc = 0x120DA8u;
            return;
        }
    }
    ctx->pc = 0x120D34u;
}
