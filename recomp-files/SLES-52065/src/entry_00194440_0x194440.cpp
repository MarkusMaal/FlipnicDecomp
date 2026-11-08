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

// Function: entry_00194440
// Address: 0x194440 - 0x194470
void entry_00194440_0x194440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194440_0x194440");
#endif

    switch (ctx->pc) {
        case 0x194458u: goto label_194458;
        default: break;
    }

    ctx->pc = 0x194440u;

    // 0x194440: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x194444: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194448: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19444c: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x19444cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
    // 0x194450: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194450u;
    SET_GPR_U32(ctx, 31, 0x194458u);
    ctx->pc = 0x194454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194450u;
    // 0x194454: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194450u, 0x194458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194458u;
label_194458:
    // 0x194458: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19445c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x19445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x194460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194464: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x194464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
    // 0x194468: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x194468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x19446c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19446cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    ctx->pc = 0x194470u;
}
