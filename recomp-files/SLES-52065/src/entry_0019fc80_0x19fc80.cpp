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

// Function: entry_0019fc80
// Address: 0x19fc80 - 0x19fc8c
void entry_0019fc80_0x19fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc80_0x19fc80");
#endif

    ctx->pc = 0x19fc80u;

    // 0x19fc80: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fc84: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC84u;
        // 0x19fc88: 0x8c5028e4  lw          $s0, 0x28E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FC8Cu;
}
