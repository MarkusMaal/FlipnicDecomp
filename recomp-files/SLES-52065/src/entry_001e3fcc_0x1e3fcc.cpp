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

// Function: entry_001e3fcc
// Address: 0x1e3fcc - 0x1e3fdc
void entry_001e3fcc_0x1e3fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3fcc_0x1e3fcc");
#endif

    ctx->pc = 0x1e3fccu;

    // 0x1e3fcc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3FCCu;
    {
        const bool branch_taken_0x1e3fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3fcc) {
            ctx->pc = 0x1E3FDCu;
            return;
        }
    }
    ctx->pc = 0x1E3FD4u;
    // 0x1e3fd4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E3FD4u;
    {
        const bool branch_taken_0x1e3fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FD4u;
        // 0x1e3fd8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fd4) {
            ctx->pc = 0x1E3FDCu;
            return;
        }
    }
    ctx->pc = 0x1E3FDCu;
}
