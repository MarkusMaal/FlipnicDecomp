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

// Function: entry_00185c2c
// Address: 0x185c2c - 0x185c7c
void entry_00185c2c_0x185c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185c2c_0x185c2c");
#endif

    switch (ctx->pc) {
        case 0x185c40u: goto label_185c40;
        default: break;
    }

    ctx->pc = 0x185c2cu;

    // 0x185c2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x185c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185c30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x185c34: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x185c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x185c38: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185C38u;
    SET_GPR_U32(ctx, 31, 0x185C40u);
    ctx->pc = 0x185C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C38u;
    // 0x185c3c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185C38u, 0x185C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C40u;
label_185c40:
    // 0x185c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x185c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185c44: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x185c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x185c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x185c4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x185c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185c50: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x185c50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185c54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x185c54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185c58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x185c58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185c5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185c5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185c60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185c60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185c64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185c74: 0x3e00008  jr          $ra
    ctx->pc = 0x185C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C74u;
        // 0x185c78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185C7Cu;
}
