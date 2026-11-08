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

// Function: entry_00117100
// Address: 0x117100 - 0x117118
void entry_00117100_0x117100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117100_0x117100");
#endif

    ctx->pc = 0x117100u;

    // 0x117100: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x117100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117104: 0x2c810080  sltiu       $at, $a0, 0x80
    ctx->pc = 0x117104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x117108: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x117108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11710c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11710Cu;
    {
        const bool branch_taken_0x11710c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x117110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11710Cu;
        // 0x117110: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11710c) {
            ctx->pc = 0x117118u;
            return;
        }
    }
    ctx->pc = 0x117114u;
    // 0x117114: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x117114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x117118u;
}
