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

// Function: FUN_001cfb40
// Address: 0x1cfb40 - 0x1cfba0
void FUN_001cfb40_0x1cfb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cfb40_0x1cfb40");
#endif

    switch (ctx->pc) {
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb88u: goto label_1cfb88;
        default: break;
    }

    ctx->pc = 0x1cfb40u;

    // 0x1cfb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfb44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cfb50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cfb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb54: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CFB54u;
    {
        const bool branch_taken_0x1cfb54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB54u;
        // 0x1cfb58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb54) {
            ctx->pc = 0x1CFB88u;
            goto label_1cfb88;
        }
    }
    ctx->pc = 0x1CFB5Cu;
    // 0x1cfb5c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1cfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1cfb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb64: 0x2442bf20  addiu       $v0, $v0, -0x40E0
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950688));
    // 0x1cfb68: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1CFB68u;
    SET_GPR_U32(ctx, 31, 0x1CFB70u);
    ctx->pc = 0x1CFB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB68u;
    // 0x1cfb6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CFB68u, 0x1CFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB70u;
label_1cfb70:
    // 0x1cfb70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1cfb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1cfb74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cfb74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cfb78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFB78u;
    {
        const bool branch_taken_0x1cfb78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB78u;
        // 0x1cfb7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb78) {
            ctx->pc = 0x1CFB8Cu;
            goto label_1cfb8c;
        }
    }
    ctx->pc = 0x1CFB80u;
    // 0x1cfb80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1CFB80u;
    SET_GPR_U32(ctx, 31, 0x1CFB88u);
    ctx->pc = 0x1CFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFB80u;
    // 0x1cfb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CFB80u, 0x1CFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB88u;
label_1cfb88:
    // 0x1cfb88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cfb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb8c:
    // 0x1cfb8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cfb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfb98: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB98u;
        // 0x1cfb9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFBA0u;
}
