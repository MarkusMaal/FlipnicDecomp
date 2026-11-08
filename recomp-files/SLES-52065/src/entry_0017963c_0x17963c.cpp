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

// Function: entry_0017963c
// Address: 0x17963c - 0x179664
void entry_0017963c_0x17963c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017963c_0x17963c");
#endif

    ctx->pc = 0x17963cu;

    // 0x17963c: 0x0  nop
    ctx->pc = 0x17963cu;
    // NOP
    // 0x179640: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x179640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179644: 0x47382a  slt         $a3, $v0, $a3
    ctx->pc = 0x179644u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x179648: 0x14e0ff9a  bnez        $a3, . + 4 + (-0x66 << 2)
    ctx->pc = 0x179648u;
    {
        const bool branch_taken_0x179648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179648u;
        // 0x17964c: 0x443821  addu        $a3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179648) {
            ctx->pc = 0x1794B4u;
            return;
        }
    }
    ctx->pc = 0x179650u;
    // 0x179650: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179650u;
    {
        const bool branch_taken_0x179650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179650u;
        // 0x179654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179650) {
            ctx->pc = 0x179664u;
            return;
        }
    }
    ctx->pc = 0x179658u;
    // 0x179658: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179658u;
    {
        const bool branch_taken_0x179658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x179658) {
            ctx->pc = 0x179664u;
            return;
        }
    }
    ctx->pc = 0x179660u;
    // 0x179660: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x179660u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x179664u;
}
