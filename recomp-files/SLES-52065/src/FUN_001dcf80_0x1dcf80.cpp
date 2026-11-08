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

// Function: FUN_001dcf80
// Address: 0x1dcf80 - 0x1dcfd8
void FUN_001dcf80_0x1dcf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dcf80_0x1dcf80");
#endif

    ctx->pc = 0x1dcf80u;

    // 0x1dcf80: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dcf84: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dcf88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dcf8c: 0x24677330  addiu       $a3, $v1, 0x7330
    ctx->pc = 0x1dcf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dcf90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dcf94: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dcf94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcf98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dcf9c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1dcf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dcfa0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1dcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dcfa4: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x1dcfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
    // 0x1dcfa8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dcfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcfac: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1dcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1dcfb0: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCFB0u;
    {
        const bool branch_taken_0x1dcfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dcfb0) {
            ctx->pc = 0x1DCFD0u;
            goto label_1dcfd0;
        }
    }
    ctx->pc = 0x1DCFB8u;
    // 0x1dcfb8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1dcfbc: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCFBCu;
    {
        const bool branch_taken_0x1dcfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dcfbc) {
            ctx->pc = 0x1DCFD0u;
            goto label_1dcfd0;
        }
    }
    ctx->pc = 0x1DCFC4u;
    // 0x1dcfc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcfc8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1dcfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1dcfcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dcfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dcfd0:
    // 0x1dcfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCFD8u;
}
