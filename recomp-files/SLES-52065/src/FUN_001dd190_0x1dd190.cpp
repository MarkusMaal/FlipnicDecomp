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

// Function: FUN_001dd190
// Address: 0x1dd190 - 0x1dd1e8
void FUN_001dd190_0x1dd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd190_0x1dd190");
#endif

    ctx->pc = 0x1dd190u;

    // 0x1dd190: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dd190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd194: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dd194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dd198: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd19c: 0x24677330  addiu       $a3, $v1, 0x7330
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dd1a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd1a4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd1a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd1ac: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd1b0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dd1b4: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x1dd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x1dd1b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dd1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1bc: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1dd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1dd1c0: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD1C0u;
    {
        const bool branch_taken_0x1dd1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dd1c0) {
            ctx->pc = 0x1DD1E0u;
            goto label_1dd1e0;
        }
    }
    ctx->pc = 0x1DD1C8u;
    // 0x1dd1c8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1dd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1dd1cc: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD1CCu;
    {
        const bool branch_taken_0x1dd1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dd1cc) {
            ctx->pc = 0x1DD1E0u;
            goto label_1dd1e0;
        }
    }
    ctx->pc = 0x1DD1D4u;
    // 0x1dd1d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd1d8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1dd1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1dd1dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dd1e0:
    // 0x1dd1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1E8u;
}
