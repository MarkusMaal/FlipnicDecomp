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

// Function: entry_0014d4e4
// Address: 0x14d4e4 - 0x14d4f4
void entry_0014d4e4_0x14d4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d4e4_0x14d4e4");
#endif

    ctx->pc = 0x14d4e4u;

    // 0x14d4e4: 0x0  nop
    ctx->pc = 0x14d4e4u;
    // NOP
    // 0x14d4e8: 0x296082b  sltu        $at, $s4, $s6
    ctx->pc = 0x14d4e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d4ec: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x14D4ECu;
    {
        const bool branch_taken_0x14d4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4ECu;
        // 0x14d4f0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4ec) {
            ctx->pc = 0x14D5E4u;
            return;
        }
    }
    ctx->pc = 0x14D4F4u;
}
