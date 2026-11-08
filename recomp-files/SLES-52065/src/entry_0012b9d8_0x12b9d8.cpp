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

// Function: entry_0012b9d8
// Address: 0x12b9d8 - 0x12ba38
void entry_0012b9d8_0x12b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b9d8_0x12b9d8");
#endif

    switch (ctx->pc) {
        case 0x12b9f8u: goto label_12b9f8;
        default: break;
    }

    ctx->pc = 0x12b9d8u;

label_12b9d8:
    // 0x12b9d8: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x12b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x12b9dc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x12b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x12b9e0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12b9e4: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x12b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b9e8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12b9ec: 0x2475000c  addiu       $s5, $v1, 0xC
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x12b9f0: 0xc04ac70  jal         func_12B1C0
    ctx->pc = 0x12B9F0u;
    SET_GPR_U32(ctx, 31, 0x12B9F8u);
    ctx->pc = 0x12B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B9F0u;
    // 0x12b9f4: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B1C0u, 0x12B9F0u, 0x12B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9F8u;
label_12b9f8:
    // 0x12b9f8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x12b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12b9fc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12ba00: 0xac700154  sw          $s0, 0x154($v1)
    ctx->pc = 0x12ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 16));
    // 0x12ba04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12ba08: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x12ba08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12ba0c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x12BA0Cu;
    {
        const bool branch_taken_0x12ba0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA0Cu;
        // 0x12ba10: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba0c) {
            ctx->pc = 0x12B9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b9d8;
        }
    }
    ctx->pc = 0x12BA14u;
    // 0x12ba14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ba18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12ba18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ba1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ba1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ba20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12ba20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ba24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ba24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ba28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ba28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ba2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ba2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba30: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA30u;
        // 0x12ba34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BA38u;
}
