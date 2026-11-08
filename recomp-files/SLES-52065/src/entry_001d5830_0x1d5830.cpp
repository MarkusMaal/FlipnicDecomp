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

// Function: entry_001d5830
// Address: 0x1d5830 - 0x1d5860
void entry_001d5830_0x1d5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5830_0x1d5830");
#endif

    switch (ctx->pc) {
        case 0x1d5838u: goto label_1d5838;
        default: break;
    }

    ctx->pc = 0x1d5830u;

    // 0x1d5830: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D5830u;
    SET_GPR_U32(ctx, 31, 0x1D5838u);
    ctx->pc = 0x1D5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5830u;
    // 0x1d5834: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D5830u, 0x1D5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5838u;
label_1d5838:
    // 0x1d5838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d583c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d583cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5840: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d5840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d5844: 0x244b41d8  addiu       $t3, $v0, 0x41D8
    ctx->pc = 0x1d5844u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16856));
    // 0x1d5848: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3841D8u));
    // 0x1d584c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5850: 0x26710558  addiu       $s1, $s3, 0x558
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    // 0x1d5854: 0x240a09e4  addiu       $t2, $zero, 0x9E4
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5858: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1d5858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d585c: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    ctx->pc = 0x1d5860u;
}
