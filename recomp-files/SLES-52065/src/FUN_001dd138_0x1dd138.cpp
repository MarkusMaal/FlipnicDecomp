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

// Function: FUN_001dd138
// Address: 0x1dd138 - 0x1dd190
void FUN_001dd138_0x1dd138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd138_0x1dd138");
#endif

    ctx->pc = 0x1dd138u;

    // 0x1dd138: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dd138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd13c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dd13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dd140: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd144: 0x24677330  addiu       $a3, $v1, 0x7330
    ctx->pc = 0x1dd144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dd148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd14c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dd14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd150: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd154: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1dd154u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd158: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dd15c: 0xac650050  sw          $a1, 0x50($v1)
    ctx->pc = 0x1dd15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
    // 0x1dd160: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dd160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd164: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1dd168: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD168u;
    {
        const bool branch_taken_0x1dd168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dd168) {
            ctx->pc = 0x1DD188u;
            goto label_1dd188;
        }
    }
    ctx->pc = 0x1DD170u;
    // 0x1dd170: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1dd170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1dd174: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD174u;
    {
        const bool branch_taken_0x1dd174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dd174) {
            ctx->pc = 0x1DD188u;
            goto label_1dd188;
        }
    }
    ctx->pc = 0x1DD17Cu;
    // 0x1dd17c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd180: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1dd180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1dd184: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dd188:
    // 0x1dd188: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD190u;
}
