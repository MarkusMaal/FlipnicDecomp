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

// Function: entry_0017aec0
// Address: 0x17aec0 - 0x17aef0
void entry_0017aec0_0x17aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aec0_0x17aec0");
#endif

    switch (ctx->pc) {
        case 0x17aee0u: goto label_17aee0;
        default: break;
    }

    ctx->pc = 0x17aec0u;

    // 0x17aec0: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17AEC0u;
    {
        const bool branch_taken_0x17aec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEC0u;
        // 0x17aec4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aec0) {
            ctx->pc = 0x17AEF0u;
            return;
        }
    }
    ctx->pc = 0x17AEC8u;
    // 0x17aec8: 0x86230408  lh          $v1, 0x408($s1)
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x17aecc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17aed0: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x17aed4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17aed8: 0xc046744  jal         func_119D10
    ctx->pc = 0x17AED8u;
    SET_GPR_U32(ctx, 31, 0x17AEE0u);
    ctx->pc = 0x17AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AED8u;
    // 0x17aedc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x17AED8u, 0x17AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEE0u;
label_17aee0:
    // 0x17aee0: 0xae2003d0  sw          $zero, 0x3D0($s1)
    ctx->pc = 0x17aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 0));
    // 0x17aee4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17aee8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17AEE8u;
    {
        const bool branch_taken_0x17aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEE8u;
        // 0x17aeec: 0xae230404  sw          $v1, 0x404($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aee8) {
            ctx->pc = 0x17AF84u;
            return;
        }
    }
    ctx->pc = 0x17AEF0u;
}
