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

// Function: entry_001049cc
// Address: 0x1049cc - 0x104a08
void entry_001049cc_0x1049cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001049cc_0x1049cc");
#endif

    switch (ctx->pc) {
        case 0x1049d4u: goto label_1049d4;
        case 0x1049e4u: goto label_1049e4;
        default: break;
    }

    ctx->pc = 0x1049ccu;

    // 0x1049cc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1049CCu;
    SET_GPR_U32(ctx, 31, 0x1049D4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1049CCu, 0x1049D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049D4u;
label_1049d4:
    // 0x1049d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1049D4u;
    {
        const bool branch_taken_0x1049d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049D4u;
        // 0x1049d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049d4) {
            ctx->pc = 0x104A08u;
            return;
        }
    }
    ctx->pc = 0x1049DCu;
    // 0x1049dc: 0xc04161c  jal         func_105870
    ctx->pc = 0x1049DCu;
    SET_GPR_U32(ctx, 31, 0x1049E4u);
    ctx->pc = 0x1049E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049DCu;
    // 0x1049e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105870u, 0x1049DCu, 0x1049E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049E4u;
label_1049e4:
    // 0x1049e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1049e8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1049e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1049ec: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x1049ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x1049f0: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x1049f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x1049f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1049f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1049fc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1049fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104a00: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x104a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x104a04: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104a08u;
}
