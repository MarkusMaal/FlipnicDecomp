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

// Function: entry_001a42f4
// Address: 0x1a42f4 - 0x1a431c
void entry_001a42f4_0x1a42f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a42f4_0x1a42f4");
#endif

    switch (ctx->pc) {
        case 0x1a4310u: goto label_1a4310;
        default: break;
    }

    ctx->pc = 0x1a42f4u;

    // 0x1a42f4: 0x0  nop
    ctx->pc = 0x1a42f4u;
    // NOP
    // 0x1a42f8: 0x8e220728  lw          $v0, 0x728($s1)
    ctx->pc = 0x1a42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1832)));
    // 0x1a42fc: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1a42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1a4300: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a4304: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4308: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1A4308u;
    SET_GPR_U32(ctx, 31, 0x1A4310u);
    ctx->pc = 0x1A430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4308u;
    // 0x1a430c: 0x2444072c  addiu       $a0, $v0, 0x72C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1836));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A4308u, 0x1A4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4310u;
label_1a4310:
    // 0x1a4310: 0x8e220728  lw          $v0, 0x728($s1)
    ctx->pc = 0x1a4310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1832)));
    // 0x1a4314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4318: 0xae220728  sw          $v0, 0x728($s1)
    ctx->pc = 0x1a4318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 2));
    ctx->pc = 0x1a431cu;
}
