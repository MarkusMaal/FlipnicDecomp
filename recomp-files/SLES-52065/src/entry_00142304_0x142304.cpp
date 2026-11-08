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

// Function: entry_00142304
// Address: 0x142304 - 0x142330
void entry_00142304_0x142304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142304_0x142304");
#endif

    ctx->pc = 0x142304u;

    // 0x142304: 0x0  nop
    ctx->pc = 0x142304u;
    // NOP
    // 0x142308: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14230c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x142310: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x142310u;
    {
        const bool branch_taken_0x142310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142310) {
            ctx->pc = 0x1423B4u;
            return;
        }
    }
    ctx->pc = 0x142318u;
    // 0x142318: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14231c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14231Cu;
    {
        const bool branch_taken_0x14231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14231Cu;
        // 0x142320: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14231c) {
            ctx->pc = 0x1423B4u;
            return;
        }
    }
    ctx->pc = 0x142324u;
    // 0x142324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x142324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142328: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142328u;
    {
        const bool branch_taken_0x142328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142328u;
        // 0x14232c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142328) {
            ctx->pc = 0x14239Cu;
            return;
        }
    }
    ctx->pc = 0x142330u;
}
