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

// Function: FUN_001dcfd8
// Address: 0x1dcfd8 - 0x1dd034
void FUN_001dcfd8_0x1dcfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dcfd8_0x1dcfd8");
#endif

    ctx->pc = 0x1dcfd8u;

    // 0x1dcfd8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dcfdc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dcfe0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dcfe4: 0x24677330  addiu       $a3, $v1, 0x7330
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dcfe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dcfec: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1dcff0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dcff4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dcff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcff8: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1dcff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dcffc: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1dcffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dd000: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x1dd000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x1dd004: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd008: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1dd008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1dd00c: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD00Cu;
    {
        const bool branch_taken_0x1dd00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD00Cu;
        // 0x1dd010: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd00c) {
            ctx->pc = 0x1DD02Cu;
            goto label_1dd02c;
        }
    }
    ctx->pc = 0x1DD014u;
    // 0x1dd014: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1dd018: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD018u;
    {
        const bool branch_taken_0x1dd018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD018u;
        // 0x1dd01c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd018) {
            ctx->pc = 0x1DD02Cu;
            goto label_1dd02c;
        }
    }
    ctx->pc = 0x1DD020u;
    // 0x1dd020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd024: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1dd024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1dd028: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dd02c:
    // 0x1dd02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD034u;
}
