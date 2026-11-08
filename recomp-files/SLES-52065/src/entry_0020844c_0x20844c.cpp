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

// Function: entry_0020844c
// Address: 0x20844c - 0x208460
void entry_0020844c_0x20844c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020844c_0x20844c");
#endif

    ctx->pc = 0x20844cu;

    // 0x20844c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x208450: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x208450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x208454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208454u;
    {
        const bool branch_taken_0x208454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208454u;
        // 0x208458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208454) {
            ctx->pc = 0x208464u;
            return;
        }
    }
    ctx->pc = 0x20845Cu;
    // 0x20845c: 0x0  nop
    ctx->pc = 0x20845cu;
    // NOP
    ctx->pc = 0x208460u;
}
