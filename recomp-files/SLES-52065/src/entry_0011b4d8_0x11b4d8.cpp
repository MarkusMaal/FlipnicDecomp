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

// Function: entry_0011b4d8
// Address: 0x11b4d8 - 0x11b4f8
void entry_0011b4d8_0x11b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b4d8_0x11b4d8");
#endif

    ctx->pc = 0x11b4d8u;

    // 0x11b4d8: 0x806f0000  lb          $t7, 0x0($v1)
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b4dc: 0x29e30061  slti        $v1, $t7, 0x61
    ctx->pc = 0x11b4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x11b4e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B4E0u;
    {
        const bool branch_taken_0x11b4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E0u;
        // 0x11b4e4: 0x29e1007b  slti        $at, $t7, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e0) {
            ctx->pc = 0x11B4F8u;
            return;
        }
    }
    ctx->pc = 0x11B4E8u;
    // 0x11b4e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B4E8u;
    {
        const bool branch_taken_0x11b4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E8u;
        // 0x11b4ec: 0x25e3ffe0  addiu       $v1, $t7, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e8) {
            ctx->pc = 0x11B4F8u;
            return;
        }
    }
    ctx->pc = 0x11B4F0u;
    // 0x11b4f0: 0x37e3c  dsll32      $t7, $v1, 24
    ctx->pc = 0x11b4f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b4f4: 0xf7e3f  dsra32      $t7, $t7, 24
    ctx->pc = 0x11b4f4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 24));
    ctx->pc = 0x11b4f8u;
}
