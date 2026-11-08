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

// Function: entry_001e3894
// Address: 0x1e3894 - 0x1e38c8
void entry_001e3894_0x1e3894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3894_0x1e3894");
#endif

    switch (ctx->pc) {
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38b0u: goto label_1e38b0;
        default: break;
    }

    ctx->pc = 0x1e3894u;

    // 0x1e3894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3898: 0xc081c20  jal         func_207080
    ctx->pc = 0x1E3898u;
    SET_GPR_U32(ctx, 31, 0x1E38A0u);
    ctx->pc = 0x1E389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3898u;
    // 0x1e389c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1E3898u, 0x1E38A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38A0u;
label_1e38a0:
    // 0x1e38a0: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e38a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e38a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38a8: 0xc07f74e  jal         func_1FDD38
    ctx->pc = 0x1E38A8u;
    SET_GPR_U32(ctx, 31, 0x1E38B0u);
    ctx->pc = 0x1E38ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38A8u;
    // 0x1e38ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E38A8u, 0x1E38B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38B0u;
label_1e38b0:
    // 0x1e38b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E38B0u;
    {
        const bool branch_taken_0x1e38b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B0u;
        // 0x1e38b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b0) {
            ctx->pc = 0x1E38C8u;
            return;
        }
    }
    ctx->pc = 0x1E38B8u;
    // 0x1e38b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e38b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38bc: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e38c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E38C0u;
    {
        const bool branch_taken_0x1e38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38C0u;
        // 0x1e38c4: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38c0) {
            ctx->pc = 0x1E38F4u;
            return;
        }
    }
    ctx->pc = 0x1E38C8u;
}
