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

// Function: entry_001a453c
// Address: 0x1a453c - 0x1a456c
void entry_001a453c_0x1a453c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a453c_0x1a453c");
#endif

    switch (ctx->pc) {
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4564u: goto label_1a4564;
        default: break;
    }

    ctx->pc = 0x1a453cu;

    // 0x1a453c: 0xc04ae64  jal         func_12B990
    ctx->pc = 0x1A453Cu;
    SET_GPR_U32(ctx, 31, 0x1A4544u);
    ctx->pc = 0x1A4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A453Cu;
    // 0x1a4540: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B990u, 0x1A453Cu, 0x1A4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4544u;
label_1a4544:
    // 0x1a4544: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4544u;
    {
        const bool branch_taken_0x1a4544 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4544u;
        // 0x1a4548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4544) {
            ctx->pc = 0x1A456Cu;
            return;
        }
    }
    ctx->pc = 0x1A454Cu;
    // 0x1a454c: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a4550: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4550u;
    {
        const bool branch_taken_0x1a4550 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4550u;
        // 0x1a4554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4550) {
            ctx->pc = 0x1A4570u;
            return;
        }
    }
    ctx->pc = 0x1A4558u;
    // 0x1a4558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a455c: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A455Cu;
    SET_GPR_U32(ctx, 31, 0x1A4564u);
    ctx->pc = 0x1A4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A455Cu;
    // 0x1a4560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A455Cu, 0x1A4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4564u;
label_1a4564:
    // 0x1a4564: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4564u;
    {
        const bool branch_taken_0x1a4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4564u;
        // 0x1a4568: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4564) {
            ctx->pc = 0x1A457Cu;
            return;
        }
    }
    ctx->pc = 0x1A456Cu;
}
