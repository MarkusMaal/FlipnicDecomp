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

// Function: entry_001f7668
// Address: 0x1f7668 - 0x1f76a0
void entry_001f7668_0x1f7668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7668_0x1f7668");
#endif

    switch (ctx->pc) {
        case 0x1f7684u: goto label_1f7684;
        case 0x1f768cu: goto label_1f768c;
        default: break;
    }

    ctx->pc = 0x1f7668u;

    // 0x1f7668: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f766c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7670: 0x8c441350  lw          $a0, 0x1350($v0)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x391350u));
    // 0x1f7674: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f7674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f7678: 0xac71bb1c  sw          $s1, -0x44E4($v1)
    ctx->pc = 0x1f7678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x21BB1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB1Cu, _value); } while (0);
    // 0x1f767c: 0xc07ad48  jal         func_1EB520
    ctx->pc = 0x1F767Cu;
    SET_GPR_U32(ctx, 31, 0x1F7684u);
    ctx->pc = 0x1F7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F767Cu;
    // 0x1f7680: 0x24a51358  addiu       $a1, $a1, 0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB520u, 0x1F767Cu, 0x1F7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7684u;
label_1f7684:
    // 0x1f7684: 0xc07de04  jal         func_1F7810
    ctx->pc = 0x1F7684u;
    SET_GPR_U32(ctx, 31, 0x1F768Cu);
    ctx->pc = 0x1F7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7684u;
    // 0x1f7688: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7810u, 0x1F7684u, 0x1F768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F768Cu;
label_1f768c:
    // 0x1f768c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F768Cu;
        // 0x1f7690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F76A8u;
            return;
        }
    }
    ctx->pc = 0x1F7694u;
    // 0x1f7694: 0x8e04bb28  lw          $a0, -0x44D8($s0)
    ctx->pc = 0x1f7694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949672)));
    // 0x1f7698: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7698u;
    SET_GPR_U32(ctx, 31, 0x1F76A0u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7698u, 0x1F76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76A0u;
}
