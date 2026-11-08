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

// Function: caseD_1d
// Address: 0x1c76c0 - 0x1c7720
void caseD_1d_0x1c76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1d_0x1c76c0");
#endif

    switch (ctx->pc) {
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c7714u: goto label_1c7714;
        default: break;
    }

    ctx->pc = 0x1c76c0u;

    // 0x1c76c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76c4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C76C4u;
    SET_GPR_U32(ctx, 31, 0x1C76CCu);
    ctx->pc = 0x1C76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C4u;
    // 0x1c76c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C76C4u, 0x1C76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76CCu;
label_1c76cc:
    // 0x1c76cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C76D0u;
    SET_GPR_U32(ctx, 31, 0x1C76D8u);
    ctx->pc = 0x1C76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76D0u;
    // 0x1c76d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C76D0u, 0x1C76D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76D8u;
label_1c76d8:
    // 0x1c76d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76dc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C76DCu;
    SET_GPR_U32(ctx, 31, 0x1C76E4u);
    ctx->pc = 0x1C76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76DCu;
    // 0x1c76e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C76DCu, 0x1C76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76E4u;
label_1c76e4:
    // 0x1c76e4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c76e8: 0xc06d000  jal         func_1B4000
    ctx->pc = 0x1C76E8u;
    SET_GPR_U32(ctx, 31, 0x1C76F0u);
    ctx->pc = 0x1C76ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76E8u;
    // 0x1c76ec: 0x8c24ca84  lw          $a0, -0x357C($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4000u, 0x1C76E8u, 0x1C76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76F0u;
label_1c76f0:
    // 0x1c76f0: 0xc07318c  jal         func_1CC630
    ctx->pc = 0x1C76F0u;
    SET_GPR_U32(ctx, 31, 0x1C76F8u);
    ctx->pc = 0x1CC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC630u, 0x1C76F0u, 0x1C76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76F8u;
label_1c76f8:
    // 0x1c76f8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c76f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c76fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7700: 0x8c26ca84  lw          $a2, -0x357C($at)
    ctx->pc = 0x1c7700u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c7704: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7708: 0x24a52110  addiu       $a1, $a1, 0x2110
    ctx->pc = 0x1c7708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8464));
    // 0x1c770c: 0xc074ad4  jal         func_1D2B50
    ctx->pc = 0x1C770Cu;
    SET_GPR_U32(ctx, 31, 0x1C7714u);
    ctx->pc = 0x1C7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C770Cu;
    // 0x1c7710: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2B50u, 0x1C770Cu, 0x1C7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7714u;
label_1c7714:
    // 0x1c7714: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c7714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c7718: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C7718u;
    {
        const bool branch_taken_0x1c7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7718u;
        // 0x1c771c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7718) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7720u;
}
