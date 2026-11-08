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

// Function: entry_001950d0
// Address: 0x1950d0 - 0x19512c
void entry_001950d0_0x1950d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001950d0_0x1950d0");
#endif

    switch (ctx->pc) {
        case 0x1950e0u: goto label_1950e0;
        default: break;
    }

    ctx->pc = 0x1950d0u;

    // 0x1950d0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1950d4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1950d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1950d8: 0xc057040  jal         func_15C100
    ctx->pc = 0x1950D8u;
    SET_GPR_U32(ctx, 31, 0x1950E0u);
    ctx->pc = 0x1950DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950D8u;
    // 0x1950dc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1950D8u, 0x1950E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x1950e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1950e8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1950ec: 0xac620450  sw          $v0, 0x450($v1)
    ctx->pc = 0x1950ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 2));
    // 0x1950f0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x1950f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1950f8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1950fc: 0xac700490  sw          $s0, 0x490($v1)
    ctx->pc = 0x1950fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 16));
    // 0x195100: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x195104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195108: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x195108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x19510c: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x19510cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x195110: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x195114: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195118: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x195118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x19511c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19511cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x195120: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x195124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x195124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x195128: 0xae830340  sw          $v1, 0x340($s4)
    ctx->pc = 0x195128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 3));
    ctx->pc = 0x19512cu;
}
