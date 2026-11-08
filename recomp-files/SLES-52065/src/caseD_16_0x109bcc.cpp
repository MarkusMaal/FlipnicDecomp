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

// Function: caseD_16
// Address: 0x109bcc - 0x109bf8
void caseD_16_0x109bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x109bcc");
#endif

    switch (ctx->pc) {
        case 0x109bd4u: goto label_109bd4;
        case 0x109bdcu: goto label_109bdc;
        case 0x109be4u: goto label_109be4;
        case 0x109bf0u: goto label_109bf0;
        default: break;
    }

    ctx->pc = 0x109bccu;

    // 0x109bcc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109BCCu;
    SET_GPR_U32(ctx, 31, 0x109BD4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109BCCu, 0x109BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BD4u;
label_109bd4:
    // 0x109bd4: 0xc04a02c  jal         func_1280B0
    ctx->pc = 0x109BD4u;
    SET_GPR_U32(ctx, 31, 0x109BDCu);
    ctx->pc = 0x109BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BD4u;
    // 0x109bd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x109BD4u, 0x109BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BDCu;
label_109bdc:
    // 0x109bdc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109BDCu;
    SET_GPR_U32(ctx, 31, 0x109BE4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109BDCu, 0x109BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BE4u;
label_109be4:
    // 0x109be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109be8: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x109BE8u;
    SET_GPR_U32(ctx, 31, 0x109BF0u);
    ctx->pc = 0x109BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BE8u;
    // 0x109bec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x109BE8u, 0x109BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BF0u;
label_109bf0:
    // 0x109bf0: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x109BF0u;
    {
        const bool branch_taken_0x109bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109bf0) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109BF8u;
}
