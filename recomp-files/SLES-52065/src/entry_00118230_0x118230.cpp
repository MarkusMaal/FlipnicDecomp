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

// Function: entry_00118230
// Address: 0x118230 - 0x11823c
void entry_00118230_0x118230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118230_0x118230");
#endif

    ctx->pc = 0x118230u;

    // 0x118230: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x118230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118234: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x118234u;
    {
        const bool branch_taken_0x118234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x118238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118234u;
        // 0x118238: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118234) {
            ctx->pc = 0x118320u;
            return;
        }
    }
    ctx->pc = 0x11823Cu;
}
