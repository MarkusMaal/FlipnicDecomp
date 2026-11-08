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

// Function: entry_0010a870
// Address: 0x10a870 - 0x10a894
void entry_0010a870_0x10a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a870_0x10a870");
#endif

    ctx->pc = 0x10a870u;

    // 0x10a870: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x10a870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x10a874: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10a878: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A878u;
    {
        const bool branch_taken_0x10a878 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10a878) {
            ctx->pc = 0x10A894u;
            return;
        }
    }
    ctx->pc = 0x10A880u;
    // 0x10a880: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a884: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a888: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a88c: 0xc046744  jal         func_119D10
    ctx->pc = 0x10A88Cu;
    SET_GPR_U32(ctx, 31, 0x10A894u);
    ctx->pc = 0x10A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A88Cu;
    // 0x10a890: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10A88Cu, 0x10A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A894u;
}
