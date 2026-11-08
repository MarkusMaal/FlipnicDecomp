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

// Function: entry_001991ec
// Address: 0x1991ec - 0x199228
void entry_001991ec_0x1991ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991ec_0x1991ec");
#endif

    switch (ctx->pc) {
        case 0x1991f8u: goto label_1991f8;
        default: break;
    }

    ctx->pc = 0x1991ecu;

    // 0x1991ec: 0x0  nop
    ctx->pc = 0x1991ecu;
    // NOP
    // 0x1991f0: 0xc058018  jal         func_160060
    ctx->pc = 0x1991F0u;
    SET_GPR_U32(ctx, 31, 0x1991F8u);
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1991F0u, 0x1991F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991F8u;
label_1991f8:
    // 0x1991f8: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x1991f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1991fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1991fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199200: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x199200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
    // 0x199204: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x199204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x199208: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199208u;
    {
        const bool branch_taken_0x199208 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x199208) {
            ctx->pc = 0x19923Cu;
            return;
        }
    }
    ctx->pc = 0x199210u;
    // 0x199210: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x199214: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199214u;
    {
        const bool branch_taken_0x199214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199214) {
            ctx->pc = 0x199228u;
            return;
        }
    }
    ctx->pc = 0x19921Cu;
    // 0x19921c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199220: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x199220u;
    SET_GPR_U32(ctx, 31, 0x199228u);
    ctx->pc = 0x199224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199220u;
    // 0x199224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199220u, 0x199228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199228u;
}
