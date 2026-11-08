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

// Function: entry_001498d8
// Address: 0x1498d8 - 0x1498f0
void entry_001498d8_0x1498d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001498d8_0x1498d8");
#endif

    switch (ctx->pc) {
        case 0x1498ecu: goto label_1498ec;
        default: break;
    }

    ctx->pc = 0x1498d8u;

    // 0x1498d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1498dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1498dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1498e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1498e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1498e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1498E4u;
    SET_GPR_U32(ctx, 31, 0x1498ECu);
    ctx->pc = 0x1498E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1498E4u;
    // 0x1498e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1498E4u, 0x1498ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498ECu;
label_1498ec:
    // 0x1498ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1498ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1498f0u;
}
