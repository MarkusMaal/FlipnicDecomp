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

// Function: caseD_31
// Address: 0x205970 - 0x205998
void caseD_31_0x205970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_31_0x205970");
#endif

    ctx->pc = 0x205970u;

    // 0x205970: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x205970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x205974: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x205978: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x205978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
    // 0x20597c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20597cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x205980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205984: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x205984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x205988: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x205988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20598c: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x20598cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
    // 0x205990: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x205990u;
    {
        const bool branch_taken_0x205990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205990u;
        // 0x205994: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205990) {
            ctx->pc = 0x205A10u;
            return;
        }
    }
    ctx->pc = 0x205998u;
}
