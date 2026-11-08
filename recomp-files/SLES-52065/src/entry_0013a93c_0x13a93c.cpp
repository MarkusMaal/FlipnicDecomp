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

// Function: entry_0013a93c
// Address: 0x13a93c - 0x13a95c
void entry_0013a93c_0x13a93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a93c_0x13a93c");
#endif

    ctx->pc = 0x13a93cu;

    // 0x13a93c: 0x0  nop
    ctx->pc = 0x13a93cu;
    // NOP
    // 0x13a940: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a944: 0x8f858580  lw          $a1, -0x7A80($gp)
    ctx->pc = 0x13a944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    // 0x13a948: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13a94c: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x13a950: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a954: 0xc04eb84  jal         func_13AE10
    ctx->pc = 0x13A954u;
    SET_GPR_U32(ctx, 31, 0x13A95Cu);
    ctx->pc = 0x13A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A954u;
    // 0x13a958: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE10u, 0x13A954u, 0x13A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A95Cu;
}
