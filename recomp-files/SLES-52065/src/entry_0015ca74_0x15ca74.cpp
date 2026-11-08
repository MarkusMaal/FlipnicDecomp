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

// Function: entry_0015ca74
// Address: 0x15ca74 - 0x15ca90
void entry_0015ca74_0x15ca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca74_0x15ca74");
#endif

    ctx->pc = 0x15ca74u;

    // 0x15ca74: 0x0  nop
    ctx->pc = 0x15ca74u;
    // NOP
    // 0x15ca78: 0x8eb02c20  lw          $s0, 0x2C20($s5)
    ctx->pc = 0x15ca78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11296)));
    // 0x15ca7c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15ca7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15ca80: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x15CA80u;
    {
        const bool branch_taken_0x15ca80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA80u;
        // 0x15ca84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca80) {
            ctx->pc = 0x15CAE8u;
            return;
        }
    }
    ctx->pc = 0x15CA88u;
    // 0x15ca88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ca88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15ca90u;
}
