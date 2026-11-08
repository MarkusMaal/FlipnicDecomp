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

// Function: entry_0017a840
// Address: 0x17a840 - 0x17a860
void entry_0017a840_0x17a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a840_0x17a840");
#endif

    ctx->pc = 0x17a840u;

    // 0x17a840: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x17a840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x17a844: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
    ctx->pc = 0x17A844u;
    {
        const bool branch_taken_0x17a844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a844) {
            ctx->pc = 0x17A6D0u;
            return;
        }
    }
    ctx->pc = 0x17A84Cu;
    // 0x17a84c: 0x8e030424  lw          $v1, 0x424($s0)
    ctx->pc = 0x17a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
    // 0x17a850: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x17A850u;
    {
        const bool branch_taken_0x17a850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A850u;
        // 0x17a854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a850) {
            ctx->pc = 0x17A928u;
            return;
        }
    }
    ctx->pc = 0x17A858u;
    // 0x17a858: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x17A858u;
    {
        const bool branch_taken_0x17a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a858) {
            ctx->pc = 0x17A914u;
            return;
        }
    }
    ctx->pc = 0x17A860u;
}
