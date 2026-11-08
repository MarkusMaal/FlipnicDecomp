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

// Function: entry_00197070
// Address: 0x197070 - 0x1970b0
void entry_00197070_0x197070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197070_0x197070");
#endif

    switch (ctx->pc) {
        case 0x197080u: goto label_197080;
        default: break;
    }

    ctx->pc = 0x197070u;

    // 0x197070: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x197074: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x197074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x197078: 0xc057040  jal         func_15C100
    ctx->pc = 0x197078u;
    SET_GPR_U32(ctx, 31, 0x197080u);
    ctx->pc = 0x19707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197078u;
    // 0x19707c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x197078u, 0x197080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197080u;
label_197080:
    // 0x197080: 0x8ea306a4  lw          $v1, 0x6A4($s5)
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
    // 0x197084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197088: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19708c: 0xac6206b0  sw          $v0, 0x6B0($v1)
    ctx->pc = 0x19708cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 2));
    // 0x197090: 0x8ea206a4  lw          $v0, 0x6A4($s5)
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
    // 0x197094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197098: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19709c: 0xac5006c0  sw          $s0, 0x6C0($v0)
    ctx->pc = 0x19709cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1728), GPR_U32(ctx, 16));
    // 0x1970a0: 0x8ea206a4  lw          $v0, 0x6A4($s5)
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
    // 0x1970a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1970a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1970a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1970A8u;
    {
        const bool branch_taken_0x1970a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970A8u;
        // 0x1970ac: 0xaea206a4  sw          $v0, 0x6A4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970a8) {
            ctx->pc = 0x19713Cu;
            return;
        }
    }
    ctx->pc = 0x1970B0u;
}
