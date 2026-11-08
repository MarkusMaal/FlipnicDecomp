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

// Function: entry_001fdfa0
// Address: 0x1fdfa0 - 0x1fdfbc
void entry_001fdfa0_0x1fdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdfa0_0x1fdfa0");
#endif

    ctx->pc = 0x1fdfa0u;

    // 0x1fdfa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fdfa4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fdfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fdfa8: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FDFA8u;
    {
        const bool branch_taken_0x1fdfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFA8u;
        // 0x1fdfac: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfa8) {
            ctx->pc = 0x1FDFF4u;
            return;
        }
    }
    ctx->pc = 0x1FDFB0u;
    // 0x1fdfb0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fdfb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDFB4u;
    {
        const bool branch_taken_0x1fdfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFB4u;
        // 0x1fdfb8: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfb4) {
            ctx->pc = 0x1FDFC0u;
            return;
        }
    }
    ctx->pc = 0x1FDFBCu;
}
