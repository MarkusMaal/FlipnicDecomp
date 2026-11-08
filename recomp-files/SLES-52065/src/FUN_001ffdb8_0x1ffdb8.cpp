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

// Function: FUN_001ffdb8
// Address: 0x1ffdb8 - 0x1ffe3c
void FUN_001ffdb8_0x1ffdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ffdb8_0x1ffdb8");
#endif

    ctx->pc = 0x1ffdb8u;

    // 0x1ffdb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ffdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ffdbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ffdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ffdc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDC0u;
    {
        const bool branch_taken_0x1ffdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDC0u;
        // 0x1ffdc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdc0) {
            ctx->pc = 0x1FFDD0u;
            goto label_1ffdd0;
        }
    }
    ctx->pc = 0x1FFDC8u;
    // 0x1ffdc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffdcc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ffdccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1ffdd0:
    // 0x1ffdd0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1ffdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1ffdd4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ffdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ffdd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDD8u;
    {
        const bool branch_taken_0x1ffdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdd8) {
            ctx->pc = 0x1FFDE8u;
            goto label_1ffde8;
        }
    }
    ctx->pc = 0x1FFDE0u;
    // 0x1ffde0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ffde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ffde4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ffde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1ffde8:
    // 0x1ffde8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1ffde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1ffdec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ffdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ffdf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDF0u;
    {
        const bool branch_taken_0x1ffdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdf0) {
            ctx->pc = 0x1FFE00u;
            goto label_1ffe00;
        }
    }
    ctx->pc = 0x1FFDF8u;
    // 0x1ffdf8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ffdfc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ffe00:
    // 0x1ffe00: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1ffe04: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ffe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ffe08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE08u;
    {
        const bool branch_taken_0x1ffe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe08) {
            ctx->pc = 0x1FFE18u;
            goto label_1ffe18;
        }
    }
    ctx->pc = 0x1FFE10u;
    // 0x1ffe10: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ffe14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ffe18:
    // 0x1ffe18: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFE18u;
    {
        const bool branch_taken_0x1ffe18 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE18u;
        // 0x1ffe1c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe18) {
            ctx->pc = 0x1FFE30u;
            goto label_1ffe30;
        }
    }
    ctx->pc = 0x1FFE20u;
    // 0x1ffe20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ffe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ffe24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ffe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ffe28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFE28u;
    {
        const bool branch_taken_0x1ffe28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE28u;
        // 0x1ffe2c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe28) {
            ctx->pc = 0x1FFE34u;
            goto label_1ffe34;
        }
    }
    ctx->pc = 0x1FFE30u;
label_1ffe30:
    // 0x1ffe30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ffe30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe34:
    // 0x1ffe34: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE3Cu;
}
