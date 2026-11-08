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

// Function: entry_001b823c
// Address: 0x1b823c - 0x1b8264
void entry_001b823c_0x1b823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b823c_0x1b823c");
#endif

    switch (ctx->pc) {
        case 0x1b8248u: goto label_1b8248;
        default: break;
    }

    ctx->pc = 0x1b823cu;

    // 0x1b823c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b8240: 0xc06e20c  jal         func_1B8830
    ctx->pc = 0x1B8240u;
    SET_GPR_U32(ctx, 31, 0x1B8248u);
    ctx->pc = 0x1B8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8240u;
    // 0x1b8244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8830u, 0x1B8240u, 0x1B8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8248u;
label_1b8248:
    // 0x1b8248: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b824c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b8250: 0x8c22f290  lw          $v0, -0xD70($at)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F290u));
    // 0x1b8254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8258: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b825c: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B825Cu;
    SET_GPR_U32(ctx, 31, 0x1B8264u);
    ctx->pc = 0x1B8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B825Cu;
    // 0x1b8260: 0xac22f290  sw          $v0, -0xD70($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B825Cu, 0x1B8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8264u;
}
