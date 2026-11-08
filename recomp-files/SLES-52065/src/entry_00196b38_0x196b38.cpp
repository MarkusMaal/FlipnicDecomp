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

// Function: entry_00196b38
// Address: 0x196b38 - 0x196b60
void entry_00196b38_0x196b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196b38_0x196b38");
#endif

    ctx->pc = 0x196b38u;

    // 0x196b38: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
    // 0x196b3c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x196B3Cu;
    {
        const bool branch_taken_0x196b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196b3c) {
            ctx->pc = 0x196B68u;
            return;
        }
    }
    ctx->pc = 0x196B44u;
    // 0x196b44: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x196b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196b48: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x196b4c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x196b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x196b50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x196B50u;
    {
        const bool branch_taken_0x196b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B50u;
        // 0x196b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b50) {
            ctx->pc = 0x196B60u;
            return;
        }
    }
    ctx->pc = 0x196B58u;
    // 0x196b58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196b60u;
}
