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

// Function: entry_002008dc
// Address: 0x2008dc - 0x2008fc
void entry_002008dc_0x2008dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002008dc_0x2008dc");
#endif

    switch (ctx->pc) {
        case 0x2008e8u: goto label_2008e8;
        default: break;
    }

    ctx->pc = 0x2008dcu;

    // 0x2008dc: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2008dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2008e0: 0xc07ff90  jal         func_1FFE40
    ctx->pc = 0x2008E0u;
    SET_GPR_U32(ctx, 31, 0x2008E8u);
    ctx->pc = 0x2008E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008E0u;
    // 0x2008e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE40u, 0x2008E0u, 0x2008E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008E8u;
label_2008e8:
    // 0x2008e8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2008ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2008f0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2008f4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2008f8: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x2008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    ctx->pc = 0x2008fcu;
}
