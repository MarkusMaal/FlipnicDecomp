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

// Function: entry_00137ce0
// Address: 0x137ce0 - 0x137cf0
void entry_00137ce0_0x137ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ce0_0x137ce0");
#endif

    ctx->pc = 0x137ce0u;

    // 0x137ce0: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x137ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x137ce4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x137CE4u;
    {
        const bool branch_taken_0x137ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CE4u;
        // 0x137ce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ce4) {
            ctx->pc = 0x137CF0u;
            return;
        }
    }
    ctx->pc = 0x137CECu;
    // 0x137cec: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x137cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x137cf0u;
}
