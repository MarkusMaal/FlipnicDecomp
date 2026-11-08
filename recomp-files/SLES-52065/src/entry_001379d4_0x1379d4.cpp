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

// Function: entry_001379d4
// Address: 0x1379d4 - 0x137a00
void entry_001379d4_0x1379d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001379d4_0x1379d4");
#endif

    switch (ctx->pc) {
        case 0x1379f4u: goto label_1379f4;
        default: break;
    }

    ctx->pc = 0x1379d4u;

    // 0x1379d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1379d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1379d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1379d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1379dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1379e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1379e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1379e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1379e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1379e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1379ec: 0xc04e9f8  jal         func_13A7E0
    ctx->pc = 0x1379ECu;
    SET_GPR_U32(ctx, 31, 0x1379F4u);
    ctx->pc = 0x1379F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379ECu;
    // 0x1379f0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7E0u, 0x1379ECu, 0x1379F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379F4u;
label_1379f4:
    // 0x1379f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1379f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1379f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1379f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1379fc: 0x0  nop
    ctx->pc = 0x1379fcu;
    // NOP
    ctx->pc = 0x137a00u;
}
