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

// Function: entry_00192678
// Address: 0x192678 - 0x192688
void entry_00192678_0x192678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192678_0x192678");
#endif

    ctx->pc = 0x192678u;

    // 0x192678: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x192678u;
    {
        const bool branch_taken_0x192678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192678u;
        // 0x19267c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192678) {
            ctx->pc = 0x1926DCu;
            return;
        }
    }
    ctx->pc = 0x192680u;
    // 0x192680: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x192680u;
    {
        const bool branch_taken_0x192680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192680) {
            ctx->pc = 0x1926CCu;
            return;
        }
    }
    ctx->pc = 0x192688u;
}
