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

// Function: entry_0020553c
// Address: 0x20553c - 0x20554c
void entry_0020553c_0x20553c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020553c_0x20553c");
#endif

    ctx->pc = 0x20553cu;

    // 0x20553c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x205540: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205544: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
    ctx->pc = 0x205544u;
    {
        const bool branch_taken_0x205544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205544u;
        // 0x205548: 0xac9e0000  sw          $fp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205544) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x20554Cu;
}
