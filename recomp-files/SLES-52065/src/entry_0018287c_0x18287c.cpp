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

// Function: entry_0018287c
// Address: 0x18287c - 0x1828e0
void entry_0018287c_0x18287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018287c_0x18287c");
#endif

    ctx->pc = 0x18287cu;

    // 0x18287c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182880: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x182884: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x182884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x182888: 0x24638c70  addiu       $v1, $v1, -0x7390
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937712));
    // 0x18288c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x18288cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x182890: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x182890u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x182894: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x182894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x182898: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x182898u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18289c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x18289cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1828a0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1828a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1828a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1828a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1828ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1828acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1828b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1828b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1828b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1828b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1828b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1828b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1828bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1828bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1828c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1828c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1828c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1828c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1828c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1828c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1828cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1828ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1828d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1828d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1828d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1828D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828D8u;
        // 0x1828dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1828E0u;
}
