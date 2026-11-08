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

// Function: entry_001a5524
// Address: 0x1a5524 - 0x1a557c
void entry_001a5524_0x1a5524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5524_0x1a5524");
#endif

    switch (ctx->pc) {
        case 0x1a555cu: goto label_1a555c;
        case 0x1a5570u: goto label_1a5570;
        default: break;
    }

    ctx->pc = 0x1a5524u;

    // 0x1a5524: 0x8e03074c  lw          $v1, 0x74C($s0)
    ctx->pc = 0x1a5524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x1a5528: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5528u;
    {
        const bool branch_taken_0x1a5528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5528) {
            ctx->pc = 0x1A557Cu;
            return;
        }
    }
    ctx->pc = 0x1A5530u;
    // 0x1a5530: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5534: 0x8e030754  lw          $v1, 0x754($s0)
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1876)));
    // 0x1a5538: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a553c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1a553cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5540: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A5540u;
    {
        const bool branch_taken_0x1a5540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5540) {
            ctx->pc = 0x1A55D8u;
            return;
        }
    }
    ctx->pc = 0x1A5548u;
    // 0x1a5548: 0x9203075c  lbu         $v1, 0x75C($s0)
    ctx->pc = 0x1a5548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1884)));
    // 0x1a554c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A554Cu;
    {
        const bool branch_taken_0x1a554c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a554c) {
            ctx->pc = 0x1A55D8u;
            return;
        }
    }
    ctx->pc = 0x1A5554u;
    // 0x1a5554: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1A5554u;
    SET_GPR_U32(ctx, 31, 0x1A555Cu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1A5554u, 0x1A555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A555Cu;
label_1a555c:
    // 0x1a555c: 0x8e020664  lw          $v0, 0x664($s0)
    ctx->pc = 0x1a555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x1a5560: 0x8e050738  lw          $a1, 0x738($s0)
    ctx->pc = 0x1a5560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
    // 0x1a5564: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a5564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a5568: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1A5568u;
    SET_GPR_U32(ctx, 31, 0x1A5570u);
    ctx->pc = 0x1A556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5568u;
    // 0x1a556c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1A5568u, 0x1A5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5570u;
label_1a5570:
    // 0x1a5570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5574: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5574u;
    {
        const bool branch_taken_0x1a5574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5574u;
        // 0x1a5578: 0xae03073c  sw          $v1, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5574) {
            ctx->pc = 0x1A55D8u;
            return;
        }
    }
    ctx->pc = 0x1A557Cu;
}
