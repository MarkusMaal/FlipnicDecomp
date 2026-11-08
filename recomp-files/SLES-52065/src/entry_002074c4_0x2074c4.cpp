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

// Function: entry_002074c4
// Address: 0x2074c4 - 0x2074d4
void entry_002074c4_0x2074c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002074c4_0x2074c4");
#endif

    ctx->pc = 0x2074c4u;

    // 0x2074c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2074C4u;
    {
        const bool branch_taken_0x2074c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074c4) {
            ctx->pc = 0x2074C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074C4u;
            // 0x2074c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2074D4u;
            return;
        }
    }
    ctx->pc = 0x2074CCu;
    // 0x2074cc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2074CCu;
    {
        const bool branch_taken_0x2074cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074CCu;
        // 0x2074d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074cc) {
            ctx->pc = 0x207688u;
            return;
        }
    }
    ctx->pc = 0x2074D4u;
}
