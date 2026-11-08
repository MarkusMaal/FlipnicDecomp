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

// Function: caseD_3f
// Address: 0x1ed1c4 - 0x1ed1dc
void caseD_3f_0x1ed1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3f_0x1ed1c4");
#endif

    ctx->pc = 0x1ed1c4u;

    // 0x1ed1c4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1ed1c8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED1C8u;
    {
        const bool branch_taken_0x1ed1c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1C8u;
        // 0x1ed1cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1c8) {
            ctx->pc = 0x1ED1DCu;
            return;
        }
    }
    ctx->pc = 0x1ED1D0u;
    // 0x1ed1d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ed1d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED1D4u;
    {
        const bool branch_taken_0x1ed1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1D4u;
        // 0x1ed1d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1d4) {
            ctx->pc = 0x1ED1F0u;
            return;
        }
    }
    ctx->pc = 0x1ED1DCu;
}
