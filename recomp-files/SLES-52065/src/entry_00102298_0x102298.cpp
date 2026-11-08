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

// Function: entry_00102298
// Address: 0x102298 - 0x1022c0
void entry_00102298_0x102298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102298_0x102298");
#endif

    ctx->pc = 0x102298u;

    // 0x102298: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x102298u;
    {
        const bool branch_taken_0x102298 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x102298) {
            ctx->pc = 0x1022C0u;
            return;
        }
    }
    ctx->pc = 0x1022A0u;
    // 0x1022a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1022a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1022a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1022a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1022ac: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1022acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1022b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1022b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1022b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1022b8: 0xc0571a8  jal         func_15C6A0
    ctx->pc = 0x1022B8u;
    SET_GPR_U32(ctx, 31, 0x1022C0u);
    ctx->pc = 0x1022BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022B8u;
    // 0x1022bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C6A0u, 0x1022B8u, 0x1022C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022C0u;
}
