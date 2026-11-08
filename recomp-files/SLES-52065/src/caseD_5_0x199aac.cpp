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

// Function: caseD_5
// Address: 0x199aac - 0x199ad0
void caseD_5_0x199aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x199aac");
#endif

    switch (ctx->pc) {
        case 0x199ac0u: goto label_199ac0;
        default: break;
    }

    ctx->pc = 0x199aacu;

    // 0x199aac: 0x0  nop
    ctx->pc = 0x199aacu;
    // NOP
    // 0x199ab0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x199ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x199ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ab8: 0xc064c20  jal         func_193080
    ctx->pc = 0x199AB8u;
    SET_GPR_U32(ctx, 31, 0x199AC0u);
    ctx->pc = 0x199ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199AB8u;
    // 0x199abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x199AB8u, 0x199AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AC0u;
label_199ac0:
    // 0x199ac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199ac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199ac8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x199AC8u;
    {
        const bool branch_taken_0x199ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AC8u;
        // 0x199acc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ac8) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199AD0u;
}
