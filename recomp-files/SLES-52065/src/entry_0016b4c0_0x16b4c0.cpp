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

// Function: entry_0016b4c0
// Address: 0x16b4c0 - 0x16b4d0
void entry_0016b4c0_0x16b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b4c0_0x16b4c0");
#endif

    ctx->pc = 0x16b4c0u;

    // 0x16b4c0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4C0u;
    {
        const bool branch_taken_0x16b4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C0u;
        // 0x16b4c4: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c0) {
            ctx->pc = 0x16B4D0u;
            return;
        }
    }
    ctx->pc = 0x16B4C8u;
    // 0x16b4c8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x16B4C8u;
    {
        const bool branch_taken_0x16b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C8u;
        // 0x16b4cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c8) {
            ctx->pc = 0x16B830u;
            return;
        }
    }
    ctx->pc = 0x16B4D0u;
}
