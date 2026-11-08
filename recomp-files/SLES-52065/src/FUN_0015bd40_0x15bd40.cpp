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

// Function: FUN_0015bd40
// Address: 0x15bd40 - 0x15bdb0
void FUN_0015bd40_0x15bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bd40_0x15bd40");
#endif

    switch (ctx->pc) {
        case 0x15bd80u: goto label_15bd80;
        case 0x15bd98u: goto label_15bd98;
        default: break;
    }

    ctx->pc = 0x15bd40u;

    // 0x15bd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bd50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BD54u;
    {
        const bool branch_taken_0x15bd54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD54u;
        // 0x15bd58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd54) {
            ctx->pc = 0x15BD98u;
            goto label_15bd98;
        }
    }
    ctx->pc = 0x15BD5Cu;
    // 0x15bd5c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bd60: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x15bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x15bd64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BD64u;
    {
        const bool branch_taken_0x15bd64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD64u;
        // 0x15bd68: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd64) {
            ctx->pc = 0x15BD80u;
            goto label_15bd80;
        }
    }
    ctx->pc = 0x15BD6Cu;
    // 0x15bd6c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bd70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd74: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x15bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x15bd78: 0xc0418a0  jal         func_106280
    ctx->pc = 0x15BD78u;
    SET_GPR_U32(ctx, 31, 0x15BD80u);
    ctx->pc = 0x15BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD78u;
    // 0x15bd7c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106280u, 0x15BD78u, 0x15BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD80u;
label_15bd80:
    // 0x15bd80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15bd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15bd84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bd84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bd88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD88u;
        // 0x15bd8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BD9Cu;
            goto label_15bd9c;
        }
    }
    ctx->pc = 0x15BD90u;
    // 0x15bd90: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BD90u;
    SET_GPR_U32(ctx, 31, 0x15BD98u);
    ctx->pc = 0x15BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD90u;
    // 0x15bd94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BD90u, 0x15BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD98u;
label_15bd98:
    // 0x15bd98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15bd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bd9c:
    // 0x15bd9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDA8u;
        // 0x15bdac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BDB0u;
}
