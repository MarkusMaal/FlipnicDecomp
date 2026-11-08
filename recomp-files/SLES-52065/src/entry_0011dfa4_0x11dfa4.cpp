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

// Function: entry_0011dfa4
// Address: 0x11dfa4 - 0x11dfd0
void entry_0011dfa4_0x11dfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfa4_0x11dfa4");
#endif

    switch (ctx->pc) {
        case 0x11dfacu: goto label_11dfac;
        case 0x11dfccu: goto label_11dfcc;
        default: break;
    }

    ctx->pc = 0x11dfa4u;

    // 0x11dfa4: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DFA4u;
    SET_GPR_U32(ctx, 31, 0x11DFACu);
    ctx->pc = 0x11DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFA4u;
    // 0x11dfa8: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DFA4u, 0x11DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFACu;
label_11dfac:
    // 0x11dfac: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x11dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x11dfb0: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x11dfb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DFB4u;
    {
        const bool branch_taken_0x11dfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFB4u;
        // 0x11dfb8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfb4) {
            ctx->pc = 0x11DFD0u;
            return;
        }
    }
    ctx->pc = 0x11DFBCu;
    // 0x11dfbc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11dfc0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x11dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x11dfc4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11DFC4u;
    SET_GPR_U32(ctx, 31, 0x11DFCCu);
    ctx->pc = 0x11DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFC4u;
    // 0x11dfc8: 0x2484e890  addiu       $a0, $a0, -0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11DFC4u, 0x11DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFCCu;
label_11dfcc:
    // 0x11dfcc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x11dfd0u;
}
