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

// Function: FUN_001b74c0
// Address: 0x1b74c0 - 0x1b750c
void FUN_001b74c0_0x1b74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b74c0_0x1b74c0");
#endif

    switch (ctx->pc) {
        case 0x1b74c0u: goto label_1b74c0;
        case 0x1b74c4u: goto label_1b74c4;
        case 0x1b74c8u: goto label_1b74c8;
        case 0x1b74ccu: goto label_1b74cc;
        case 0x1b74d0u: goto label_1b74d0;
        case 0x1b74d4u: goto label_1b74d4;
        case 0x1b74d8u: goto label_1b74d8;
        case 0x1b74dcu: goto label_1b74dc;
        case 0x1b74e0u: goto label_1b74e0;
        case 0x1b74e4u: goto label_1b74e4;
        case 0x1b74e8u: goto label_1b74e8;
        case 0x1b74ecu: goto label_1b74ec;
        case 0x1b74f0u: goto label_1b74f0;
        case 0x1b74f4u: goto label_1b74f4;
        case 0x1b74f8u: goto label_1b74f8;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7500u: goto label_1b7500;
        case 0x1b7504u: goto label_1b7504;
        case 0x1b7508u: goto label_1b7508;
        default: break;
    }

    ctx->pc = 0x1b74c0u;

label_1b74c0:
    // 0x1b74c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b74c4:
    // 0x1b74c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b74c8:
    // 0x1b74c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b74cc:
    // 0x1b74cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b74ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b74d0:
    // 0x1b74d0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1b74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_1b74d4:
    // 0x1b74d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b74d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b74d8:
    // 0x1b74d8: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1b74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_1b74dc:
    // 0x1b74dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b74e0:
    // 0x1b74e0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1b74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_1b74e4:
    // 0x1b74e4: 0xc06ddd8  jal         func_1B7760
label_1b74e8:
    if (ctx->pc == 0x1B74E8u) {
        ctx->pc = 0x1B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E4u;
        // 0x1b74e8: 0xa0820041  sb          $v0, 0x41($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74ECu;
        goto label_1b74ec;
    }
    ctx->pc = 0x1B74E4u;
    SET_GPR_U32(ctx, 31, 0x1B74ECu);
    ctx->pc = 0x1B74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B74E4u;
    // 0x1b74e8: 0xa0820041  sb          $v0, 0x41($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7760u, 0x1B74E4u, 0x1B74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74ECu;
label_1b74ec:
    // 0x1b74ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b74ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b74f0:
    // 0x1b74f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b74f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b74f4:
    // 0x1b74f4: 0x320f809  jalr        $t9
label_1b74f8:
    if (ctx->pc == 0x1B74F8u) {
        ctx->pc = 0x1B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74F4u;
        // 0x1b74f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74FCu;
        goto label_1b74fc;
    }
    ctx->pc = 0x1B74F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B74FCu);
        ctx->pc = 0x1B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74F4u;
        // 0x1b74f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B74F4u, 0x1B74FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B74FCu;
label_1b74fc:
    // 0x1b74fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b74fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7500:
    // 0x1b7500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7504:
    // 0x1b7504: 0x3e00008  jr          $ra
label_1b7508:
    if (ctx->pc == 0x1B7508u) {
        ctx->pc = 0x1B7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7504u;
        // 0x1b7508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B750Cu;
        goto label_fallthrough_0x1b7504;
    }
    ctx->pc = 0x1B7504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7504u;
        // 0x1b7508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b7504:
    ctx->pc = 0x1B750Cu;
}
