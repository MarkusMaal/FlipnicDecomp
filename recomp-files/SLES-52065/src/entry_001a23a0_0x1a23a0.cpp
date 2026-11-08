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

// Function: entry_001a23a0
// Address: 0x1a23a0 - 0x1a23c4
void entry_001a23a0_0x1a23a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23a0_0x1a23a0");
#endif

    switch (ctx->pc) {
        case 0x1a23b8u: goto label_1a23b8;
        default: break;
    }

    ctx->pc = 0x1a23a0u;

    // 0x1a23a0: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1a23a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A23A4u;
    {
        const bool branch_taken_0x1a23a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23A4u;
        // 0x1a23a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23a4) {
            ctx->pc = 0x1A23C4u;
            return;
        }
    }
    ctx->pc = 0x1A23ACu;
    // 0x1a23ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23b0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A23B0u;
    SET_GPR_U32(ctx, 31, 0x1A23B8u);
    ctx->pc = 0x1A23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23B0u;
    // 0x1a23b4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A23B0u, 0x1A23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23B8u;
label_1a23b8:
    // 0x1a23b8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1A23B8u;
    {
        const bool branch_taken_0x1a23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23b8) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A23C0u;
    // 0x1a23c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a23c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a23c4u;
}
