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

// Function: entry_00131830
// Address: 0x131830 - 0x131870
void entry_00131830_0x131830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131830_0x131830");
#endif

    switch (ctx->pc) {
        case 0x131860u: goto label_131860;
        default: break;
    }

    ctx->pc = 0x131830u;

    // 0x131830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13183c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131844: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x131844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13184c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13184cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131850: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x131850u;
    {
        const bool branch_taken_0x131850 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x131854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131850u;
        // 0x131854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131850) {
            ctx->pc = 0x131870u;
            return;
        }
    }
    ctx->pc = 0x131858u;
    // 0x131858: 0xc080874  jal         func_2021D0
    ctx->pc = 0x131858u;
    SET_GPR_U32(ctx, 31, 0x131860u);
    ctx->pc = 0x13185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131858u;
    // 0x13185c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x131858u, 0x131860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131860u;
label_131860:
    // 0x131860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131860u;
    {
        const bool branch_taken_0x131860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131860) {
            ctx->pc = 0x131870u;
            return;
        }
    }
    ctx->pc = 0x131868u;
    // 0x131868: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x131868u;
    {
        const bool branch_taken_0x131868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131868u;
        // 0x13186c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131868) {
            ctx->pc = 0x131924u;
            return;
        }
    }
    ctx->pc = 0x131870u;
}
