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

// Function: entry_0011b16c
// Address: 0x11b16c - 0x11b184
void entry_0011b16c_0x11b16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b16c_0x11b16c");
#endif

    ctx->pc = 0x11b16cu;

    // 0x11b16c: 0x0  nop
    ctx->pc = 0x11b16cu;
    // NOP
    // 0x11b170: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B170u;
    {
        const bool branch_taken_0x11b170 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b170) {
            ctx->pc = 0x11B184u;
            return;
        }
    }
    ctx->pc = 0x11B178u;
    // 0x11b178: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11b17c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B17Cu;
    {
        const bool branch_taken_0x11b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B17Cu;
        // 0x11b180: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b17c) {
            ctx->pc = 0x11B18Cu;
            return;
        }
    }
    ctx->pc = 0x11B184u;
}
