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

// Function: entry_00110548
// Address: 0x110548 - 0x110564
void entry_00110548_0x110548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110548_0x110548");
#endif

    ctx->pc = 0x110548u;

    // 0x110548: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11054c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11054Cu;
    {
        const bool branch_taken_0x11054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11054c) {
            ctx->pc = 0x110504u;
            return;
        }
    }
    ctx->pc = 0x110554u;
    // 0x110554: 0x14e600f3  bne         $a3, $a2, . + 4 + (0xF3 << 2)
    ctx->pc = 0x110554u;
    {
        const bool branch_taken_0x110554 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110554u;
        // 0x110558: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110554) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x11055Cu;
    // 0x11055c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11055Cu;
    {
        const bool branch_taken_0x11055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11055Cu;
        // 0x110560: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11055c) {
            ctx->pc = 0x1105B4u;
            return;
        }
    }
    ctx->pc = 0x110564u;
}
