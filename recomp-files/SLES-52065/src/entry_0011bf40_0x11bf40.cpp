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

// Function: entry_0011bf40
// Address: 0x11bf40 - 0x11bf84
void entry_0011bf40_0x11bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bf40_0x11bf40");
#endif

    switch (ctx->pc) {
        case 0x11bf58u: goto label_11bf58;
        default: break;
    }

    ctx->pc = 0x11bf40u;

    // 0x11bf40: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf44: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bf48: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf4c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf50: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BF50u;
    SET_GPR_U32(ctx, 31, 0x11BF58u);
    ctx->pc = 0x11BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF50u;
    // 0x11bf54: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BF50u, 0x11BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF58u;
label_11bf58:
    // 0x11bf58: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x11bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x11bf5c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x11bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x11bf60: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BF60u;
    {
        const bool branch_taken_0x11bf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bf60) {
            ctx->pc = 0x11BF84u;
            return;
        }
    }
    ctx->pc = 0x11BF68u;
    // 0x11bf68: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf6c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11bf70: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf74: 0x2484e7d0  addiu       $a0, $a0, -0x1830
    ctx->pc = 0x11bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    // 0x11bf78: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf7c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11BF7Cu;
    SET_GPR_U32(ctx, 31, 0x11BF84u);
    ctx->pc = 0x11BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF7Cu;
    // 0x11bf80: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11BF7Cu, 0x11BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF84u;
}
