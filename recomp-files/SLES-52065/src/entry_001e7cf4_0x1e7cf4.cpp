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

// Function: entry_001e7cf4
// Address: 0x1e7cf4 - 0x1e7d04
void entry_001e7cf4_0x1e7cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7cf4_0x1e7cf4");
#endif

    ctx->pc = 0x1e7cf4u;

    // 0x1e7cf4: 0x0  nop
    ctx->pc = 0x1e7cf4u;
    // NOP
    // 0x1e7cf8: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x1e7cf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7cfc: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E7CFCu;
    {
        const bool branch_taken_0x1e7cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CFCu;
        // 0x1e7d00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cfc) {
            ctx->pc = 0x1E7E24u;
            return;
        }
    }
    ctx->pc = 0x1E7D04u;
}
