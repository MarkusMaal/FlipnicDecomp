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

// Function: caseD_13
// Address: 0x1c72dc - 0x1c731c
void caseD_13_0x1c72dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1c72dc");
#endif

    switch (ctx->pc) {
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72f4u: goto label_1c72f4;
        case 0x1c7300u: goto label_1c7300;
        case 0x1c7310u: goto label_1c7310;
        default: break;
    }

    ctx->pc = 0x1c72dcu;

    // 0x1c72dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c72dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72e0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C72E0u;
    SET_GPR_U32(ctx, 31, 0x1C72E8u);
    ctx->pc = 0x1C72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72E0u;
    // 0x1c72e4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C72E0u, 0x1C72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72E8u;
label_1c72e8:
    // 0x1c72e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c72e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72ec: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C72ECu;
    SET_GPR_U32(ctx, 31, 0x1C72F4u);
    ctx->pc = 0x1C72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72ECu;
    // 0x1c72f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C72ECu, 0x1C72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72F4u;
label_1c72f4:
    // 0x1c72f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c72f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72f8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C72F8u;
    SET_GPR_U32(ctx, 31, 0x1C7300u);
    ctx->pc = 0x1C72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72F8u;
    // 0x1c72fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C72F8u, 0x1C7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7300u;
label_1c7300:
    // 0x1c7300: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7304: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c7304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7308: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C7308u;
    SET_GPR_U32(ctx, 31, 0x1C7310u);
    ctx->pc = 0x1C730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7308u;
    // 0x1c730c: 0x24a520f0  addiu       $a1, $a1, 0x20F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C7308u, 0x1C7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7310u;
label_1c7310:
    // 0x1c7310: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c7314: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x1C7314u;
    {
        const bool branch_taken_0x1c7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7314u;
        // 0x1c7318: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7314) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C731Cu;
}
