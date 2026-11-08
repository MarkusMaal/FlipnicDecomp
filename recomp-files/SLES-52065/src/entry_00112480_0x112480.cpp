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

// Function: entry_00112480
// Address: 0x112480 - 0x11248c
void entry_00112480_0x112480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112480_0x112480");
#endif

    ctx->pc = 0x112480u;

    // 0x112480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112484: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112484u;
    {
        const bool branch_taken_0x112484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112484u;
        // 0x112488: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112484) {
            ctx->pc = 0x1124BCu;
            return;
        }
    }
    ctx->pc = 0x11248Cu;
}
