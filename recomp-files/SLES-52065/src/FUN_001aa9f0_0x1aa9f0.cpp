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

// Function: FUN_001aa9f0
// Address: 0x1aa9f0 - 0x1aaa50
void FUN_001aa9f0_0x1aa9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa9f0_0x1aa9f0");
#endif

    switch (ctx->pc) {
        case 0x1aaa20u: goto label_1aaa20;
        case 0x1aaa38u: goto label_1aaa38;
        default: break;
    }

    ctx->pc = 0x1aa9f0u;

    // 0x1aa9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aaa00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaa00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa04: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AAA04u;
    {
        const bool branch_taken_0x1aaa04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA04u;
        // 0x1aaa08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa04) {
            ctx->pc = 0x1AAA38u;
            goto label_1aaa38;
        }
    }
    ctx->pc = 0x1AAA0Cu;
    // 0x1aaa0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aaa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aaa10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaa10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa14: 0x2442b600  addiu       $v0, $v0, -0x4A00
    ctx->pc = 0x1aaa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948352));
    // 0x1aaa18: 0xc064324  jal         func_190C90
    ctx->pc = 0x1AAA18u;
    SET_GPR_U32(ctx, 31, 0x1AAA20u);
    ctx->pc = 0x1AAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA18u;
    // 0x1aaa1c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1AAA18u, 0x1AAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA20u;
label_1aaa20:
    // 0x1aaa20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1aaa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1aaa24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aaa24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aaa28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAA28u;
    {
        const bool branch_taken_0x1aaa28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA28u;
        // 0x1aaa2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa28) {
            ctx->pc = 0x1AAA3Cu;
            goto label_1aaa3c;
        }
    }
    ctx->pc = 0x1AAA30u;
    // 0x1aaa30: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AAA30u;
    SET_GPR_U32(ctx, 31, 0x1AAA38u);
    ctx->pc = 0x1AAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA30u;
    // 0x1aaa34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AAA30u, 0x1AAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA38u;
label_1aaa38:
    // 0x1aaa38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aaa38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa3c:
    // 0x1aaa3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaa40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aaa40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaa44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aaa44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaa48: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA48u;
        // 0x1aaa4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA50u;
}
