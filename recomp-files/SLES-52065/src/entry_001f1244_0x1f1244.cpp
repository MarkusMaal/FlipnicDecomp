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

// Function: entry_001f1244
// Address: 0x1f1244 - 0x1f1258
void entry_001f1244_0x1f1244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1244_0x1f1244");
#endif

    ctx->pc = 0x1f1244u;

    // 0x1f1244: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1244u;
    {
        const bool branch_taken_0x1f1244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1244) {
            ctx->pc = 0x1F1258u;
            return;
        }
    }
    ctx->pc = 0x1F124Cu;
    // 0x1f124c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1250: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1250u;
    {
        const bool branch_taken_0x1f1250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1250) {
            ctx->pc = 0x1F1254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1250u;
            // 0x1f1254: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1268u;
            return;
        }
    }
    ctx->pc = 0x1F1258u;
}
