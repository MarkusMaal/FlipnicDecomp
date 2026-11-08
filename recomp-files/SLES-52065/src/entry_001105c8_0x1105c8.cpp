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

// Function: entry_001105c8
// Address: 0x1105c8 - 0x1105d4
void entry_001105c8_0x1105c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105c8_0x1105c8");
#endif

    ctx->pc = 0x1105c8u;

    // 0x1105c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1105c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1105CCu;
    {
        const bool branch_taken_0x1105cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105CCu;
        // 0x1105d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105cc) {
            ctx->pc = 0x110604u;
            return;
        }
    }
    ctx->pc = 0x1105D4u;
}
