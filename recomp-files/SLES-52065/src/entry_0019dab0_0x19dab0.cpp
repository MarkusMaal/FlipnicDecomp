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

// Function: entry_0019dab0
// Address: 0x19dab0 - 0x19daf8
void entry_0019dab0_0x19dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dab0_0x19dab0");
#endif

    switch (ctx->pc) {
        case 0x19dac0u: goto label_19dac0;
        default: break;
    }

    ctx->pc = 0x19dab0u;

    // 0x19dab0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19dab4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19dab8: 0xc057040  jal         func_15C100
    ctx->pc = 0x19DAB8u;
    SET_GPR_U32(ctx, 31, 0x19DAC0u);
    ctx->pc = 0x19DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAB8u;
    // 0x19dabc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19DAB8u, 0x19DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAC0u;
label_19dac0:
    // 0x19dac0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19dac4: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x19dac8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19dacc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19daccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19dad0: 0xac620684  sw          $v0, 0x684($v1)
    ctx->pc = 0x19dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1668), GPR_U32(ctx, 2));
    // 0x19dad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dad8: 0xac720884  sw          $s2, 0x884($v1)
    ctx->pc = 0x19dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2180), GPR_U32(ctx, 18));
    // 0x19dadc: 0x8c630684  lw          $v1, 0x684($v1)
    ctx->pc = 0x19dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
    // 0x19dae0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19dae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19dae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19daec: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19daf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19daf4: 0xa0440028  sb          $a0, 0x28($v0)
    ctx->pc = 0x19daf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x19daf8u;
}
