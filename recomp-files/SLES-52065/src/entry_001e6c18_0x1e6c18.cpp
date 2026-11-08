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

// Function: entry_001e6c18
// Address: 0x1e6c18 - 0x1e6c28
void entry_001e6c18_0x1e6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6c18_0x1e6c18");
#endif

    ctx->pc = 0x1e6c18u;

    // 0x1e6c18: 0x87082b  sltu        $at, $a0, $a3
    ctx->pc = 0x1e6c18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1e6c1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6C1Cu;
    {
        const bool branch_taken_0x1e6c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C1Cu;
        // 0x1e6c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c1c) {
            ctx->pc = 0x1E6C28u;
            return;
        }
    }
    ctx->pc = 0x1E6C24u;
    // 0x1e6c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1e6c28u;
}
