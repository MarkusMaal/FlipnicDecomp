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

// Function: FUN_0015bcd0
// Address: 0x15bcd0 - 0x15bd40
void FUN_0015bcd0_0x15bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bcd0_0x15bcd0");
#endif

    switch (ctx->pc) {
        case 0x15bd10u: goto label_15bd10;
        case 0x15bd28u: goto label_15bd28;
        default: break;
    }

    ctx->pc = 0x15bcd0u;

    // 0x15bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bcd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bcd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bcdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bce4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BCE4u;
    {
        const bool branch_taken_0x15bce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCE4u;
        // 0x15bce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bce4) {
            ctx->pc = 0x15BD28u;
            goto label_15bd28;
        }
    }
    ctx->pc = 0x15BCECu;
    // 0x15bcec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bcf0: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x15bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x15bcf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BCF4u;
    {
        const bool branch_taken_0x15bcf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF4u;
        // 0x15bcf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcf4) {
            ctx->pc = 0x15BD10u;
            goto label_15bd10;
        }
    }
    ctx->pc = 0x15BCFCu;
    // 0x15bcfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15bd00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd04: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x15bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x15bd08: 0xc0418a0  jal         func_106280
    ctx->pc = 0x15BD08u;
    SET_GPR_U32(ctx, 31, 0x15BD10u);
    ctx->pc = 0x15BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD08u;
    // 0x15bd0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106280u, 0x15BD08u, 0x15BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD10u;
label_15bd10:
    // 0x15bd10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15bd14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bd18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BD18u;
    {
        const bool branch_taken_0x15bd18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD18u;
        // 0x15bd1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd18) {
            ctx->pc = 0x15BD2Cu;
            goto label_15bd2c;
        }
    }
    ctx->pc = 0x15BD20u;
    // 0x15bd20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BD20u;
    SET_GPR_U32(ctx, 31, 0x15BD28u);
    ctx->pc = 0x15BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD20u;
    // 0x15bd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BD20u, 0x15BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD28u;
label_15bd28:
    // 0x15bd28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15bd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bd2c:
    // 0x15bd2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bd38: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD38u;
        // 0x15bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BD40u;
}
