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

// Function: entry_0010134c
// Address: 0x10134c - 0x101384
void entry_0010134c_0x10134c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010134c_0x10134c");
#endif

    ctx->pc = 0x10134cu;

    // 0x10134c: 0x0  nop
    ctx->pc = 0x10134cu;
    // NOP
    // 0x101350: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x101350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x101354: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
    ctx->pc = 0x101354u;
    {
        const bool branch_taken_0x101354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101354) {
            ctx->pc = 0x10110Cu;
            return;
        }
    }
    ctx->pc = 0x10135Cu;
    // 0x10135c: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x101360: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x101364: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x101364u;
    {
        const bool branch_taken_0x101364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101364) {
            ctx->pc = 0x1013C0u;
            return;
        }
    }
    ctx->pc = 0x10136Cu;
    // 0x10136c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x101370: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x101374: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x101374u;
    {
        const bool branch_taken_0x101374 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x101378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101374u;
        // 0x101378: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101374) {
            ctx->pc = 0x101384u;
            return;
        }
    }
    ctx->pc = 0x10137Cu;
    // 0x10137c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10137Cu;
    {
        const bool branch_taken_0x10137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10137Cu;
        // 0x101380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10137c) {
            ctx->pc = 0x10139Cu;
            return;
        }
    }
    ctx->pc = 0x101384u;
}
