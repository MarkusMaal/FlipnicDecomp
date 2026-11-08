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

// Function: entry_00111d14
// Address: 0x111d14 - 0x111d38
void entry_00111d14_0x111d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d14_0x111d14");
#endif

    ctx->pc = 0x111d14u;

    // 0x111d14: 0x0  nop
    ctx->pc = 0x111d14u;
    // NOP
    // 0x111d18: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x111d1c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x111d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111d20: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x111D20u;
    {
        const bool branch_taken_0x111d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111d20) {
            ctx->pc = 0x111CE0u;
            return;
        }
    }
    ctx->pc = 0x111D28u;
    // 0x111d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111D30u;
    {
        const bool branch_taken_0x111d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D30u;
        // 0x111d34: 0x2404ffdf  addiu       $a0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d30) {
            ctx->pc = 0x111D68u;
            return;
        }
    }
    ctx->pc = 0x111D38u;
}
