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

// Function: entry_0016b51c
// Address: 0x16b51c - 0x16b52c
void entry_0016b51c_0x16b51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b51c_0x16b51c");
#endif

    ctx->pc = 0x16b51cu;

    // 0x16b51c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B51Cu;
    {
        const bool branch_taken_0x16b51c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B51Cu;
        // 0x16b520: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b51c) {
            ctx->pc = 0x16B52Cu;
            return;
        }
    }
    ctx->pc = 0x16B524u;
    // 0x16b524: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b528: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16b528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x16b52cu;
}
