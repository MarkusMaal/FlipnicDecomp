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

// Function: FUN_0013cfe0
// Address: 0x13cfe0 - 0x13d02c
void FUN_0013cfe0_0x13cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cfe0_0x13cfe0");
#endif

    switch (ctx->pc) {
        case 0x13cffcu: goto label_13cffc;
        case 0x13d01cu: goto label_13d01c;
        default: break;
    }

    ctx->pc = 0x13cfe0u;

    // 0x13cfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cfe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cfe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cfec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cff0: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x13cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x13cff4: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x13CFF4u;
    SET_GPR_U32(ctx, 31, 0x13CFFCu);
    ctx->pc = 0x13CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFF4u;
    // 0x13cff8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x13CFF4u, 0x13CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFFCu;
label_13cffc:
    // 0x13cffc: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x13cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x13d000: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x13d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x13d004: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13d008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d00c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13d00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13d010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13d014: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x13D014u;
    SET_GPR_U32(ctx, 31, 0x13D01Cu);
    ctx->pc = 0x13D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D014u;
    // 0x13d018: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x13D014u, 0x13D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D01Cu;
label_13d01c:
    // 0x13d01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d024: 0x3e00008  jr          $ra
    ctx->pc = 0x13D024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D024u;
        // 0x13d028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D02Cu;
}
