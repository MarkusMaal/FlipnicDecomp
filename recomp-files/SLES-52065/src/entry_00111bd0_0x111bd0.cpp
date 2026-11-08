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

// Function: entry_00111bd0
// Address: 0x111bd0 - 0x111bf0
void entry_00111bd0_0x111bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111bd0_0x111bd0");
#endif

    ctx->pc = 0x111bd0u;

    // 0x111bd0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x111bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x111bd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x111bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111bd8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x111BD8u;
    {
        const bool branch_taken_0x111bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111bd8) {
            ctx->pc = 0x111BA0u;
            return;
        }
    }
    ctx->pc = 0x111BE0u;
    // 0x111be0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111be8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x111BE8u;
    {
        const bool branch_taken_0x111be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BE8u;
        // 0x111bec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111be8) {
            ctx->pc = 0x111C84u;
            return;
        }
    }
    ctx->pc = 0x111BF0u;
}
