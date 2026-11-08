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

// Function: FUN_001e2970
// Address: 0x1e2970 - 0x1e29c4
void FUN_001e2970_0x1e2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2970_0x1e2970");
#endif

    switch (ctx->pc) {
        case 0x1e2970u: goto label_1e2970;
        case 0x1e2974u: goto label_1e2974;
        case 0x1e2978u: goto label_1e2978;
        case 0x1e297cu: goto label_1e297c;
        case 0x1e2980u: goto label_1e2980;
        case 0x1e2984u: goto label_1e2984;
        case 0x1e2988u: goto label_1e2988;
        case 0x1e298cu: goto label_1e298c;
        case 0x1e2990u: goto label_1e2990;
        case 0x1e2994u: goto label_1e2994;
        case 0x1e2998u: goto label_1e2998;
        case 0x1e299cu: goto label_1e299c;
        case 0x1e29a0u: goto label_1e29a0;
        case 0x1e29a4u: goto label_1e29a4;
        case 0x1e29a8u: goto label_1e29a8;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e29b0u: goto label_1e29b0;
        case 0x1e29b4u: goto label_1e29b4;
        case 0x1e29b8u: goto label_1e29b8;
        case 0x1e29bcu: goto label_1e29bc;
        case 0x1e29c0u: goto label_1e29c0;
        default: break;
    }

    ctx->pc = 0x1e2970u;

label_1e2970:
    // 0x1e2970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2974:
    // 0x1e2974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2978:
    // 0x1e2978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e297c:
    // 0x1e297c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e297cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2980:
    // 0x1e2980: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e2980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e2984:
    // 0x1e2984: 0x320f809  jalr        $t9
label_1e2988:
    if (ctx->pc == 0x1E2988u) {
        ctx->pc = 0x1E2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2984u;
        // 0x1e2988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E298Cu;
        goto label_1e298c;
    }
    ctx->pc = 0x1E2984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E298Cu);
        ctx->pc = 0x1E2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2984u;
        // 0x1e2988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2984u, 0x1E298Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E298Cu;
label_1e298c:
    // 0x1e298c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e2990:
    // 0x1e2990: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e2994:
    if (ctx->pc == 0x1E2994u) {
        ctx->pc = 0x1E2998u;
        goto label_1e2998;
    }
    ctx->pc = 0x1E2990u;
    {
        const bool branch_taken_0x1e2990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e2990) {
            ctx->pc = 0x1E29A0u;
            goto label_1e29a0;
        }
    }
    ctx->pc = 0x1E2998u;
label_1e2998:
    // 0x1e2998: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e299c:
    if (ctx->pc == 0x1E299Cu) {
        ctx->pc = 0x1E299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2998u;
        // 0x1e299c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E29A0u;
        goto label_1e29a0;
    }
    ctx->pc = 0x1E2998u;
    {
        const bool branch_taken_0x1e2998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2998u;
        // 0x1e299c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2998) {
            ctx->pc = 0x1E29B4u;
            goto label_1e29b4;
        }
    }
    ctx->pc = 0x1E29A0u;
label_1e29a0:
    // 0x1e29a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e29a4:
    // 0x1e29a4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1e29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1e29a8:
    // 0x1e29a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e29ac:
    // 0x1e29ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1e29acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e29b0:
    // 0x1e29b0: 0x0  nop
    ctx->pc = 0x1e29b0u;
    // NOP
label_1e29b4:
    // 0x1e29b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e29b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e29b8:
    // 0x1e29b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e29b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e29bc:
    // 0x1e29bc: 0x3e00008  jr          $ra
label_1e29c0:
    if (ctx->pc == 0x1E29C0u) {
        ctx->pc = 0x1E29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29BCu;
        // 0x1e29c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E29C4u;
        goto label_fallthrough_0x1e29bc;
    }
    ctx->pc = 0x1E29BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29BCu;
        // 0x1e29c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E29BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e29bc:
    ctx->pc = 0x1E29C4u;
}
