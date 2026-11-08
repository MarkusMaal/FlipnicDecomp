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

// Function: entry_0011df70
// Address: 0x11df70 - 0x11dfa4
void entry_0011df70_0x11df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df70_0x11df70");
#endif

    switch (ctx->pc) {
        case 0x11df80u: goto label_11df80;
        case 0x11dfa0u: goto label_11dfa0;
        default: break;
    }

    ctx->pc = 0x11df70u;

    // 0x11df70: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df74: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11df74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11df78: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF78u;
    SET_GPR_U32(ctx, 31, 0x11DF80u);
    ctx->pc = 0x11DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF78u;
    // 0x11df7c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF78u, 0x11DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF80u;
label_11df80:
    // 0x11df80: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x11df80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x11df84: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x11df88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DF88u;
    {
        const bool branch_taken_0x11df88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF88u;
        // 0x11df8c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df88) {
            ctx->pc = 0x11DFA4u;
            return;
        }
    }
    ctx->pc = 0x11DF90u;
    // 0x11df90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11df90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11df94: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x11df94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x11df98: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11DF98u;
    SET_GPR_U32(ctx, 31, 0x11DFA0u);
    ctx->pc = 0x11DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF98u;
    // 0x11df9c: 0x2484e850  addiu       $a0, $a0, -0x17B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11DF98u, 0x11DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFA0u;
label_11dfa0:
    // 0x11dfa0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x11dfa4u;
}
