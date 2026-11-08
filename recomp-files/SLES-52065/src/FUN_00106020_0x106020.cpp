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

// Function: FUN_00106020
// Address: 0x106020 - 0x1060b0
void FUN_00106020_0x106020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106020_0x106020");
#endif

    switch (ctx->pc) {
        case 0x106080u: goto label_106080;
        case 0x106098u: goto label_106098;
        default: break;
    }

    ctx->pc = 0x106020u;

    // 0x106020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10602c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106034: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x106034u;
    {
        const bool branch_taken_0x106034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106034u;
        // 0x106038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106034) {
            ctx->pc = 0x106098u;
            goto label_106098;
        }
    }
    ctx->pc = 0x10603Cu;
    // 0x10603c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106040: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x106040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x106044: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x106044u;
    {
        const bool branch_taken_0x106044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106044u;
        // 0x106048: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106044) {
            ctx->pc = 0x106080u;
            goto label_106080;
        }
    }
    ctx->pc = 0x10604Cu;
    // 0x10604c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106050: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x106054: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x106054u;
    {
        const bool branch_taken_0x106054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106054u;
        // 0x106058: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106054) {
            ctx->pc = 0x106080u;
            goto label_106080;
        }
    }
    ctx->pc = 0x10605Cu;
    // 0x10605c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106060: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x106064: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106064u;
    {
        const bool branch_taken_0x106064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106064u;
        // 0x106068: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106064) {
            ctx->pc = 0x106080u;
            goto label_106080;
        }
    }
    ctx->pc = 0x10606Cu;
    // 0x10606c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106074: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x106074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x106078: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x106078u;
    SET_GPR_U32(ctx, 31, 0x106080u);
    ctx->pc = 0x10607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106078u;
    // 0x10607c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x106078u, 0x106080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106080u;
label_106080:
    // 0x106080: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x106084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106088: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106088u;
    {
        const bool branch_taken_0x106088 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106088u;
        // 0x10608c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106088) {
            ctx->pc = 0x10609Cu;
            goto label_10609c;
        }
    }
    ctx->pc = 0x106090u;
    // 0x106090: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106090u;
    SET_GPR_U32(ctx, 31, 0x106098u);
    ctx->pc = 0x106094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106090u;
    // 0x106094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106090u, 0x106098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106098u;
label_106098:
    // 0x106098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10609c:
    // 0x10609c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10609cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1060a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1060a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1060a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1060a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1060a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1060A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1060ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060A8u;
        // 0x1060ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1060A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1060B0u;
}
