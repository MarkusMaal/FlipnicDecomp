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

// Function: entry_0019fca8
// Address: 0x19fca8 - 0x19fcb4
void entry_0019fca8_0x19fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fca8_0x19fca8");
#endif

    ctx->pc = 0x19fca8u;

    // 0x19fca8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x19FCACu;
    {
        const bool branch_taken_0x19fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCACu;
        // 0x19fcb0: 0x8c5028e8  lw          $s0, 0x28E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcac) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FCB4u;
}
