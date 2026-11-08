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

// Function: entry_001f282c
// Address: 0x1f282c - 0x1f2868
void entry_001f282c_0x1f282c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f282c_0x1f282c");
#endif

    switch (ctx->pc) {
        case 0x1f285cu: goto label_1f285c;
        default: break;
    }

    ctx->pc = 0x1f282cu;

    // 0x1f282c: 0x24e2fa80  addiu       $v0, $a3, -0x580
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f2830: 0x2524f9c0  addiu       $a0, $t1, -0x640
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965696));
    // 0x1f2834: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1f2834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2838: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f283c: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1f2840: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2844: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f2844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f284c: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2850: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2854: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2854u;
    SET_GPR_U32(ctx, 31, 0x1F285Cu);
    ctx->pc = 0x1F2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2854u;
    // 0x1f2858: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2854u, 0x1F285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F285Cu;
label_1f285c:
    // 0x1f285c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F285Cu;
    {
        const bool branch_taken_0x1f285c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F285Cu;
        // 0x1f2860: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f285c) {
            ctx->pc = 0x1F2868u;
            return;
        }
    }
    ctx->pc = 0x1F2864u;
    // 0x1f2864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f2864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1f2868u;
}
