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

// Function: entry_00143990
// Address: 0x143990 - 0x1439a8
void entry_00143990_0x143990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143990_0x143990");
#endif

    ctx->pc = 0x143990u;

    // 0x143990: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143994: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x143994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143998: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14399c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1439a0: 0x1660fff1  bnez        $s3, . + 4 + (-0xF << 2)
    ctx->pc = 0x1439A0u;
    {
        const bool branch_taken_0x1439a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1439A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439A0u;
        // 0x1439a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439a0) {
            ctx->pc = 0x143968u;
            return;
        }
    }
    ctx->pc = 0x1439A8u;
}
