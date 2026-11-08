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

// Function: FUN_001dd038
// Address: 0x1dd038 - 0x1dd090
void FUN_001dd038_0x1dd038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd038_0x1dd038");
#endif

    ctx->pc = 0x1dd038u;

    // 0x1dd038: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd03c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dd040: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd044: 0x24677330  addiu       $a3, $v1, 0x7330
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dd048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd04c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd050: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd054: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd058: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dd05c: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x1dd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x1dd060: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dd060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd064: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1dd068: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD068u;
    {
        const bool branch_taken_0x1dd068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dd068) {
            ctx->pc = 0x1DD088u;
            goto label_1dd088;
        }
    }
    ctx->pc = 0x1DD070u;
    // 0x1dd070: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1dd074: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD074u;
    {
        const bool branch_taken_0x1dd074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1dd074) {
            ctx->pc = 0x1DD088u;
            goto label_1dd088;
        }
    }
    ctx->pc = 0x1DD07Cu;
    // 0x1dd07c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd080: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1dd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1dd084: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dd088:
    // 0x1dd088: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD090u;
}
