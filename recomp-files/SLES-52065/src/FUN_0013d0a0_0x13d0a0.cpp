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

// Function: FUN_0013d0a0
// Address: 0x13d0a0 - 0x13d104
void FUN_0013d0a0_0x13d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d0a0_0x13d0a0");
#endif

    switch (ctx->pc) {
        case 0x13d0c8u: goto label_13d0c8;
        default: break;
    }

    ctx->pc = 0x13d0a0u;

    // 0x13d0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d0b4: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x13d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13d0b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D0B8u;
    {
        const bool branch_taken_0x13d0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0B8u;
        // 0x13d0bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0b8) {
            ctx->pc = 0x13D0CCu;
            goto label_13d0cc;
        }
    }
    ctx->pc = 0x13D0C0u;
    // 0x13d0c0: 0xc04c2c0  jal         func_130B00
    ctx->pc = 0x13D0C0u;
    SET_GPR_U32(ctx, 31, 0x13D0C8u);
    ctx->pc = 0x130B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B00u, 0x13D0C0u, 0x13D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0C8u;
label_13d0c8:
    // 0x13d0c8: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x13d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_13d0cc:
    // 0x13d0cc: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13d0d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d0d4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x13d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x13d0d8: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13d0dc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x13d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x13d0e0: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13d0e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13d0e8: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13d0ec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13d0f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d0f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0FCu;
        // 0x13d100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D104u;
}
