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

// Function: entry_00208184
// Address: 0x208184 - 0x208190
void entry_00208184_0x208184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208184_0x208184");
#endif

    ctx->pc = 0x208184u;

    // 0x208184: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208184u;
    {
        const bool branch_taken_0x208184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208184) {
            ctx->pc = 0x2081A8u;
            return;
        }
    }
    ctx->pc = 0x20818Cu;
    // 0x20818c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x20818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x208190u;
}
