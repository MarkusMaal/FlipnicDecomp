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

// Function: FUN_001ad0d0
// Address: 0x1ad0d0 - 0x1ad11c
void FUN_001ad0d0_0x1ad0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad0d0_0x1ad0d0");
#endif

    switch (ctx->pc) {
        case 0x1ad108u: goto label_1ad108;
        default: break;
    }

    ctx->pc = 0x1ad0d0u;

    // 0x1ad0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ad0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0e0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD0E0u;
    {
        const bool branch_taken_0x1ad0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0E0u;
        // 0x1ad0e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0e0) {
            ctx->pc = 0x1AD10Cu;
            goto label_1ad10c;
        }
    }
    ctx->pc = 0x1AD0E8u;
    // 0x1ad0e8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ad0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ad0ec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ad0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ad0f0: 0x2463b770  addiu       $v1, $v1, -0x4890
    ctx->pc = 0x1ad0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948720));
    // 0x1ad0f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ad0f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ad0f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD0F8u;
    {
        const bool branch_taken_0x1ad0f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0F8u;
        // 0x1ad0fc: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0f8) {
            ctx->pc = 0x1AD108u;
            goto label_1ad108;
        }
    }
    ctx->pc = 0x1AD100u;
    // 0x1ad100: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AD100u;
    SET_GPR_U32(ctx, 31, 0x1AD108u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AD100u, 0x1AD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD108u;
label_1ad108:
    // 0x1ad108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ad108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad10c:
    // 0x1ad10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad114: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD114u;
        // 0x1ad118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD11Cu;
}
