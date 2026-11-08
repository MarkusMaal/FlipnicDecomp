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

// Function: caseD_24
// Address: 0x1c753c - 0x1c757c
void caseD_24_0x1c753c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_24_0x1c753c");
#endif

    switch (ctx->pc) {
        case 0x1c7548u: goto label_1c7548;
        case 0x1c7554u: goto label_1c7554;
        case 0x1c7560u: goto label_1c7560;
        default: break;
    }

    ctx->pc = 0x1c753cu;

    // 0x1c753c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7540: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7540u;
    SET_GPR_U32(ctx, 31, 0x1C7548u);
    ctx->pc = 0x1C7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7540u;
    // 0x1c7544: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7540u, 0x1C7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7548u;
label_1c7548:
    // 0x1c7548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c754c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C754Cu;
    SET_GPR_U32(ctx, 31, 0x1C7554u);
    ctx->pc = 0x1C7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C754Cu;
    // 0x1c7550: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C754Cu, 0x1C7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7554u;
label_1c7554:
    // 0x1c7554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7558: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7558u;
    SET_GPR_U32(ctx, 31, 0x1C7560u);
    ctx->pc = 0x1C755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7558u;
    // 0x1c755c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7558u, 0x1C7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7560u;
label_1c7560:
    // 0x1c7560: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1c7564: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c7568: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7568u;
    {
        const bool branch_taken_0x1c7568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7568u;
        // 0x1c756c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7568) {
            ctx->pc = 0x1C757Cu;
            return;
        }
    }
    ctx->pc = 0x1C7570u;
    // 0x1c7570: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c7570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c7574: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1C7574u;
    {
        const bool branch_taken_0x1c7574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7574u;
        // 0x1c7578: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7574) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C757Cu;
}
