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

// Function: entry_0011b5b0
// Address: 0x11b5b0 - 0x11b5d0
void entry_0011b5b0_0x11b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b5b0_0x11b5b0");
#endif

    ctx->pc = 0x11b5b0u;

    // 0x11b5b0: 0x81270000  lb          $a3, 0x0($t1)
    ctx->pc = 0x11b5b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11b5b4: 0x28e30061  slti        $v1, $a3, 0x61
    ctx->pc = 0x11b5b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x11b5b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B5B8u;
    {
        const bool branch_taken_0x11b5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5B8u;
        // 0x11b5bc: 0x28e1007b  slti        $at, $a3, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5b8) {
            ctx->pc = 0x11B5D0u;
            return;
        }
    }
    ctx->pc = 0x11B5C0u;
    // 0x11b5c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B5C0u;
    {
        const bool branch_taken_0x11b5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5C0u;
        // 0x11b5c4: 0x24e3ffe0  addiu       $v1, $a3, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5c0) {
            ctx->pc = 0x11B5D0u;
            return;
        }
    }
    ctx->pc = 0x11B5C8u;
    // 0x11b5c8: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x11b5c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b5cc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x11b5ccu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    ctx->pc = 0x11b5d0u;
}
