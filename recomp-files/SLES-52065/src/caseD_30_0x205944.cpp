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

// Function: caseD_30
// Address: 0x205944 - 0x205960
void caseD_30_0x205944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x205944");
#endif

    ctx->pc = 0x205944u;

    // 0x205944: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x205944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x205948: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205948u;
    {
        const bool branch_taken_0x205948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205948u;
        // 0x20594c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205948) {
            ctx->pc = 0x205960u;
            return;
        }
    }
    ctx->pc = 0x205950u;
    // 0x205950: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x205954: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x205954u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
    // 0x205958: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x205958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x20595c: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x20595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
    ctx->pc = 0x205960u;
}
