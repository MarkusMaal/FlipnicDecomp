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

// Function: caseD_34
// Address: 0x1ed340 - 0x1ed358
void caseD_34_0x1ed340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_34_0x1ed340");
#endif

    ctx->pc = 0x1ed340u;

    // 0x1ed340: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ed344: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED344u;
    {
        const bool branch_taken_0x1ed344 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED344u;
        // 0x1ed348: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed344) {
            ctx->pc = 0x1ED358u;
            return;
        }
    }
    ctx->pc = 0x1ED34Cu;
    // 0x1ed34c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed34cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ed350: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED350u;
    {
        const bool branch_taken_0x1ed350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED350u;
        // 0x1ed354: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed350) {
            ctx->pc = 0x1ED36Cu;
            return;
        }
    }
    ctx->pc = 0x1ED358u;
}
