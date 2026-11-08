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

// Function: entry_001232d0
// Address: 0x1232d0 - 0x1232fc
void entry_001232d0_0x1232d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001232d0_0x1232d0");
#endif

    switch (ctx->pc) {
        case 0x1232f4u: goto label_1232f4;
        default: break;
    }

    ctx->pc = 0x1232d0u;

    // 0x1232d0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1232d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1232d4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1232d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1232d8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1232d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1232dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1232dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1232e0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1232e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1232e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1232e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1232e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1232e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1232ec: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1232ECu;
    SET_GPR_U32(ctx, 31, 0x1232F4u);
    ctx->pc = 0x1232F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232ECu;
    // 0x1232f0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1232ECu, 0x1232F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232F4u;
label_1232f4:
    // 0x1232f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1232f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1232f8: 0x0  nop
    ctx->pc = 0x1232f8u;
    // NOP
    ctx->pc = 0x1232fcu;
}
