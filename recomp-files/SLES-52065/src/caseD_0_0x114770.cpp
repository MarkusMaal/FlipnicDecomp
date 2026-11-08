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

// Function: caseD_0
// Address: 0x114770 - 0x1147a8
void caseD_0_0x114770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x114770");
#endif

    switch (ctx->pc) {
        case 0x1147a4u: goto label_1147a4;
        default: break;
    }

    ctx->pc = 0x114770u;

    // 0x114770: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x114770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
    // 0x114774: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x114778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11477c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11477Cu;
    {
        const bool branch_taken_0x11477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11477Cu;
        // 0x114780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11477c) {
            ctx->pc = 0x1147A8u;
            return;
        }
    }
    ctx->pc = 0x114784u;
    // 0x114784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11478c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11478cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114790: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x114790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x114794: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x114794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114798: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x114798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11479c: 0xc045700  jal         func_115C00
    ctx->pc = 0x11479Cu;
    SET_GPR_U32(ctx, 31, 0x1147A4u);
    ctx->pc = 0x1147A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11479Cu;
    // 0x1147a0: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x11479Cu, 0x1147A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147A4u;
label_1147a4:
    // 0x1147a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1147a8u;
}
