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

// Function: entry_0019ab74
// Address: 0x19ab74 - 0x19aba0
void entry_0019ab74_0x19ab74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab74_0x19ab74");
#endif

    switch (ctx->pc) {
        case 0x19ab84u: goto label_19ab84;
        case 0x19ab98u: goto label_19ab98;
        default: break;
    }

    ctx->pc = 0x19ab74u;

    // 0x19ab74: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ab78: 0x8c452848  lw          $a1, 0x2848($v0)
    ctx->pc = 0x19ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10312)));
    // 0x19ab7c: 0xc0667e0  jal         func_199F80
    ctx->pc = 0x19AB7Cu;
    SET_GPR_U32(ctx, 31, 0x19AB84u);
    ctx->pc = 0x19AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB7Cu;
    // 0x19ab80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19AB7Cu, 0x19AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB84u;
label_19ab84:
    // 0x19ab84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19AB84u;
    {
        const bool branch_taken_0x19ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab84) {
            ctx->pc = 0x19ABB4u;
            return;
        }
    }
    ctx->pc = 0x19AB8Cu;
    // 0x19ab8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab90: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19AB90u;
    SET_GPR_U32(ctx, 31, 0x19AB98u);
    ctx->pc = 0x19AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB90u;
    // 0x19ab94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19AB90u, 0x19AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB98u;
label_19ab98:
    // 0x19ab98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19AB98u;
    {
        const bool branch_taken_0x19ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab98) {
            ctx->pc = 0x19ABB4u;
            return;
        }
    }
    ctx->pc = 0x19ABA0u;
}
