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

// Function: entry_001e82c4
// Address: 0x1e82c4 - 0x1e82d4
void entry_001e82c4_0x1e82c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e82c4_0x1e82c4");
#endif

    ctx->pc = 0x1e82c4u;

    // 0x1e82c4: 0x0  nop
    ctx->pc = 0x1e82c4u;
    // NOP
    // 0x1e82c8: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x1e82c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e82cc: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E82CCu;
    {
        const bool branch_taken_0x1e82cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82CCu;
        // 0x1e82d0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82cc) {
            ctx->pc = 0x1E83F4u;
            return;
        }
    }
    ctx->pc = 0x1E82D4u;
}
