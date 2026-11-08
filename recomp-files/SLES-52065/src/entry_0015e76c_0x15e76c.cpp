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

// Function: entry_0015e76c
// Address: 0x15e76c - 0x15e7c8
void entry_0015e76c_0x15e76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e76c_0x15e76c");
#endif

    ctx->pc = 0x15e76cu;

    // 0x15e76c: 0x0  nop
    ctx->pc = 0x15e76cu;
    // NOP
    // 0x15e770: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15e774: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x15e778: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x15e778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x15e77c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15e780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e784: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x15e784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x15e788: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15e78c: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x15e78cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15e790: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x15E790u;
    {
        const bool branch_taken_0x15e790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e790) {
            ctx->pc = 0x15E4CCu;
            return;
        }
    }
    ctx->pc = 0x15E798u;
    // 0x15e798: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15e79c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e79cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e7a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e7a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e7a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e7a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e7a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e7ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e7b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e7b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7C0u;
        // 0x15e7c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E7C8u;
}
