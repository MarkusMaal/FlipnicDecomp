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

// Function: entry_001ec590
// Address: 0x1ec590 - 0x1ec598
void entry_001ec590_0x1ec590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec590_0x1ec590");
#endif

    ctx->pc = 0x1ec590u;

    // 0x1ec590: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC590u;
    {
        const bool branch_taken_0x1ec590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC590u;
        // 0x1ec594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec590) {
            ctx->pc = 0x1EC5D4u;
            return;
        }
    }
    ctx->pc = 0x1EC598u;
}
