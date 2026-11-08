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

// Function: entry_0012ac54
// Address: 0x12ac54 - 0x12ad04
void entry_0012ac54_0x12ac54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ac54_0x12ac54");
#endif

    ctx->pc = 0x12ac54u;

    // 0x12ac54: 0x0  nop
    ctx->pc = 0x12ac54u;
    // NOP
    // 0x12ac58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12ac58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12ac5c: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x12ac5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12ac60: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x12ac60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x12ac64: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x12AC64u;
    {
        const bool branch_taken_0x12ac64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC64u;
        // 0x12ac68: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac64) {
            ctx->pc = 0x12ABA8u;
            return;
        }
    }
    ctx->pc = 0x12AC6Cu;
    // 0x12ac6c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x12ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12ac70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12ac74: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x12ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x12ac78: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x12ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12ac7c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x12ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x12ac80: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x12ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x12ac84: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ac88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12ac8c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x12ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x12ac90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x12ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ac94: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x12ac94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12ac98: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x12AC98u;
    {
        const bool branch_taken_0x12ac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC98u;
        // 0x12ac9c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac98) {
            ctx->pc = 0x12AB7Cu;
            return;
        }
    }
    ctx->pc = 0x12ACA0u;
    // 0x12aca0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12aca4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x12aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12aca8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x12aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x12acac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x12acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12acb0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x12acb4: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x12acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x12acb8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x12acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12acbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12acc0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x12acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x12acc4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12acc8: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x12acc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12accc: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x12ACCCu;
    {
        const bool branch_taken_0x12accc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12accc) {
            ctx->pc = 0x12AA4Cu;
            return;
        }
    }
    ctx->pc = 0x12ACD4u;
    // 0x12acd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12acd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12acd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12acdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12acdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12ace0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12ace0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ace4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12ace4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ace8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ace8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12acec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12acecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12acf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12acf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12acf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12acf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12acf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12acf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12acfc: 0x3e00008  jr          $ra
    ctx->pc = 0x12ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACFCu;
        // 0x12ad00: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AD04u;
}
