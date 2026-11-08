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

// Function: caseD_2
// Address: 0x1a2180 - 0x1a2190
void caseD_2_0x1a2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a2180");
#endif

    ctx->pc = 0x1a2180u;

    // 0x1a2180: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A2180u;
    {
        const bool branch_taken_0x1a2180 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2180) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A2188u;
    // 0x1a2188: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2188u;
    {
        const bool branch_taken_0x1a2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2188u;
        // 0x1a218c: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2188) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A2190u;
}
