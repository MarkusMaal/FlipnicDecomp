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

// Function: entry_001aa60c
// Address: 0x1aa60c - 0x1aa640
void entry_001aa60c_0x1aa60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa60c_0x1aa60c");
#endif

    switch (ctx->pc) {
        case 0x1aa620u: goto label_1aa620;
        default: break;
    }

    ctx->pc = 0x1aa60cu;

    // 0x1aa60c: 0x0  nop
    ctx->pc = 0x1aa60cu;
    // NOP
    // 0x1aa610: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aa610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1aa614: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aa618: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AA618u;
    SET_GPR_U32(ctx, 31, 0x1AA620u);
    ctx->pc = 0x1AA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA618u;
    // 0x1aa61c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AA618u, 0x1AA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA620u;
label_1aa620:
    // 0x1aa620: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1aa620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aa624: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa628: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1aa62c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aa630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aa630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aa634: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1aa634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1aa638: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AA638u;
    {
        const bool branch_taken_0x1aa638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA638u;
        // 0x1aa63c: 0xac430670  sw          $v1, 0x670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa638) {
            ctx->pc = 0x1AA68Cu;
            return;
        }
    }
    ctx->pc = 0x1AA640u;
}
