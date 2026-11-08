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

// Function: entry_0016eb18
// Address: 0x16eb18 - 0x16eb24
void entry_0016eb18_0x16eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eb18_0x16eb18");
#endif

    ctx->pc = 0x16eb18u;

    // 0x16eb18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16eb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb1c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16EB1Cu;
    {
        const bool branch_taken_0x16eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB1Cu;
        // 0x16eb20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb1c) {
            ctx->pc = 0x16EBD0u;
            return;
        }
    }
    ctx->pc = 0x16EB24u;
}
