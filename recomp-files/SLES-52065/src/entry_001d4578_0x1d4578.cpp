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

// Function: entry_001d4578
// Address: 0x1d4578 - 0x1d4584
void entry_001d4578_0x1d4578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4578_0x1d4578");
#endif

    ctx->pc = 0x1d4578u;

    // 0x1d4578: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D4578u;
    {
        const bool branch_taken_0x1d4578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4578u;
        // 0x1d457c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4578) {
            ctx->pc = 0x1D4540u;
            return;
        }
    }
    ctx->pc = 0x1D4580u;
    // 0x1d4580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d4584u;
}
