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

// Function: entry_001e0790
// Address: 0x1e0790 - 0x1e07a0
void entry_001e0790_0x1e0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0790_0x1e0790");
#endif

    ctx->pc = 0x1e0790u;

    // 0x1e0790: 0x51020061  beql        $t0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1E0790u;
    {
        const bool branch_taken_0x1e0790 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0790) {
            ctx->pc = 0x1E0794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0790u;
            // 0x1e0794: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0918u;
            return;
        }
    }
    ctx->pc = 0x1E0798u;
    // 0x1e0798: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E0798u;
    {
        const bool branch_taken_0x1e0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0798u;
        // 0x1e079c: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0798) {
            ctx->pc = 0x1E0940u;
            return;
        }
    }
    ctx->pc = 0x1E07A0u;
}
