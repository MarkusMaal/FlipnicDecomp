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

// Function: entry_0014da64
// Address: 0x14da64 - 0x14da74
void entry_0014da64_0x14da64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da64_0x14da64");
#endif

    ctx->pc = 0x14da64u;

    // 0x14da64: 0x0  nop
    ctx->pc = 0x14da64u;
    // NOP
    // 0x14da68: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x14da68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14da6c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x14DA6Cu;
    {
        const bool branch_taken_0x14da6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA6Cu;
        // 0x14da70: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da6c) {
            ctx->pc = 0x14DB58u;
            return;
        }
    }
    ctx->pc = 0x14DA74u;
}
