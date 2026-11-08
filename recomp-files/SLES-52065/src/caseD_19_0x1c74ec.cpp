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

// Function: caseD_19
// Address: 0x1c74ec - 0x1c7524
void caseD_19_0x1c74ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x1c74ec");
#endif

    switch (ctx->pc) {
        case 0x1c74f8u: goto label_1c74f8;
        case 0x1c7504u: goto label_1c7504;
        case 0x1c7510u: goto label_1c7510;
        default: break;
    }

    ctx->pc = 0x1c74ecu;

    // 0x1c74ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74f0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74F0u;
    SET_GPR_U32(ctx, 31, 0x1C74F8u);
    ctx->pc = 0x1C74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74F0u;
    // 0x1c74f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74F0u, 0x1C74F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74F8u;
label_1c74f8:
    // 0x1c74f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74fc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74FCu;
    SET_GPR_U32(ctx, 31, 0x1C7504u);
    ctx->pc = 0x1C7500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74FCu;
    // 0x1c7500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74FCu, 0x1C7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7504u;
label_1c7504:
    // 0x1c7504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7508: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7508u;
    SET_GPR_U32(ctx, 31, 0x1C7510u);
    ctx->pc = 0x1C750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7508u;
    // 0x1c750c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7508u, 0x1C7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7510u;
label_1c7510:
    // 0x1c7510: 0x8e0301fc  lw          $v1, 0x1FC($s0)
    ctx->pc = 0x1c7510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x1c7514: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7518: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7518u;
    {
        const bool branch_taken_0x1c7518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7518u;
        // 0x1c751c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7518) {
            ctx->pc = 0x1C7524u;
            return;
        }
    }
    ctx->pc = 0x1C7520u;
    // 0x1c7520: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x1c7524u;
}
