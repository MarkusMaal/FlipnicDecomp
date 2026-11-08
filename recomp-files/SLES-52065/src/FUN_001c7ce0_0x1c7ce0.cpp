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

// Function: FUN_001c7ce0
// Address: 0x1c7ce0 - 0x1c7d40
void FUN_001c7ce0_0x1c7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c7ce0_0x1c7ce0");
#endif

    switch (ctx->pc) {
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d28u: goto label_1c7d28;
        default: break;
    }

    ctx->pc = 0x1c7ce0u;

    // 0x1c7ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cf4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7CF4u;
    {
        const bool branch_taken_0x1c7cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CF4u;
        // 0x1c7cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cf4) {
            ctx->pc = 0x1C7D28u;
            goto label_1c7d28;
        }
    }
    ctx->pc = 0x1C7CFCu;
    // 0x1c7cfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c7d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d04: 0x2442bc80  addiu       $v0, $v0, -0x4380
    ctx->pc = 0x1c7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950016));
    // 0x1c7d08: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C7D08u;
    SET_GPR_U32(ctx, 31, 0x1C7D10u);
    ctx->pc = 0x1C7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D08u;
    // 0x1c7d0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C7D08u, 0x1C7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D10u;
label_1c7d10:
    // 0x1c7d10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c7d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c7d14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c7d14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c7d18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7D18u;
    {
        const bool branch_taken_0x1c7d18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D18u;
        // 0x1c7d1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d18) {
            ctx->pc = 0x1C7D2Cu;
            goto label_1c7d2c;
        }
    }
    ctx->pc = 0x1C7D20u;
    // 0x1c7d20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C7D20u;
    SET_GPR_U32(ctx, 31, 0x1C7D28u);
    ctx->pc = 0x1C7D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D20u;
    // 0x1c7d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C7D20u, 0x1C7D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D28u;
label_1c7d28:
    // 0x1c7d28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c7d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c7d2c:
    // 0x1c7d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D38u;
        // 0x1c7d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7D40u;
}
