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

// Function: FUN_00186e90
// Address: 0x186e90 - 0x186eec
void FUN_00186e90_0x186e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186e90_0x186e90");
#endif

    switch (ctx->pc) {
        case 0x186ea8u: goto label_186ea8;
        case 0x186ec4u: goto label_186ec4;
        case 0x186ee0u: goto label_186ee0;
        default: break;
    }

    ctx->pc = 0x186e90u;

    // 0x186e90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x186e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186e98: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186ea0: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x186EA0u;
    SET_GPR_U32(ctx, 31, 0x186EA8u);
    ctx->pc = 0x186EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186EA0u;
    // 0x186ea4: 0x248494f0  addiu       $a0, $a0, -0x6B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x186EA0u, 0x186EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186EA8u;
label_186ea8:
    // 0x186ea8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186eac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186eb0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186eb4: 0x248495f0  addiu       $a0, $a0, -0x6A10
    ctx->pc = 0x186eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940144));
    // 0x186eb8: 0x24a594f0  addiu       $a1, $a1, -0x6B10
    ctx->pc = 0x186eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939888));
    // 0x186ebc: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186EBCu;
    SET_GPR_U32(ctx, 31, 0x186EC4u);
    ctx->pc = 0x186EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186EBCu;
    // 0x186ec0: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186EBCu, 0x186EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186EC4u;
label_186ec4:
    // 0x186ec4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186ec8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186ecc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186eccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186ed0: 0x248495b0  addiu       $a0, $a0, -0x6A50
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    // 0x186ed4: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x186ed8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186ED8u;
    SET_GPR_U32(ctx, 31, 0x186EE0u);
    ctx->pc = 0x186EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186ED8u;
    // 0x186edc: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186ED8u, 0x186EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186EE0u;
label_186ee0:
    // 0x186ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x186EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EE4u;
        // 0x186ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186EECu;
}
