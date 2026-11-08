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

// Function: entry_00174e3c
// Address: 0x174e3c - 0x174e5c
void entry_00174e3c_0x174e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e3c_0x174e3c");
#endif

    ctx->pc = 0x174e3cu;

    // 0x174e3c: 0x0  nop
    ctx->pc = 0x174e3cu;
    // NOP
    // 0x174e40: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x174e44: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174e48: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x174e48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174e4c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x174E4Cu;
    {
        const bool branch_taken_0x174e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E4Cu;
        // 0x174e50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e4c) {
            ctx->pc = 0x174DECu;
            return;
        }
    }
    ctx->pc = 0x174E54u;
    // 0x174e54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x174E54u;
    {
        const bool branch_taken_0x174e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e54) {
            ctx->pc = 0x174E78u;
            return;
        }
    }
    ctx->pc = 0x174E5Cu;
}
