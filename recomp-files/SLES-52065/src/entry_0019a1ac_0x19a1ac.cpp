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

// Function: entry_0019a1ac
// Address: 0x19a1ac - 0x19a1d8
void entry_0019a1ac_0x19a1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a1ac_0x19a1ac");
#endif

    switch (ctx->pc) {
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1d0u: goto label_19a1d0;
        default: break;
    }

    ctx->pc = 0x19a1acu;

    // 0x19a1ac: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19a1b0: 0x8c452838  lw          $a1, 0x2838($v0)
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10296)));
    // 0x19a1b4: 0xc0667e0  jal         func_199F80
    ctx->pc = 0x19A1B4u;
    SET_GPR_U32(ctx, 31, 0x19A1BCu);
    ctx->pc = 0x19A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1B4u;
    // 0x19a1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A1B4u, 0x19A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1BCu;
label_19a1bc:
    // 0x19a1bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A1BCu;
    {
        const bool branch_taken_0x19a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1bc) {
            ctx->pc = 0x19A1ECu;
            return;
        }
    }
    ctx->pc = 0x19A1C4u;
    // 0x19a1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1c8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19A1C8u;
    SET_GPR_U32(ctx, 31, 0x19A1D0u);
    ctx->pc = 0x19A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1C8u;
    // 0x19a1cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A1C8u, 0x19A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1D0u;
label_19a1d0:
    // 0x19a1d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A1D0u;
    {
        const bool branch_taken_0x19a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1d0) {
            ctx->pc = 0x19A1ECu;
            return;
        }
    }
    ctx->pc = 0x19A1D8u;
}
