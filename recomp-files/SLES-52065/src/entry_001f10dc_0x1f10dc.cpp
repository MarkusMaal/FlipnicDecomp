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

// Function: entry_001f10dc
// Address: 0x1f10dc - 0x1f10f0
void entry_001f10dc_0x1f10dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f10dc_0x1f10dc");
#endif

    ctx->pc = 0x1f10dcu;

    // 0x1f10dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F10DCu;
    {
        const bool branch_taken_0x1f10dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10dc) {
            ctx->pc = 0x1F10F0u;
            return;
        }
    }
    ctx->pc = 0x1F10E4u;
    // 0x1f10e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f10e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F10E8u;
    {
        const bool branch_taken_0x1f10e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f10e8) {
            ctx->pc = 0x1F10ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F10E8u;
            // 0x1f10ec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1100u;
            return;
        }
    }
    ctx->pc = 0x1F10F0u;
}
