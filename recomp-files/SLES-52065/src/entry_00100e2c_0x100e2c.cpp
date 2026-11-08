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

// Function: entry_00100e2c
// Address: 0x100e2c - 0x100e68
void entry_00100e2c_0x100e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100e2c_0x100e2c");
#endif

    ctx->pc = 0x100e2cu;

    // 0x100e2c: 0x0  nop
    ctx->pc = 0x100e2cu;
    // NOP
    // 0x100e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100e34: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x100e38: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x100E38u;
    {
        const bool branch_taken_0x100e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100e38) {
            ctx->pc = 0x100DC0u;
            return;
        }
    }
    ctx->pc = 0x100E40u;
    // 0x100e40: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x100e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e44: 0x8c512c20  lw          $s1, 0x2C20($v0)
    ctx->pc = 0x100e44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11296)));
    // 0x100e48: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x100e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x100e4c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x100E4Cu;
    {
        const bool branch_taken_0x100e4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E4Cu;
        // 0x100e50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e4c) {
            ctx->pc = 0x100F30u;
            return;
        }
    }
    ctx->pc = 0x100E54u;
    // 0x100e54: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x100e54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x100e58: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x100E58u;
    {
        const bool branch_taken_0x100e58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E58u;
        // 0x100e5c: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e58) {
            ctx->pc = 0x100EF8u;
            return;
        }
    }
    ctx->pc = 0x100E60u;
    // 0x100e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100e68u;
}
