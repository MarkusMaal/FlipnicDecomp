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

// Function: entry_001da308
// Address: 0x1da308 - 0x1da350
void entry_001da308_0x1da308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da308_0x1da308");
#endif

    ctx->pc = 0x1da308u;

    // 0x1da308: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da30c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1da30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da310: 0x246371d4  addiu       $v1, $v1, 0x71D4
    ctx->pc = 0x1da310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29140));
    // 0x1da314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da318: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA318u;
    {
        const bool branch_taken_0x1da318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1DA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA318u;
        // 0x1da31c: 0x3c090038  lui         $t1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da318) {
            ctx->pc = 0x1DA350u;
            return;
        }
    }
    ctx->pc = 0x1DA320u;
    // 0x1da320: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1da320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1da324: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da328: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da32c: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da334: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da338: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da33c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da344: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1da348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA348u;
    {
        const bool branch_taken_0x1da348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA348u;
        // 0x1da34c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da348) {
            ctx->pc = 0x1DA354u;
            return;
        }
    }
    ctx->pc = 0x1DA350u;
}
