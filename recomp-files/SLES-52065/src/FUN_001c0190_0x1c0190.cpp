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

// Function: FUN_001c0190
// Address: 0x1c0190 - 0x1c01ec
void FUN_001c0190_0x1c0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0190_0x1c0190");
#endif

    ctx->pc = 0x1c0190u;

    // 0x1c0190: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c0190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c0194: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0198: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c019c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c019cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c01a0: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1c01a4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C01A4u;
    {
        const bool branch_taken_0x1c01a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01A4u;
        // 0x1c01a8: 0x8c842830  lw          $a0, 0x2830($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01a4) {
            ctx->pc = 0x1C01E0u;
            goto label_1c01e0;
        }
    }
    ctx->pc = 0x1C01ACu;
    // 0x1c01ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c01b0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C01B0u;
    {
        const bool branch_taken_0x1c01b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B0u;
        // 0x1c01b4: 0x2482001e  addiu       $v0, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b0) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01B8u;
    // 0x1c01b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C01BCu;
    {
        const bool branch_taken_0x1c01bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c01bc) {
            ctx->pc = 0x1C01D4u;
            goto label_1c01d4;
        }
    }
    ctx->pc = 0x1C01C4u;
    // 0x1c01c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C01C4u;
    {
        const bool branch_taken_0x1c01c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c01c4) {
            ctx->pc = 0x1C01D4u;
            goto label_1c01d4;
        }
    }
    ctx->pc = 0x1C01CCu;
    // 0x1c01cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C01CCu;
    {
        const bool branch_taken_0x1c01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01CCu;
        // 0x1c01d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01cc) {
            ctx->pc = 0x1C01E4u;
            goto label_1c01e4;
        }
    }
    ctx->pc = 0x1C01D4u;
label_1c01d4:
    // 0x1c01d4: 0x2482001e  addiu       $v0, $a0, 0x1E
    ctx->pc = 0x1c01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
label_1c01d8:
    // 0x1c01d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C01D8u;
    {
        const bool branch_taken_0x1c01d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c01d8) {
            ctx->pc = 0x1C01E4u;
            goto label_1c01e4;
        }
    }
    ctx->pc = 0x1C01E0u;
label_1c01e0:
    // 0x1c01e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c01e4:
    // 0x1c01e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01ECu;
}
