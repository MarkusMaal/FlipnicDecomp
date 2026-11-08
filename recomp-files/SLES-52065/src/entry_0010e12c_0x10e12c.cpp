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

// Function: entry_0010e12c
// Address: 0x10e12c - 0x10e148
void entry_0010e12c_0x10e12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e12c_0x10e12c");
#endif

    ctx->pc = 0x10e12cu;

    // 0x10e12c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x10e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x10e130: 0x8c632830  lw          $v1, 0x2830($v1)
    ctx->pc = 0x10e130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10288)));
    // 0x10e134: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x10E134u;
    {
        const bool branch_taken_0x10e134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E134u;
        // 0x10e138: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e134) {
            ctx->pc = 0x10E1D8u;
            return;
        }
    }
    ctx->pc = 0x10E13Cu;
    // 0x10e13c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e140: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10E140u;
    {
        const bool branch_taken_0x10e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E140u;
        // 0x10e144: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e140) {
            ctx->pc = 0x10E1C0u;
            return;
        }
    }
    ctx->pc = 0x10E148u;
}
