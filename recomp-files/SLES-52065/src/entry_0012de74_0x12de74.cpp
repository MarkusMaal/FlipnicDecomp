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

// Function: entry_0012de74
// Address: 0x12de74 - 0x12decc
void entry_0012de74_0x12de74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de74_0x12de74");
#endif

    switch (ctx->pc) {
        case 0x12de90u: goto label_12de90;
        case 0x12de98u: goto label_12de98;
        case 0x12dea0u: goto label_12dea0;
        default: break;
    }

    ctx->pc = 0x12de74u;

    // 0x12de74: 0x0  nop
    ctx->pc = 0x12de74u;
    // NOP
    // 0x12de78: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x12de7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12de7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12de80: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12DE80u;
    {
        const bool branch_taken_0x12de80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de80) {
            ctx->pc = 0x12DCBCu;
            return;
        }
    }
    ctx->pc = 0x12DE88u;
    // 0x12de88: 0xc047a38  jal         func_11E8E0
    ctx->pc = 0x12DE88u;
    SET_GPR_U32(ctx, 31, 0x12DE90u);
    ctx->pc = 0x11E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8E0u, 0x12DE88u, 0x12DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE90u;
label_12de90:
    // 0x12de90: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x12DE90u;
    SET_GPR_U32(ctx, 31, 0x12DE98u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x12DE90u, 0x12DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE98u;
label_12de98:
    // 0x12de98: 0xc0485a4  jal         func_121690
    ctx->pc = 0x12DE98u;
    SET_GPR_U32(ctx, 31, 0x12DEA0u);
    ctx->pc = 0x12DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE98u;
    // 0x12de9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x12DE98u, 0x12DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEA0u;
label_12dea0:
    // 0x12dea0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12dea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12dea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dea8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12dea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12deac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12deacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12deb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12deb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12deb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12deb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12deb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12deb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12debc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12debcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12dec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dec4: 0x3e00008  jr          $ra
    ctx->pc = 0x12DEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEC4u;
        // 0x12dec8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DECCu;
}
