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

// Function: entry_0019fc8c
// Address: 0x19fc8c - 0x19fc98
void entry_0019fc8c_0x19fc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc8c_0x19fc8c");
#endif

    ctx->pc = 0x19fc8cu;

    // 0x19fc8c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fc90: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x19FC90u;
    {
        const bool branch_taken_0x19fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC90u;
        // 0x19fc94: 0x8c5028f0  lw          $s0, 0x28F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc90) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FC98u;
}
