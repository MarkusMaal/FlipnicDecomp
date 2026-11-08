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

// Function: caseD_9
// Address: 0x1d22d0 - 0x1d2304
void caseD_9_0x1d22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1d22d0");
#endif

    switch (ctx->pc) {
        case 0x1d22e0u: goto label_1d22e0;
        default: break;
    }

    ctx->pc = 0x1d22d0u;

    // 0x1d22d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d22d4: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d22d8: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1D22D8u;
    SET_GPR_U32(ctx, 31, 0x1D22E0u);
    ctx->pc = 0x1D22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22D8u;
    // 0x1d22dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1D22D8u, 0x1D22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22E0u;
label_1d22e0:
    // 0x1d22e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d22e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d22e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d22ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d22f0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d22f4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d22f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d22fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2300: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1d2304u;
}
