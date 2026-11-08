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

// Function: entry_001b2ad0
// Address: 0x1b2ad0 - 0x1b2af0
void entry_001b2ad0_0x1b2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ad0_0x1b2ad0");
#endif

    ctx->pc = 0x1b2ad0u;

    // 0x1b2ad0: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x1b2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1b2ad4: 0x2644ffa0  addiu       $a0, $s2, -0x60
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b2ad8: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1b2ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b2adc: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1b2ae0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2AE0u;
    {
        const bool branch_taken_0x1b2ae0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AE0u;
        // 0x1b2ae4: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ae0) {
            ctx->pc = 0x1B2AF0u;
            return;
        }
    }
    ctx->pc = 0x1B2AE8u;
    // 0x1b2ae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2aec: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1b2af0u;
}
