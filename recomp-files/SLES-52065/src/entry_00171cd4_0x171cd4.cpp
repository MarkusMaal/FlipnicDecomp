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

// Function: entry_00171cd4
// Address: 0x171cd4 - 0x171cf0
void entry_00171cd4_0x171cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171cd4_0x171cd4");
#endif

    switch (ctx->pc) {
        case 0x171cecu: goto label_171cec;
        default: break;
    }

    ctx->pc = 0x171cd4u;

    // 0x171cd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x171cd8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x171cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x171cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ce0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ce4: 0xc05c748  jal         func_171D20
    ctx->pc = 0x171CE4u;
    SET_GPR_U32(ctx, 31, 0x171CECu);
    ctx->pc = 0x171CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CE4u;
    // 0x171ce8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D20u, 0x171CE4u, 0x171CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CECu;
label_171cec:
    // 0x171cec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x171cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x171cf0u;
}
