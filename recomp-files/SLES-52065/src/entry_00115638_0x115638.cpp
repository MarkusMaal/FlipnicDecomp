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

// Function: entry_00115638
// Address: 0x115638 - 0x11564c
void entry_00115638_0x115638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115638_0x115638");
#endif

    ctx->pc = 0x115638u;

    // 0x115638: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x115638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
    // 0x11563c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x115640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115644: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x115644u;
    {
        const bool branch_taken_0x115644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115644u;
        // 0x115648: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115644) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x11564Cu;
}
