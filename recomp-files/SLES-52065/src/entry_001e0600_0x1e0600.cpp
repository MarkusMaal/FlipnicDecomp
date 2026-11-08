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

// Function: entry_001e0600
// Address: 0x1e0600 - 0x1e0610
void entry_001e0600_0x1e0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0600_0x1e0600");
#endif

    ctx->pc = 0x1e0600u;

    // 0x1e0600: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1E0600u;
    {
        const bool branch_taken_0x1e0600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0600u;
        // 0x1e0604: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0600) {
            ctx->pc = 0x1E0748u;
            return;
        }
    }
    ctx->pc = 0x1E0608u;
    // 0x1e0608: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1E0608u;
    {
        const bool branch_taken_0x1e0608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0608u;
        // 0x1e060c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0608) {
            ctx->pc = 0x1E0950u;
            return;
        }
    }
    ctx->pc = 0x1E0610u;
}
