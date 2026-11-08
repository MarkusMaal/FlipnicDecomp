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

// Function: entry_001e3bfc
// Address: 0x1e3bfc - 0x1e3c0c
void entry_001e3bfc_0x1e3bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3bfc_0x1e3bfc");
#endif

    ctx->pc = 0x1e3bfcu;

    // 0x1e3bfc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3BFCu;
    {
        const bool branch_taken_0x1e3bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3bfc) {
            ctx->pc = 0x1E3C0Cu;
            return;
        }
    }
    ctx->pc = 0x1E3C04u;
    // 0x1e3c04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3C04u;
    {
        const bool branch_taken_0x1e3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C04u;
        // 0x1e3c08: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c04) {
            ctx->pc = 0x1E3C14u;
            return;
        }
    }
    ctx->pc = 0x1E3C0Cu;
}
