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

// Function: entry_00208464
// Address: 0x208464 - 0x208478
void entry_00208464_0x208464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208464_0x208464");
#endif

    ctx->pc = 0x208464u;

    // 0x208464: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x208464u;
    {
        const bool branch_taken_0x208464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x208464) {
            ctx->pc = 0x208468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208464u;
            // 0x208468: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208478u;
            return;
        }
    }
    ctx->pc = 0x20846Cu;
    // 0x20846c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x20846cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x208470: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x208470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x208474: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x208474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    ctx->pc = 0x208478u;
}
