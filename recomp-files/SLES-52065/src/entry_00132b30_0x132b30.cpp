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

// Function: entry_00132b30
// Address: 0x132b30 - 0x132b5c
void entry_00132b30_0x132b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132b30_0x132b30");
#endif

    switch (ctx->pc) {
        case 0x132b3cu: goto label_132b3c;
        case 0x132b58u: goto label_132b58;
        default: break;
    }

    ctx->pc = 0x132b30u;

    // 0x132b30: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x132b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x132b34: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x132B34u;
    SET_GPR_U32(ctx, 31, 0x132B3Cu);
    ctx->pc = 0x132B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B34u;
    // 0x132b38: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x132B34u, 0x132B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B3Cu;
label_132b3c:
    // 0x132b3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x132b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x132b40: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x132b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x132b44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x132b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x132b48: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x132b4c: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x132b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x132b50: 0xc04c91c  jal         func_132470
    ctx->pc = 0x132B50u;
    SET_GPR_U32(ctx, 31, 0x132B58u);
    ctx->pc = 0x132B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B50u;
    // 0x132b54: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132470u, 0x132B50u, 0x132B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B58u;
label_132b58:
    // 0x132b58: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x132b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    ctx->pc = 0x132b5cu;
}
