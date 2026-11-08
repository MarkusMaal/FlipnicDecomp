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

// Function: caseD_9
// Address: 0x127bf8 - 0x127c04
void caseD_9_0x127bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x127bf8");
#endif

    ctx->pc = 0x127bf8u;

    // 0x127bf8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x127bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x127BFCu;
    {
        const bool branch_taken_0x127bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BFCu;
        // 0x127c00: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bfc) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127C04u;
}
