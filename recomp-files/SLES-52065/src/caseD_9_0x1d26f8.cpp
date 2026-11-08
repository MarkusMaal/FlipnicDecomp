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
// Address: 0x1d26f8 - 0x1d272c
void caseD_9_0x1d26f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1d26f8");
#endif

    switch (ctx->pc) {
        case 0x1d2708u: goto label_1d2708;
        default: break;
    }

    ctx->pc = 0x1d26f8u;

    // 0x1d26f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d26fc: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2700: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1D2700u;
    SET_GPR_U32(ctx, 31, 0x1D2708u);
    ctx->pc = 0x1D2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2700u;
    // 0x1d2704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1D2700u, 0x1D2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2708u;
label_1d2708:
    // 0x1d2708: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d270c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2710: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2714: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d2714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2718: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d2718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d271c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2720: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2724: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2728: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1d272cu;
}
