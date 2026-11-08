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

// Function: caseD_17
// Address: 0x1c75e4 - 0x1c7624
void caseD_17_0x1c75e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x1c75e4");
#endif

    switch (ctx->pc) {
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c75fcu: goto label_1c75fc;
        case 0x1c7608u: goto label_1c7608;
        default: break;
    }

    ctx->pc = 0x1c75e4u;

    // 0x1c75e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75E8u;
    SET_GPR_U32(ctx, 31, 0x1C75F0u);
    ctx->pc = 0x1C75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75E8u;
    // 0x1c75ec: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75E8u, 0x1C75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75F0u;
label_1c75f0:
    // 0x1c75f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75f4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75F4u;
    SET_GPR_U32(ctx, 31, 0x1C75FCu);
    ctx->pc = 0x1C75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75F4u;
    // 0x1c75f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75F4u, 0x1C75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75FCu;
label_1c75fc:
    // 0x1c75fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7600: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7600u;
    SET_GPR_U32(ctx, 31, 0x1C7608u);
    ctx->pc = 0x1C7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7600u;
    // 0x1c7604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7600u, 0x1C7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7608u;
label_1c7608:
    // 0x1c7608: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1c7608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1c760c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1c760cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1c7610: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7610u;
    {
        const bool branch_taken_0x1c7610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7610u;
        // 0x1c7614: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7610) {
            ctx->pc = 0x1C7624u;
            return;
        }
    }
    ctx->pc = 0x1C7618u;
    // 0x1c7618: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c7618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c761c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C761Cu;
    {
        const bool branch_taken_0x1c761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C761Cu;
        // 0x1c7620: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c761c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7624u;
}
