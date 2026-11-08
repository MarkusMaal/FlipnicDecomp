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

// Function: entry_00198840
// Address: 0x198840 - 0x19887c
void entry_00198840_0x198840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198840_0x198840");
#endif

    switch (ctx->pc) {
        case 0x198874u: goto label_198874;
        default: break;
    }

    ctx->pc = 0x198840u;

    // 0x198840: 0x8e420510  lw          $v0, 0x510($s2)
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x198844: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x198844u;
    {
        const bool branch_taken_0x198844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198844) {
            ctx->pc = 0x19887Cu;
            return;
        }
    }
    ctx->pc = 0x19884Cu;
    // 0x19884c: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x198850: 0x264b0490  addiu       $t3, $s2, 0x490
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x198854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198858: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19885c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x198860: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x198864: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x198868: 0x8c48003c  lw          $t0, 0x3C($v0)
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19886c: 0xc064d10  jal         func_193440
    ctx->pc = 0x19886Cu;
    SET_GPR_U32(ctx, 31, 0x198874u);
    ctx->pc = 0x198870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19886Cu;
    // 0x198870: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x19886Cu, 0x198874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198874u;
label_198874:
    // 0x198874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198878: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x198878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    ctx->pc = 0x19887cu;
}
