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

// Function: entry_00102ce4
// Address: 0x102ce4 - 0x102cf8
void entry_00102ce4_0x102ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102ce4_0x102ce4");
#endif

    ctx->pc = 0x102ce4u;

    // 0x102ce4: 0x0  nop
    ctx->pc = 0x102ce4u;
    // NOP
    // 0x102ce8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102CE8u;
    {
        const bool branch_taken_0x102ce8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CE8u;
        // 0x102cec: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ce8) {
            ctx->pc = 0x102CF8u;
            return;
        }
    }
    ctx->pc = 0x102CF0u;
    // 0x102cf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102CF0u;
    {
        const bool branch_taken_0x102cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CF0u;
        // 0x102cf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cf0) {
            ctx->pc = 0x102D10u;
            return;
        }
    }
    ctx->pc = 0x102CF8u;
}
