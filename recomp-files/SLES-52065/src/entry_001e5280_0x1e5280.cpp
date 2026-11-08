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

// Function: entry_001e5280
// Address: 0x1e5280 - 0x1e529c
void entry_001e5280_0x1e5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5280_0x1e5280");
#endif

    ctx->pc = 0x1e5280u;

    // 0x1e5280: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e5280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e5284: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5284u;
    {
        const bool branch_taken_0x1e5284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5284u;
        // 0x1e5288: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5284) {
            ctx->pc = 0x1E529Cu;
            return;
        }
    }
    ctx->pc = 0x1E528Cu;
    // 0x1e528c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1e5290: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5294: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1e5294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1e5298: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1e529cu;
}
