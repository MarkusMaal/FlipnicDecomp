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

// Function: FUN_00186dd0
// Address: 0x186dd0 - 0x186e48
void FUN_00186dd0_0x186dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186dd0_0x186dd0");
#endif

    switch (ctx->pc) {
        case 0x186de8u: goto label_186de8;
        case 0x186e04u: goto label_186e04;
        case 0x186e20u: goto label_186e20;
        case 0x186e3cu: goto label_186e3c;
        default: break;
    }

    ctx->pc = 0x186dd0u;

    // 0x186dd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x186dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186dd8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186de0: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x186DE0u;
    SET_GPR_U32(ctx, 31, 0x186DE8u);
    ctx->pc = 0x186DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186DE0u;
    // 0x186de4: 0x24849470  addiu       $a0, $a0, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x186DE0u, 0x186DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DE8u;
label_186de8:
    // 0x186de8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186dec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186df0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186df4: 0x248495b0  addiu       $a0, $a0, -0x6A50
    ctx->pc = 0x186df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    // 0x186df8: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x186df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x186dfc: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186DFCu;
    SET_GPR_U32(ctx, 31, 0x186E04u);
    ctx->pc = 0x186E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186DFCu;
    // 0x186e00: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186DFCu, 0x186E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E04u;
label_186e04:
    // 0x186e04: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186e08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186e0c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186e10: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
    // 0x186e14: 0x24a59570  addiu       $a1, $a1, -0x6A90
    ctx->pc = 0x186e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940016));
    // 0x186e18: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186E18u;
    SET_GPR_U32(ctx, 31, 0x186E20u);
    ctx->pc = 0x186E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E18u;
    // 0x186e1c: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186E18u, 0x186E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E20u;
label_186e20:
    // 0x186e20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186e24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186e28: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186e2c: 0x248495f0  addiu       $a0, $a0, -0x6A10
    ctx->pc = 0x186e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940144));
    // 0x186e30: 0x24a594f0  addiu       $a1, $a1, -0x6B10
    ctx->pc = 0x186e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939888));
    // 0x186e34: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186E34u;
    SET_GPR_U32(ctx, 31, 0x186E3Cu);
    ctx->pc = 0x186E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E34u;
    // 0x186e38: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186E34u, 0x186E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E3Cu;
label_186e3c:
    // 0x186e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e40: 0x3e00008  jr          $ra
    ctx->pc = 0x186E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E40u;
        // 0x186e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E48u;
}
