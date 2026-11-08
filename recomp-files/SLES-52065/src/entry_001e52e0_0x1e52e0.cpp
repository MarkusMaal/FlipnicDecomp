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

// Function: entry_001e52e0
// Address: 0x1e52e0 - 0x1e52fc
void entry_001e52e0_0x1e52e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e52e0_0x1e52e0");
#endif

    ctx->pc = 0x1e52e0u;

    // 0x1e52e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e52e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e52e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e52e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e52ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E52ECu;
    {
        const bool branch_taken_0x1e52ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52ECu;
        // 0x1e52f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52ec) {
            ctx->pc = 0x1E52FCu;
            return;
        }
    }
    ctx->pc = 0x1E52F4u;
    // 0x1e52f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e52f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e52f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e52fcu;
}
