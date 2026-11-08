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

// Function: FUN_001ad060
// Address: 0x1ad060 - 0x1ad0d0
void FUN_001ad060_0x1ad060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad060_0x1ad060");
#endif

    switch (ctx->pc) {
        case 0x1ad0a0u: goto label_1ad0a0;
        case 0x1ad0b8u: goto label_1ad0b8;
        default: break;
    }

    ctx->pc = 0x1ad060u;

    // 0x1ad060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ad064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ad06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad074: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AD074u;
    {
        const bool branch_taken_0x1ad074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD074u;
        // 0x1ad078: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad074) {
            ctx->pc = 0x1AD0B8u;
            goto label_1ad0b8;
        }
    }
    ctx->pc = 0x1AD07Cu;
    // 0x1ad07c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ad07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ad080: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x1ad080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x1ad084: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD084u;
    {
        const bool branch_taken_0x1ad084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD084u;
        // 0x1ad088: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad084) {
            ctx->pc = 0x1AD0A0u;
            goto label_1ad0a0;
        }
    }
    ctx->pc = 0x1AD08Cu;
    // 0x1ad08c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ad08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ad090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad094: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1ad098: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AD098u;
    SET_GPR_U32(ctx, 31, 0x1AD0A0u);
    ctx->pc = 0x1AD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD098u;
    // 0x1ad09c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AD098u, 0x1AD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0A0u;
label_1ad0a0:
    // 0x1ad0a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ad0a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ad0a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ad0a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD0A8u;
    {
        const bool branch_taken_0x1ad0a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0A8u;
        // 0x1ad0ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0a8) {
            ctx->pc = 0x1AD0BCu;
            goto label_1ad0bc;
        }
    }
    ctx->pc = 0x1AD0B0u;
    // 0x1ad0b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AD0B0u;
    SET_GPR_U32(ctx, 31, 0x1AD0B8u);
    ctx->pc = 0x1AD0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0B0u;
    // 0x1ad0b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AD0B0u, 0x1AD0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0B8u;
label_1ad0b8:
    // 0x1ad0b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ad0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0bc:
    // 0x1ad0bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0C8u;
        // 0x1ad0cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD0D0u;
}
