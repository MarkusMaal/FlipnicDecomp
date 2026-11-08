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

// Function: entry_00142e2c
// Address: 0x142e2c - 0x142e58
void entry_00142e2c_0x142e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142e2c_0x142e2c");
#endif

    ctx->pc = 0x142e2cu;

    // 0x142e2c: 0x0  nop
    ctx->pc = 0x142e2cu;
    // NOP
    // 0x142e30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142e34: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x142e38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x142E38u;
    {
        const bool branch_taken_0x142e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e38) {
            ctx->pc = 0x142EDCu;
            return;
        }
    }
    ctx->pc = 0x142E40u;
    // 0x142e40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142e44: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x142E44u;
    {
        const bool branch_taken_0x142e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E44u;
        // 0x142e48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e44) {
            ctx->pc = 0x142EDCu;
            return;
        }
    }
    ctx->pc = 0x142E4Cu;
    // 0x142e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142E50u;
    {
        const bool branch_taken_0x142e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E50u;
        // 0x142e54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e50) {
            ctx->pc = 0x142EC4u;
            return;
        }
    }
    ctx->pc = 0x142E58u;
}
