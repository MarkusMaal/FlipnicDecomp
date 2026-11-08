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

// Function: FUN_001821e0
// Address: 0x1821e0 - 0x18224c
void FUN_001821e0_0x1821e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001821e0_0x1821e0");
#endif

    switch (ctx->pc) {
        case 0x182210u: goto label_182210;
        case 0x182218u: goto label_182218;
        default: break;
    }

    ctx->pc = 0x1821e0u;

    // 0x1821e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1821e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1821e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1821e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1821e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1821ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1821ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1821f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1821f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1821f4: 0x8c3187c8  lw          $s1, -0x7838($at)
    ctx->pc = 0x1821f4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3687C8u));
    // 0x1821f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1821f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1821fc: 0x8c2387c4  lw          $v1, -0x783C($at)
    ctx->pc = 0x1821fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3687C4u));
    // 0x182200: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182204: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x182208: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x182208u;
    {
        const bool branch_taken_0x182208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x182208) {
            ctx->pc = 0x18222Cu;
            goto label_18222c;
        }
    }
    ctx->pc = 0x182210u;
label_182210:
    // 0x182210: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x182210u;
    SET_GPR_U32(ctx, 31, 0x182218u);
    ctx->pc = 0x182214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182210u;
    // 0x182214: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x182210u, 0x182218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182218u;
label_182218:
    // 0x182218: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18221c: 0x0  nop
    ctx->pc = 0x18221cu;
    // NOP
    // 0x182220: 0x0  nop
    ctx->pc = 0x182220u;
    // NOP
    // 0x182224: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x182224u;
    {
        const bool branch_taken_0x182224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x182224) {
            ctx->pc = 0x182210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182210;
        }
    }
    ctx->pc = 0x18222Cu;
label_18222c:
    // 0x18222c: 0x0  nop
    ctx->pc = 0x18222cu;
    // NOP
    // 0x182230: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182234: 0xac2087c4  sw          $zero, -0x783C($at)
    ctx->pc = 0x182234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3687C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3687C4u, _value); } while (0);
    // 0x182238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18223c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18223cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182244: 0x3e00008  jr          $ra
    ctx->pc = 0x182244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182244u;
        // 0x182248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18224Cu;
}
