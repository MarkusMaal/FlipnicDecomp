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

// Function: entry_00148c58
// Address: 0x148c58 - 0x148c64
void entry_00148c58_0x148c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148c58_0x148c58");
#endif

    ctx->pc = 0x148c58u;

    // 0x148c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148C5Cu;
    {
        const bool branch_taken_0x148c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C5Cu;
        // 0x148c60: 0xae4202bc  sw          $v0, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c5c) {
            ctx->pc = 0x148C6Cu;
            return;
        }
    }
    ctx->pc = 0x148C64u;
}
