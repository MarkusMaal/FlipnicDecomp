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

// Function: entry_00203740
// Address: 0x203740 - 0x203768
void entry_00203740_0x203740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203740_0x203740");
#endif

    switch (ctx->pc) {
        case 0x203754u: goto label_203754;
        default: break;
    }

    ctx->pc = 0x203740u;

    // 0x203740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203744: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x203744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x203748: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x20374c: 0xc0802ce  jal         func_200B38
    ctx->pc = 0x20374Cu;
    SET_GPR_U32(ctx, 31, 0x203754u);
    ctx->pc = 0x203750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20374Cu;
    // 0x203750: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B38u, 0x20374Cu, 0x203754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203754u;
label_203754:
    // 0x203754: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x203754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203758: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203758u;
    {
        const bool branch_taken_0x203758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203758u;
        // 0x20375c: 0x2328021  addu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203758) {
            ctx->pc = 0x203768u;
            return;
        }
    }
    ctx->pc = 0x203760u;
    // 0x203760: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x203760u;
    {
        const bool branch_taken_0x203760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203760u;
        // 0x203764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203760) {
            ctx->pc = 0x203788u;
            return;
        }
    }
    ctx->pc = 0x203768u;
}
