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

// Function: entry_0019e694
// Address: 0x19e694 - 0x19e6a4
void entry_0019e694_0x19e694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e694_0x19e694");
#endif

    ctx->pc = 0x19e694u;

    // 0x19e694: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e698: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19E698u;
    {
        const bool branch_taken_0x19e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E698u;
        // 0x19e69c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e698) {
            ctx->pc = 0x19E730u;
            return;
        }
    }
    ctx->pc = 0x19E6A0u;
    // 0x19e6a0: 0x2329821  addu        $s3, $s1, $s2
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->pc = 0x19e6a4u;
}
