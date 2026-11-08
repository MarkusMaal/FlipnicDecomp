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

// Function: FUN_001908b0
// Address: 0x1908b0 - 0x190924
void FUN_001908b0_0x1908b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001908b0_0x1908b0");
#endif

    switch (ctx->pc) {
        case 0x1908c4u: goto label_1908c4;
        case 0x1908d0u: goto label_1908d0;
        case 0x1908f8u: goto label_1908f8;
        case 0x19090cu: goto label_19090c;
        default: break;
    }

    ctx->pc = 0x1908b0u;

    // 0x1908b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1908b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1908b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1908b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1908b8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1908b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1908bc: 0xc056360  jal         func_158D80
    ctx->pc = 0x1908BCu;
    SET_GPR_U32(ctx, 31, 0x1908C4u);
    ctx->pc = 0x1908C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908BCu;
    // 0x1908c0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1908BCu, 0x1908C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908C4u;
label_1908c4:
    // 0x1908c4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1908c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1908c8: 0xc063ecc  jal         func_18FB30
    ctx->pc = 0x1908C8u;
    SET_GPR_U32(ctx, 31, 0x1908D0u);
    ctx->pc = 0x1908CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908C8u;
    // 0x1908cc: 0x24440210  addiu       $a0, $v0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB30u, 0x1908C8u, 0x1908D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908D0u;
label_1908d0:
    // 0x1908d0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1908d4: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1908d8: 0x24a5b210  addiu       $a1, $a1, -0x4DF0
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947344));
    // 0x1908dc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1908e0: 0x2463b264  addiu       $v1, $v1, -0x4D9C
    ctx->pc = 0x1908e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947428));
    // 0x1908e4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1908e8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1908e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1908ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1908f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1908F0u;
    SET_GPR_U32(ctx, 31, 0x1908F8u);
    ctx->pc = 0x1908F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908F0u;
    // 0x1908f4: 0xac430444  sw          $v1, 0x444($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1908F0u, 0x1908F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908F8u;
label_1908f8:
    // 0x1908f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1908F8u;
    {
        const bool branch_taken_0x1908f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908F8u;
        // 0x1908fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908f8) {
            ctx->pc = 0x19090Cu;
            goto label_19090c;
        }
    }
    ctx->pc = 0x190900u;
    // 0x190900: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x190904: 0xc0621c0  jal         func_188700
    ctx->pc = 0x190904u;
    SET_GPR_U32(ctx, 31, 0x19090Cu);
    ctx->pc = 0x190908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190904u;
    // 0x190908: 0x27868350  addiu       $a2, $gp, -0x7CB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x190904u, 0x19090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19090Cu;
label_19090c:
    // 0x19090c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x19090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x190910: 0xac620450  sw          $v0, 0x450($v1)
    ctx->pc = 0x190910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 2));
    // 0x190914: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x190918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19091c: 0x3e00008  jr          $ra
    ctx->pc = 0x19091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19091Cu;
        // 0x190920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19091Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190924u;
}
