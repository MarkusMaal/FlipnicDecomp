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

// Function: FUN_0010ee50
// Address: 0x10ee50 - 0x10eeb8
void FUN_0010ee50_0x10ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ee50_0x10ee50");
#endif

    switch (ctx->pc) {
        case 0x10ee84u: goto label_10ee84;
        default: break;
    }

    ctx->pc = 0x10ee50u;

    // 0x10ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ee54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ee58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10ee5c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x10EE5Cu;
    {
        const bool branch_taken_0x10ee5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE5Cu;
        // 0x10ee60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee5c) {
            ctx->pc = 0x10EE90u;
            goto label_10ee90;
        }
    }
    ctx->pc = 0x10EE64u;
    // 0x10ee64: 0x92060231  lbu         $a2, 0x231($s0)
    ctx->pc = 0x10ee64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
    // 0x10ee68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x10ee6c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x10ee6cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x10ee70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ee74: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x10ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x10ee78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10ee7c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10EE7Cu;
    SET_GPR_U32(ctx, 31, 0x10EE84u);
    ctx->pc = 0x10EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE7Cu;
    // 0x10ee80: 0xa2020231  sb          $v0, 0x231($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10EE7Cu, 0x10EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE84u;
label_10ee84:
    // 0x10ee84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ee88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10EE88u;
    {
        const bool branch_taken_0x10ee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE88u;
        // 0x10ee8c: 0xa20301d3  sb          $v1, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee88) {
            ctx->pc = 0x10EEA8u;
            goto label_10eea8;
        }
    }
    ctx->pc = 0x10EE90u;
label_10ee90:
    // 0x10ee90: 0x92050230  lbu         $a1, 0x230($s0)
    ctx->pc = 0x10ee90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x10ee94: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10ee98: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x10ee98u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x10ee9c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10eea0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10eea4: 0xa2030230  sb          $v1, 0x230($s0)
    ctx->pc = 0x10eea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 560), (uint8_t)GPR_U32(ctx, 3));
label_10eea8:
    // 0x10eea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eeac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10eeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEB0u;
        // 0x10eeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EEB8u;
}
