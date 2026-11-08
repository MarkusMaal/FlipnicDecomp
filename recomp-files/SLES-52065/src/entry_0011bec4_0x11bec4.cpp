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

// Function: entry_0011bec4
// Address: 0x11bec4 - 0x11bee0
void entry_0011bec4_0x11bec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bec4_0x11bec4");
#endif

    ctx->pc = 0x11bec4u;

    // 0x11bec4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x11bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x11bec8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11becc: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x11bed0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BED0u;
    {
        const bool branch_taken_0x11bed0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED0u;
        // 0x11bed4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed0) {
            ctx->pc = 0x11BEE0u;
            return;
        }
    }
    ctx->pc = 0x11BED8u;
    // 0x11bed8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bedc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x11bee0u;
}
