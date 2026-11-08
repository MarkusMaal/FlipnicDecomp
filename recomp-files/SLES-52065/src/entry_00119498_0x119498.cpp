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

// Function: entry_00119498
// Address: 0x119498 - 0x1194c8
void entry_00119498_0x119498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119498_0x119498");
#endif

    switch (ctx->pc) {
        case 0x1194acu: goto label_1194ac;
        case 0x1194b8u: goto label_1194b8;
        default: break;
    }

    ctx->pc = 0x119498u;

    // 0x119498: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x119498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x11949c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x11949Cu;
    {
        const bool branch_taken_0x11949c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11949Cu;
        // 0x1194a0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11949c) {
            ctx->pc = 0x119538u;
            return;
        }
    }
    ctx->pc = 0x1194A4u;
    // 0x1194a4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1194A4u;
    SET_GPR_U32(ctx, 31, 0x1194ACu);
    ctx->pc = 0x1194A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194A4u;
    // 0x1194a8: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1194A4u, 0x1194ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194ACu;
label_1194ac:
    // 0x1194ac: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1194acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1194b0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1194B0u;
    SET_GPR_U32(ctx, 31, 0x1194B8u);
    ctx->pc = 0x1194B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194B0u;
    // 0x1194b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1194B0u, 0x1194B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194B8u;
label_1194b8:
    // 0x1194b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1194b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1194bc: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1194BCu;
    {
        const bool branch_taken_0x1194bc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194BCu;
        // 0x1194c0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194bc) {
            ctx->pc = 0x11952Cu;
            return;
        }
    }
    ctx->pc = 0x1194C4u;
    // 0x1194c4: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1194c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1194c8u;
}
