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

// Function: entry_0013f9a8
// Address: 0x13f9a8 - 0x13f9c0
void entry_0013f9a8_0x13f9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f9a8_0x13f9a8");
#endif

    ctx->pc = 0x13f9a8u;

    // 0x13f9a8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f9ac: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x13f9acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13f9b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F9B0u;
    {
        const bool branch_taken_0x13f9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9B0u;
        // 0x13f9b4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9b0) {
            ctx->pc = 0x13F9C0u;
            return;
        }
    }
    ctx->pc = 0x13F9B8u;
    // 0x13f9b8: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x13f9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13f9bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x13f9c0u;
}
