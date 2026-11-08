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

// Function: FUN_00113cd0
// Address: 0x113cd0 - 0x113d40
void FUN_00113cd0_0x113cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113cd0_0x113cd0");
#endif

    switch (ctx->pc) {
        case 0x113d10u: goto label_113d10;
        case 0x113d28u: goto label_113d28;
        default: break;
    }

    ctx->pc = 0x113cd0u;

    // 0x113cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ce4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x113CE4u;
    {
        const bool branch_taken_0x113ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CE4u;
        // 0x113ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ce4) {
            ctx->pc = 0x113D28u;
            goto label_113d28;
        }
    }
    ctx->pc = 0x113CECu;
    // 0x113cec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113cf0: 0x24428358  addiu       $v0, $v0, -0x7CA8
    ctx->pc = 0x113cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935384));
    // 0x113cf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113CF4u;
    {
        const bool branch_taken_0x113cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CF4u;
        // 0x113cf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cf4) {
            ctx->pc = 0x113D10u;
            goto label_113d10;
        }
    }
    ctx->pc = 0x113CFCu;
    // 0x113cfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113d00: 0x24428348  addiu       $v0, $v0, -0x7CB8
    ctx->pc = 0x113d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935368));
    // 0x113d04: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x113d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x113d08: 0xc04018c  jal         func_100630
    ctx->pc = 0x113D08u;
    SET_GPR_U32(ctx, 31, 0x113D10u);
    ctx->pc = 0x113D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D08u;
    // 0x113d0c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x113D08u, 0x113D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D10u;
label_113d10:
    // 0x113d10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x113d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x113d14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x113d14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113d18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113D18u;
    {
        const bool branch_taken_0x113d18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D18u;
        // 0x113d1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d18) {
            ctx->pc = 0x113D2Cu;
            goto label_113d2c;
        }
    }
    ctx->pc = 0x113D20u;
    // 0x113d20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x113D20u;
    SET_GPR_U32(ctx, 31, 0x113D28u);
    ctx->pc = 0x113D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D20u;
    // 0x113d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x113D20u, 0x113D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D28u;
label_113d28:
    // 0x113d28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113d2c:
    // 0x113d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113d38: 0x3e00008  jr          $ra
    ctx->pc = 0x113D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D38u;
        // 0x113d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D40u;
}
