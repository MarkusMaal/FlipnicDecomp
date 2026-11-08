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

// Function: entry_0019fcb4
// Address: 0x19fcb4 - 0x19fcc0
void entry_0019fcb4_0x19fcb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcb4_0x19fcb4");
#endif

    ctx->pc = 0x19fcb4u;

    // 0x19fcb4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcb8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19FCB8u;
    {
        const bool branch_taken_0x19fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB8u;
        // 0x19fcbc: 0x8c5028dc  lw          $s0, 0x28DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcb8) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FCC0u;
}
