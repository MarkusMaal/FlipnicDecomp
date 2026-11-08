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

// Function: entry_001aa2fc
// Address: 0x1aa2fc - 0x1aa344
void entry_001aa2fc_0x1aa2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa2fc_0x1aa2fc");
#endif

    switch (ctx->pc) {
        case 0x1aa334u: goto label_1aa334;
        default: break;
    }

    ctx->pc = 0x1aa2fcu;

label_1aa2fc:
    // 0x1aa2fc: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1aa300: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aa304: 0x8c8306b8  lw          $v1, 0x6B8($a0)
    ctx->pc = 0x1aa304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
    // 0x1aa308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa30c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa314: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1aa318: 0xa04501d3  sb          $a1, 0x1D3($v0)
    ctx->pc = 0x1aa318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 5));
    // 0x1aa31c: 0x8c8306b8  lw          $v1, 0x6B8($a0)
    ctx->pc = 0x1aa31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
    // 0x1aa320: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aa324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa32c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1AA32Cu;
    SET_GPR_U32(ctx, 31, 0x1AA334u);
    ctx->pc = 0x1AA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA32Cu;
    // 0x1aa330: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1AA32Cu, 0x1AA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA334u;
label_1aa334:
    // 0x1aa334: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1aa338: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1aa338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1aa33c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1AA33Cu;
    {
        const bool branch_taken_0x1aa33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA33Cu;
        // 0x1aa340: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa33c) {
            ctx->pc = 0x1AA2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa2fc;
        }
    }
    ctx->pc = 0x1AA344u;
}
