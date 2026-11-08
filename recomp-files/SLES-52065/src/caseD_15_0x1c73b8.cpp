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

// Function: caseD_15
// Address: 0x1c73b8 - 0x1c73f8
void caseD_15_0x1c73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x1c73b8");
#endif

    switch (ctx->pc) {
        case 0x1c73c4u: goto label_1c73c4;
        case 0x1c73d0u: goto label_1c73d0;
        case 0x1c73dcu: goto label_1c73dc;
        case 0x1c73ecu: goto label_1c73ec;
        default: break;
    }

    ctx->pc = 0x1c73b8u;

    // 0x1c73b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73bc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73BCu;
    SET_GPR_U32(ctx, 31, 0x1C73C4u);
    ctx->pc = 0x1C73C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73BCu;
    // 0x1c73c0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73BCu, 0x1C73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73C4u;
label_1c73c4:
    // 0x1c73c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73c8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73C8u;
    SET_GPR_U32(ctx, 31, 0x1C73D0u);
    ctx->pc = 0x1C73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73C8u;
    // 0x1c73cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73C8u, 0x1C73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73D0u;
label_1c73d0:
    // 0x1c73d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73d4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73D4u;
    SET_GPR_U32(ctx, 31, 0x1C73DCu);
    ctx->pc = 0x1C73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73D4u;
    // 0x1c73d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73D4u, 0x1C73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73DCu;
label_1c73dc:
    // 0x1c73dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c73dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c73e0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c73e4: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C73E4u;
    SET_GPR_U32(ctx, 31, 0x1C73ECu);
    ctx->pc = 0x1C73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73E4u;
    // 0x1c73e8: 0x24a520f0  addiu       $a1, $a1, 0x20F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C73E4u, 0x1C73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73ECu;
label_1c73ec:
    // 0x1c73ec: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c73f0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1C73F0u;
    {
        const bool branch_taken_0x1c73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73F0u;
        // 0x1c73f4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73f0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C73F8u;
}
