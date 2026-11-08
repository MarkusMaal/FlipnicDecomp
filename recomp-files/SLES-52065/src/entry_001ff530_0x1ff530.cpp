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

// Function: entry_001ff530
// Address: 0x1ff530 - 0x1ff55c
void entry_001ff530_0x1ff530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff530_0x1ff530");
#endif

    switch (ctx->pc) {
        case 0x1ff554u: goto label_1ff554;
        default: break;
    }

    ctx->pc = 0x1ff530u;

    // 0x1ff530: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1ff530u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff534: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1ff534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff53c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff540: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1ff540u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1ff544: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff548: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1ff548u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1ff54c: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF54Cu;
    SET_GPR_U32(ctx, 31, 0x1FF554u);
    ctx->pc = 0x1FF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF54Cu;
    // 0x1ff550: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF54Cu, 0x1FF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF554u;
label_1ff554:
    // 0x1ff554: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FF554u;
    {
        const bool branch_taken_0x1ff554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF554u;
        // 0x1ff558: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff554) {
            ctx->pc = 0x1FF620u;
            return;
        }
    }
    ctx->pc = 0x1FF55Cu;
}
