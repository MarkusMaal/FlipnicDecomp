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

// Function: FUN_00186ef0
// Address: 0x186ef0 - 0x186f30
void FUN_00186ef0_0x186ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186ef0_0x186ef0");
#endif

    switch (ctx->pc) {
        case 0x186f08u: goto label_186f08;
        case 0x186f24u: goto label_186f24;
        default: break;
    }

    ctx->pc = 0x186ef0u;

    // 0x186ef0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x186ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ef4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186ef8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186f00: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x186F00u;
    SET_GPR_U32(ctx, 31, 0x186F08u);
    ctx->pc = 0x186F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F00u;
    // 0x186f04: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x186F00u, 0x186F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F08u;
label_186f08:
    // 0x186f08: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186f0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186f10: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186f14: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x186f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
    // 0x186f18: 0x24a59570  addiu       $a1, $a1, -0x6A90
    ctx->pc = 0x186f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940016));
    // 0x186f1c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186F1Cu;
    SET_GPR_U32(ctx, 31, 0x186F24u);
    ctx->pc = 0x186F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F1Cu;
    // 0x186f20: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186F1Cu, 0x186F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F24u;
label_186f24:
    // 0x186f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186f28: 0x3e00008  jr          $ra
    ctx->pc = 0x186F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F28u;
        // 0x186f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186F30u;
}
