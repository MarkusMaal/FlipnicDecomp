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

// Function: entry_001ec9a4
// Address: 0x1ec9a4 - 0x1ec9b8
void entry_001ec9a4_0x1ec9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec9a4_0x1ec9a4");
#endif

    ctx->pc = 0x1ec9a4u;

    // 0x1ec9a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec9a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ec9ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ec9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ec9b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EC9B0u;
    {
        const bool branch_taken_0x1ec9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9B0u;
        // 0x1ec9b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9b0) {
            ctx->pc = 0x1ECA88u;
            return;
        }
    }
    ctx->pc = 0x1EC9B8u;
}
