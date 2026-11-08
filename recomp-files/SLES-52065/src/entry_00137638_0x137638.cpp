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

// Function: entry_00137638
// Address: 0x137638 - 0x137650
void entry_00137638_0x137638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137638_0x137638");
#endif

    ctx->pc = 0x137638u;

    // 0x137638: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13763c: 0x8f848584  lw          $a0, -0x7A7C($gp)
    ctx->pc = 0x13763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
    // 0x137640: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x137644: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x137644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x137648: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x137648u;
    SET_GPR_U32(ctx, 31, 0x137650u);
    ctx->pc = 0x13764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137648u;
    // 0x13764c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x137648u, 0x137650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137650u;
}
