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

// Function: FUN_00136020
// Address: 0x136020 - 0x13608c
void FUN_00136020_0x136020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136020_0x136020");
#endif

    switch (ctx->pc) {
        case 0x136058u: goto label_136058;
        case 0x136080u: goto label_136080;
        default: break;
    }

    ctx->pc = 0x136020u;

    // 0x136020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136028: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x136028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13602c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x13602cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x136030: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x136030u;
    {
        const bool branch_taken_0x136030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136030u;
        // 0x136034: 0xa3082b  sltu        $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136030) {
            ctx->pc = 0x136060u;
            goto label_136060;
        }
    }
    ctx->pc = 0x136038u;
    // 0x136038: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x136038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x13603c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x13603cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x136040: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x136040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136044: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x136044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x136048: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x136048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13604c: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x13604cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x136050: 0xc04d858  jal         func_136160
    ctx->pc = 0x136050u;
    SET_GPR_U32(ctx, 31, 0x136058u);
    ctx->pc = 0x136054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136050u;
    // 0x136054: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136160u, 0x136050u, 0x136058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136058u;
label_136058:
    // 0x136058: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136058u;
    {
        const bool branch_taken_0x136058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136058u;
        // 0x13605c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136058) {
            ctx->pc = 0x136084u;
            goto label_136084;
        }
    }
    ctx->pc = 0x136060u;
label_136060:
    // 0x136060: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x136060u;
    {
        const bool branch_taken_0x136060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136060) {
            ctx->pc = 0x136080u;
            goto label_136080;
        }
    }
    ctx->pc = 0x136068u;
    // 0x136068: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13606c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x136070: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136074: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x136074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x136078: 0xc04d824  jal         func_136090
    ctx->pc = 0x136078u;
    SET_GPR_U32(ctx, 31, 0x136080u);
    ctx->pc = 0x13607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136078u;
    // 0x13607c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136090u, 0x136078u, 0x136080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136080u;
label_136080:
    // 0x136080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136084:
    // 0x136084: 0x3e00008  jr          $ra
    ctx->pc = 0x136084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136084u;
        // 0x136088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13608Cu;
}
