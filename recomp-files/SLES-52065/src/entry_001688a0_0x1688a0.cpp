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

// Function: entry_001688a0
// Address: 0x1688a0 - 0x1688b4
void entry_001688a0_0x1688a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001688a0_0x1688a0");
#endif

    ctx->pc = 0x1688a0u;

    // 0x1688a0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x1688a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x1688a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1688a8: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1688A8u;
    {
        const bool branch_taken_0x1688a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1688ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688A8u;
        // 0x1688ac: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688a8) {
            ctx->pc = 0x1688B4u;
            return;
        }
    }
    ctx->pc = 0x1688B0u;
    // 0x1688b0: 0xac8301d4  sw          $v1, 0x1D4($a0)
    ctx->pc = 0x1688b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
    ctx->pc = 0x1688b4u;
}
