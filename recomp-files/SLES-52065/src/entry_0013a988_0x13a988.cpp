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

// Function: entry_0013a988
// Address: 0x13a988 - 0x13a9a4
void entry_0013a988_0x13a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a988_0x13a988");
#endif

    ctx->pc = 0x13a988u;

    // 0x13a988: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a98c: 0x8f858584  lw          $a1, -0x7A7C($gp)
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
    // 0x13a990: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13a994: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x13a994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x13a998: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a99c: 0xc04eb84  jal         func_13AE10
    ctx->pc = 0x13A99Cu;
    SET_GPR_U32(ctx, 31, 0x13A9A4u);
    ctx->pc = 0x13A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A99Cu;
    // 0x13a9a0: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE10u, 0x13A99Cu, 0x13A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9A4u;
}
