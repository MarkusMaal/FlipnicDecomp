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

// Function: caseD_15
// Address: 0x195d10 - 0x195d58
void caseD_15_0x195d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x195d10");
#endif

    switch (ctx->pc) {
        case 0x195d40u: goto label_195d40;
        default: break;
    }

    ctx->pc = 0x195d10u;

    // 0x195d10: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195d14: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195d1c: 0x8f91831c  lw          $s1, -0x7CE4($gp)
    ctx->pc = 0x195d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    // 0x195d20: 0x9072002e  lbu         $s2, 0x2E($v1)
    ctx->pc = 0x195d20u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x195d24: 0xaf82831c  sw          $v0, -0x7CE4($gp)
    ctx->pc = 0x195d24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 2));
    // 0x195d28: 0xa062002e  sb          $v0, 0x2E($v1)
    ctx->pc = 0x195d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x195d2c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195d30: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
    // 0x195d34: 0xa06201d3  sb          $v0, 0x1D3($v1)
    ctx->pc = 0x195d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x195d38: 0xc046280  jal         func_118A00
    ctx->pc = 0x195D38u;
    SET_GPR_U32(ctx, 31, 0x195D40u);
    ctx->pc = 0x195D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D38u;
    // 0x195d3c: 0x8f8483a0  lw          $a0, -0x7C60($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A00u, 0x195D38u, 0x195D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D40u;
label_195d40:
    // 0x195d40: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195d44: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
    // 0x195d48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195D48u;
    {
        const bool branch_taken_0x195d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x195D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D48u;
        // 0x195d4c: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d48) {
            ctx->pc = 0x195D58u;
            return;
        }
    }
    ctx->pc = 0x195D50u;
    // 0x195d50: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195d54: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x195d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x195d58u;
}
