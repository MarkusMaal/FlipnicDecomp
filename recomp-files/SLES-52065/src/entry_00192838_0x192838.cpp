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

// Function: entry_00192838
// Address: 0x192838 - 0x192874
void entry_00192838_0x192838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192838_0x192838");
#endif

    switch (ctx->pc) {
        case 0x192860u: goto label_192860;
        default: break;
    }

    ctx->pc = 0x192838u;

    // 0x192838: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19283c: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x19283cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x192840: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x192840u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x192844: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192844u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x192848: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x192848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x19284c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192850: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192850u;
    {
        const bool branch_taken_0x192850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192850u;
        // 0x192854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192850) {
            ctx->pc = 0x192874u;
            return;
        }
    }
    ctx->pc = 0x192858u;
    // 0x192858: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x192858u;
    SET_GPR_U32(ctx, 31, 0x192860u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x192858u, 0x192860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192860u;
label_192860:
    // 0x192860: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x192860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192864: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192868: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x192868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19286c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19286Cu;
    {
        const bool branch_taken_0x19286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19286Cu;
        // 0x192870: 0x7c430560  sq          $v1, 0x560($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 1376), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19286c) {
            ctx->pc = 0x19288Cu;
            return;
        }
    }
    ctx->pc = 0x192874u;
}
