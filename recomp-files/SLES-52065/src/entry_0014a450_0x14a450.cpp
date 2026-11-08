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

// Function: entry_0014a450
// Address: 0x14a450 - 0x14a464
void entry_0014a450_0x14a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a450_0x14a450");
#endif

    ctx->pc = 0x14a450u;

    // 0x14a450: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x14a450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a454: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14A454u;
    {
        const bool branch_taken_0x14a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A454u;
        // 0x14a458: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a454) {
            ctx->pc = 0x14A3DCu;
            return;
        }
    }
    ctx->pc = 0x14A45Cu;
    // 0x14a45c: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x14A45Cu;
    {
        const bool branch_taken_0x14a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a45c) {
            ctx->pc = 0x14AB20u;
            return;
        }
    }
    ctx->pc = 0x14A464u;
}
