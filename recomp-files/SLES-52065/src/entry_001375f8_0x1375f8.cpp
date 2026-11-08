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

// Function: entry_001375f8
// Address: 0x1375f8 - 0x137610
void entry_001375f8_0x1375f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001375f8_0x1375f8");
#endif

    ctx->pc = 0x1375f8u;

    // 0x1375f8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1375f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1375fc: 0x8f848580  lw          $a0, -0x7A80($gp)
    ctx->pc = 0x1375fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    // 0x137600: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137604: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x137604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x137608: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x137608u;
    SET_GPR_U32(ctx, 31, 0x137610u);
    ctx->pc = 0x13760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137608u;
    // 0x13760c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x137608u, 0x137610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137610u;
}
