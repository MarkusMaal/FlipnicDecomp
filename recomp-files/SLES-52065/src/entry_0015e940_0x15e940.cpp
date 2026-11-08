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

// Function: entry_0015e940
// Address: 0x15e940 - 0x15e998
void entry_0015e940_0x15e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e940_0x15e940");
#endif

    ctx->pc = 0x15e940u;

    // 0x15e940: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15e944: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x15e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x15e948: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15e948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x15e94c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15e950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e954: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x15e954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x15e958: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15e95c: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x15e95cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15e960: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x15E960u;
    {
        const bool branch_taken_0x15e960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e960) {
            ctx->pc = 0x15E808u;
            return;
        }
    }
    ctx->pc = 0x15E968u;
    // 0x15e968: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15e96c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e96cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e970: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e974: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e97c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e990: 0x3e00008  jr          $ra
    ctx->pc = 0x15E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E990u;
        // 0x15e994: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E998u;
}
