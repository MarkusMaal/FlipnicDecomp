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

// Function: entry_0011b698
// Address: 0x11b698 - 0x11b6b0
void entry_0011b698_0x11b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b698_0x11b698");
#endif

    ctx->pc = 0x11b698u;

    // 0x11b698: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B698u;
    {
        const bool branch_taken_0x11b698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B698u;
        // 0x11b69c: 0x2881007b  slti        $at, $a0, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b698) {
            ctx->pc = 0x11B6B0u;
            return;
        }
    }
    ctx->pc = 0x11B6A0u;
    // 0x11b6a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B6A0u;
    {
        const bool branch_taken_0x11b6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6A0u;
        // 0x11b6a4: 0x2483ffe0  addiu       $v1, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6a0) {
            ctx->pc = 0x11B6B0u;
            return;
        }
    }
    ctx->pc = 0x11B6A8u;
    // 0x11b6a8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x11b6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b6ac: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x11b6acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->pc = 0x11b6b0u;
}
