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

// Function: entry_00194758
// Address: 0x194758 - 0x194770
void entry_00194758_0x194758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194758_0x194758");
#endif

    ctx->pc = 0x194758u;

    // 0x194758: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x194758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19475c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x194760: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x194760u;
    {
        const bool branch_taken_0x194760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194760) {
            ctx->pc = 0x194770u;
            return;
        }
    }
    ctx->pc = 0x194768u;
    // 0x194768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194768u;
    {
        const bool branch_taken_0x194768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194768u;
        // 0x19476c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194768) {
            ctx->pc = 0x194778u;
            return;
        }
    }
    ctx->pc = 0x194770u;
}
