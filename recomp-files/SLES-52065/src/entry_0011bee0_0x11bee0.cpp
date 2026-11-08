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

// Function: entry_0011bee0
// Address: 0x11bee0 - 0x11bef8
void entry_0011bee0_0x11bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bee0_0x11bee0");
#endif

    ctx->pc = 0x11bee0u;

    // 0x11bee0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11bee4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x11bee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11bee8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEE8u;
    {
        const bool branch_taken_0x11bee8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE8u;
        // 0x11beec: 0x2113f  dsra32      $v0, $v0, 4 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bee8) {
            ctx->pc = 0x11BEF8u;
            return;
        }
    }
    ctx->pc = 0x11BEF0u;
    // 0x11bef0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11bef4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11bef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x11bef8u;
}
