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

// Function: entry_001022c0
// Address: 0x1022c0 - 0x1022e8
void entry_001022c0_0x1022c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001022c0_0x1022c0");
#endif

    switch (ctx->pc) {
        case 0x1022d0u: goto label_1022d0;
        default: break;
    }

    ctx->pc = 0x1022c0u;

    // 0x1022c0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1022c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1022c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1022c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1022c8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1022C8u;
    SET_GPR_U32(ctx, 31, 0x1022D0u);
    ctx->pc = 0x1022CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022C8u;
    // 0x1022cc: 0x24a5e060  addiu       $a1, $a1, -0x1FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1022C8u, 0x1022D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022D0u;
label_1022d0:
    // 0x1022d0: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1022D0u;
    {
        const bool branch_taken_0x1022d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1022d0) {
            ctx->pc = 0x10232Cu;
            return;
        }
    }
    ctx->pc = 0x1022D8u;
    // 0x1022d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1022D8u;
    {
        const bool branch_taken_0x1022d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1022DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022D8u;
        // 0x1022dc: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022d8) {
            ctx->pc = 0x1022E8u;
            return;
        }
    }
    ctx->pc = 0x1022E0u;
    // 0x1022e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1022E0u;
    {
        const bool branch_taken_0x1022e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022E0u;
        // 0x1022e4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022e0) {
            ctx->pc = 0x102300u;
            return;
        }
    }
    ctx->pc = 0x1022E8u;
}
