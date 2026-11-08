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

// Function: FUN_001cbec0
// Address: 0x1cbec0 - 0x1cbf24
void FUN_001cbec0_0x1cbec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbec0_0x1cbec0");
#endif

    switch (ctx->pc) {
        case 0x1cbf10u: goto label_1cbf10;
        default: break;
    }

    ctx->pc = 0x1cbec0u;

    // 0x1cbec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbec4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbecc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbed0: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cbed4: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cbed8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbedc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cbee0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cbee4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cbee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cbee8: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1cbee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbeec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cbef0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1cbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1cbef4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cbef8: 0x2484f9f0  addiu       $a0, $a0, -0x610
    ctx->pc = 0x1cbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965744));
    // 0x1cbefc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cbf00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbf04: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1cbf08: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CBF08u;
    SET_GPR_U32(ctx, 31, 0x1CBF10u);
    ctx->pc = 0x1CBF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF08u;
    // 0x1cbf0c: 0x24a529d0  addiu       $a1, $a1, 0x29D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CBF08u, 0x1CBF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF10u;
label_1cbf10:
    // 0x1cbf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbf14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1cbf18: 0x2442f9f0  addiu       $v0, $v0, -0x610
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x1cbf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF1Cu;
        // 0x1cbf20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBF24u;
}
