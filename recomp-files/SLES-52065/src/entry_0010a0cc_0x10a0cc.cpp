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

// Function: entry_0010a0cc
// Address: 0x10a0cc - 0x10a0e0
void entry_0010a0cc_0x10a0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a0cc_0x10a0cc");
#endif

    switch (ctx->pc) {
        case 0x10a0dcu: goto label_10a0dc;
        default: break;
    }

    ctx->pc = 0x10a0ccu;

    // 0x10a0cc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a0d0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x10a0d4: 0xc046578  jal         func_1195E0
    ctx->pc = 0x10A0D4u;
    SET_GPR_U32(ctx, 31, 0x10A0DCu);
    ctx->pc = 0x10A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0D4u;
    // 0x10a0d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1195E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1195E0u, 0x10A0D4u, 0x10A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0DCu;
label_10a0dc:
    // 0x10a0dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x10a0e0u;
}
