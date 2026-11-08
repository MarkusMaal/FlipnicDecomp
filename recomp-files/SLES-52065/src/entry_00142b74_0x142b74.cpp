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

// Function: entry_00142b74
// Address: 0x142b74 - 0x142ba0
void entry_00142b74_0x142b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142b74_0x142b74");
#endif

    ctx->pc = 0x142b74u;

    // 0x142b74: 0x0  nop
    ctx->pc = 0x142b74u;
    // NOP
    // 0x142b78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142b7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x142b80: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x142B80u;
    {
        const bool branch_taken_0x142b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b80) {
            ctx->pc = 0x142C24u;
            return;
        }
    }
    ctx->pc = 0x142B88u;
    // 0x142b88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142b8c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x142B8Cu;
    {
        const bool branch_taken_0x142b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B8Cu;
        // 0x142b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b8c) {
            ctx->pc = 0x142C24u;
            return;
        }
    }
    ctx->pc = 0x142B94u;
    // 0x142b94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142B98u;
    {
        const bool branch_taken_0x142b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B98u;
        // 0x142b9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b98) {
            ctx->pc = 0x142C0Cu;
            return;
        }
    }
    ctx->pc = 0x142BA0u;
}
