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

// Function: entry_00130068
// Address: 0x130068 - 0x13008c
void entry_00130068_0x130068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130068_0x130068");
#endif

    switch (ctx->pc) {
        case 0x130074u: goto label_130074;
        default: break;
    }

    ctx->pc = 0x130068u;

    // 0x130068: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x130068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13006c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13006Cu;
    SET_GPR_U32(ctx, 31, 0x130074u);
    ctx->pc = 0x130070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13006Cu;
    // 0x130070: 0xaf908580  sw          $s0, -0x7A80($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935936), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13006Cu, 0x130074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130074u;
label_130074:
    // 0x130074: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130074u;
    {
        const bool branch_taken_0x130074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130074u;
        // 0x130078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130074) {
            ctx->pc = 0x13008Cu;
            return;
        }
    }
    ctx->pc = 0x13007Cu;
    // 0x13007c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130080: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x130084: 0xc04c3fc  jal         func_130FF0
    ctx->pc = 0x130084u;
    SET_GPR_U32(ctx, 31, 0x13008Cu);
    ctx->pc = 0x130088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130084u;
    // 0x130088: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FF0u, 0x130084u, 0x13008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13008Cu;
}
