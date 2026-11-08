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

// Function: entry_001a23d8
// Address: 0x1a23d8 - 0x1a2434
void entry_001a23d8_0x1a23d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23d8_0x1a23d8");
#endif

    switch (ctx->pc) {
        case 0x1a23e0u: goto label_1a23e0;
        case 0x1a242cu: goto label_1a242c;
        default: break;
    }

    ctx->pc = 0x1a23d8u;

    // 0x1a23d8: 0xc064ffc  jal         func_193FF0
    ctx->pc = 0x1A23D8u;
    SET_GPR_U32(ctx, 31, 0x1A23E0u);
    ctx->pc = 0x193FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FF0u, 0x1A23D8u, 0x1A23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23E0u;
label_1a23e0:
    // 0x1a23e0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A23E0u;
    {
        const bool branch_taken_0x1a23e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23e0) {
            ctx->pc = 0x1A2434u;
            return;
        }
    }
    ctx->pc = 0x1A23E8u;
    // 0x1a23e8: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x1a23e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x1a23ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a23f0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A23F0u;
    {
        const bool branch_taken_0x1a23f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a23f0) {
            ctx->pc = 0x1A2434u;
            return;
        }
    }
    ctx->pc = 0x1A23F8u;
    // 0x1a23f8: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x1a23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1a23fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2400: 0xae430324  sw          $v1, 0x324($s2)
    ctx->pc = 0x1a2400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 3));
    // 0x1a2404: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a2404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a2408: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1a2408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1a240c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1a240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a2410: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a2410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a2414: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1A2414u;
    {
        const bool branch_taken_0x1a2414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2414) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A241Cu;
    // 0x1a241c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2420: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2424: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A2424u;
    SET_GPR_U32(ctx, 31, 0x1A242Cu);
    ctx->pc = 0x1A2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2424u;
    // 0x1a2428: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A2424u, 0x1A242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A242Cu;
label_1a242c:
    // 0x1a242c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1A242Cu;
    {
        const bool branch_taken_0x1a242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a242c) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A2434u;
}
