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

// Function: entry_001fb76c
// Address: 0x1fb76c - 0x1fb79c
void entry_001fb76c_0x1fb76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb76c_0x1fb76c");
#endif

    switch (ctx->pc) {
        case 0x1fb774u: goto label_1fb774;
        default: break;
    }

    ctx->pc = 0x1fb76cu;

    // 0x1fb76c: 0xc07e80c  jal         func_1FA030
    ctx->pc = 0x1FB76Cu;
    SET_GPR_U32(ctx, 31, 0x1FB774u);
    ctx->pc = 0x1FB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB76Cu;
    // 0x1fb770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA030u, 0x1FB76Cu, 0x1FB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB774u;
label_1fb774:
    // 0x1fb774: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1fb774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fb778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb77c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB77Cu;
    {
        const bool branch_taken_0x1fb77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB77Cu;
        // 0x1fb780: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb77c) {
            ctx->pc = 0x1FB7BCu;
            return;
        }
    }
    ctx->pc = 0x1FB784u;
    // 0x1fb784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB784u;
    {
        const bool branch_taken_0x1fb784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB784u;
        // 0x1fb788: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb784) {
            ctx->pc = 0x1FB79Cu;
            return;
        }
    }
    ctx->pc = 0x1FB78Cu;
    // 0x1fb78c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB78Cu;
    {
        const bool branch_taken_0x1fb78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB78Cu;
        // 0x1fb790: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb78c) {
            ctx->pc = 0x1FB7ACu;
            return;
        }
    }
    ctx->pc = 0x1FB794u;
    // 0x1fb794: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FB794u;
    {
        const bool branch_taken_0x1fb794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB794u;
        // 0x1fb798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb794) {
            ctx->pc = 0x1FB7E4u;
            return;
        }
    }
    ctx->pc = 0x1FB79Cu;
}
