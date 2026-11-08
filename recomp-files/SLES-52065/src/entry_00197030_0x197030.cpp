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

// Function: entry_00197030
// Address: 0x197030 - 0x197070
void entry_00197030_0x197030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197030_0x197030");
#endif

    switch (ctx->pc) {
        case 0x197040u: goto label_197040;
        default: break;
    }

    ctx->pc = 0x197030u;

    // 0x197030: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x197034: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x197034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x197038: 0xc057040  jal         func_15C100
    ctx->pc = 0x197038u;
    SET_GPR_U32(ctx, 31, 0x197040u);
    ctx->pc = 0x19703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197038u;
    // 0x19703c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x197038u, 0x197040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197040u;
label_197040:
    // 0x197040: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x197040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x197044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197048: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x197048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19704c: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x19704cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
    // 0x197050: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x197054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197058: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x197058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19705c: 0xac500698  sw          $s0, 0x698($v0)
    ctx->pc = 0x19705cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1688), GPR_U32(ctx, 16));
    // 0x197060: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x197060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x197064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197068: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x197068u;
    {
        const bool branch_taken_0x197068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197068u;
        // 0x19706c: 0xaea20670  sw          $v0, 0x670($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197068) {
            ctx->pc = 0x19713Cu;
            return;
        }
    }
    ctx->pc = 0x197070u;
}
