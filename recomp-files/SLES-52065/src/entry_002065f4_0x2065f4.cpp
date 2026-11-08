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

// Function: entry_002065f4
// Address: 0x2065f4 - 0x206604
void entry_002065f4_0x2065f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002065f4_0x2065f4");
#endif

    ctx->pc = 0x2065f4u;

    // 0x2065f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2065F4u;
    {
        const bool branch_taken_0x2065f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065F4u;
        // 0x2065f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065f4) {
            ctx->pc = 0x206604u;
            return;
        }
    }
    ctx->pc = 0x2065FCu;
    // 0x2065fc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2065FCu;
    {
        const bool branch_taken_0x2065fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065FCu;
        // 0x206600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065fc) {
            ctx->pc = 0x2067B8u;
            return;
        }
    }
    ctx->pc = 0x206604u;
}
