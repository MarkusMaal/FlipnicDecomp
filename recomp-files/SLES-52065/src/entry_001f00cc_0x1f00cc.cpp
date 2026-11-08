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

// Function: entry_001f00cc
// Address: 0x1f00cc - 0x1f00e0
void entry_001f00cc_0x1f00cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f00cc_0x1f00cc");
#endif

    ctx->pc = 0x1f00ccu;

    // 0x1f00cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F00CCu;
    {
        const bool branch_taken_0x1f00cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00cc) {
            ctx->pc = 0x1F00E0u;
            return;
        }
    }
    ctx->pc = 0x1F00D4u;
    // 0x1f00d4: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f00d8: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F00D8u;
    {
        const bool branch_taken_0x1f00d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f00d8) {
            ctx->pc = 0x1F00DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F00D8u;
            // 0x1f00dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F00F0u;
            return;
        }
    }
    ctx->pc = 0x1F00E0u;
}
