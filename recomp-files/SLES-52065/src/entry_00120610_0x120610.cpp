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

// Function: entry_00120610
// Address: 0x120610 - 0x120638
void entry_00120610_0x120610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120610_0x120610");
#endif

    switch (ctx->pc) {
        case 0x12061cu: goto label_12061c;
        case 0x120624u: goto label_120624;
        default: break;
    }

    ctx->pc = 0x120610u;

    // 0x120610: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x120610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x120614: 0xc04839c  jal         func_120E70
    ctx->pc = 0x120614u;
    SET_GPR_U32(ctx, 31, 0x12061Cu);
    ctx->pc = 0x120618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120614u;
    // 0x120618: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x120614u, 0x12061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12061Cu;
label_12061c:
    // 0x12061c: 0xc048194  jal         func_120650
    ctx->pc = 0x12061Cu;
    SET_GPR_U32(ctx, 31, 0x120624u);
    ctx->pc = 0x120620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12061Cu;
    // 0x120620: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120650u, 0x12061Cu, 0x120624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120624u;
label_120624:
    // 0x120624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120628: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x120628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12062c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120634: 0x0  nop
    ctx->pc = 0x120634u;
    // NOP
    ctx->pc = 0x120638u;
}
