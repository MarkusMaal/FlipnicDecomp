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

// Function: FUN_00158ff0
// Address: 0x158ff0 - 0x159050
void FUN_00158ff0_0x158ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158ff0_0x158ff0");
#endif

    switch (ctx->pc) {
        case 0x159024u: goto label_159024;
        default: break;
    }

    ctx->pc = 0x158ff0u;

    // 0x158ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158ff8: 0x8c8201f0  lw          $v0, 0x1F0($a0)
    ctx->pc = 0x158ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x158ffc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158FFCu;
    {
        const bool branch_taken_0x158ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FFCu;
        // 0x159000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ffc) {
            ctx->pc = 0x15900Cu;
            goto label_15900c;
        }
    }
    ctx->pc = 0x159004u;
    // 0x159004: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x159004u;
    {
        const bool branch_taken_0x159004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159004u;
        // 0x159008: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159004) {
            ctx->pc = 0x159048u;
            goto label_159048;
        }
    }
    ctx->pc = 0x15900Cu;
label_15900c:
    // 0x15900c: 0xc4810200  lwc1        $f1, 0x200($a0)
    ctx->pc = 0x15900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159010: 0x24a60300  addiu       $a2, $a1, 0x300
    ctx->pc = 0x159010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x159014: 0xc4a001c0  lwc1        $f0, 0x1C0($a1)
    ctx->pc = 0x159014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159018: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x159018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x15901c: 0xc054d0c  jal         func_153430
    ctx->pc = 0x15901Cu;
    SET_GPR_U32(ctx, 31, 0x159024u);
    ctx->pc = 0x159020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15901Cu;
    // 0x159020: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x15901Cu, 0x159024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159024u;
label_159024:
    // 0x159024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x159024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159028: 0x0  nop
    ctx->pc = 0x159028u;
    // NOP
    // 0x15902c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15902cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159030: 0x0  nop
    ctx->pc = 0x159030u;
    // NOP
    // 0x159034: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x159034u;
    {
        const bool branch_taken_0x159034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159034u;
        // 0x159038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159034) {
            ctx->pc = 0x159044u;
            goto label_159044;
        }
    }
    ctx->pc = 0x15903Cu;
    // 0x15903c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x15903Cu;
    {
        const bool branch_taken_0x15903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15903Cu;
        // 0x159040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15903c) {
            ctx->pc = 0x159044u;
            goto label_159044;
        }
    }
    ctx->pc = 0x159044u;
label_159044:
    // 0x159044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159048:
    // 0x159048: 0x3e00008  jr          $ra
    ctx->pc = 0x159048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159048u;
        // 0x15904c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159050u;
}
