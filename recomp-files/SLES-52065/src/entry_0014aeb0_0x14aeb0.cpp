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

// Function: entry_0014aeb0
// Address: 0x14aeb0 - 0x14aee8
void entry_0014aeb0_0x14aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aeb0_0x14aeb0");
#endif

    ctx->pc = 0x14aeb0u;

    // 0x14aeb0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x14aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x14aeb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14aeb8: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x14aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x14aebc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x14aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14aec0: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x14aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14aec4: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x14aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x14aec8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aecc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14aed0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x14aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14aed4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14aed8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14aedc: 0x14e50002  bne         $a3, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AEDCu;
    {
        const bool branch_taken_0x14aedc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x14aedc) {
            ctx->pc = 0x14AEE8u;
            return;
        }
    }
    ctx->pc = 0x14AEE4u;
    // 0x14aee4: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x14aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x14aee8u;
}
