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

// Function: entry_001e4838
// Address: 0x1e4838 - 0x1e486c
void entry_001e4838_0x1e4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4838_0x1e4838");
#endif

    switch (ctx->pc) {
        case 0x1e4854u: goto label_1e4854;
        default: break;
    }

    ctx->pc = 0x1e4838u;

    // 0x1e4838: 0x92420050  lbu         $v0, 0x50($s2)
    ctx->pc = 0x1e4838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e483c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E483Cu;
    {
        const bool branch_taken_0x1e483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e483c) {
            ctx->pc = 0x1E486Cu;
            return;
        }
    }
    ctx->pc = 0x1E4844u;
    // 0x1e4844: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4844u;
    {
        const bool branch_taken_0x1e4844 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4844u;
        // 0x1e4848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4844) {
            ctx->pc = 0x1E486Cu;
            return;
        }
    }
    ctx->pc = 0x1E484Cu;
    // 0x1e484c: 0xc079948  jal         func_1E6520
    ctx->pc = 0x1E484Cu;
    SET_GPR_U32(ctx, 31, 0x1E4854u);
    ctx->pc = 0x1E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6520u, 0x1E484Cu, 0x1E4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4854u;
label_1e4854:
    // 0x1e4854: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4854u;
    {
        const bool branch_taken_0x1e4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4854u;
        // 0x1e4858: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4854) {
            ctx->pc = 0x1E486Cu;
            return;
        }
    }
    ctx->pc = 0x1E485Cu;
    // 0x1e485c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e485cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4860: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e4860u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e4864: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1E4864u;
    {
        const bool branch_taken_0x1e4864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4864u;
        // 0x1e4868: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4864) {
            ctx->pc = 0x1E4964u;
            return;
        }
    }
    ctx->pc = 0x1E486Cu;
}
