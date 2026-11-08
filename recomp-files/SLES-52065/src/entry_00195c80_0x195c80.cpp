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

// Function: entry_00195c80
// Address: 0x195c80 - 0x195c88
void entry_00195c80_0x195c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c80_0x195c80");
#endif

    ctx->pc = 0x195c80u;

    // 0x195c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195C80u;
    {
        const bool branch_taken_0x195c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C80u;
        // 0x195c84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c80) {
            ctx->pc = 0x195C8Cu;
            return;
        }
    }
    ctx->pc = 0x195C88u;
}
