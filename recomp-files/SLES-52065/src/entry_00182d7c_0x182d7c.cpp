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

// Function: entry_00182d7c
// Address: 0x182d7c - 0x182ddc
void entry_00182d7c_0x182d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182d7c_0x182d7c");
#endif

    ctx->pc = 0x182d7cu;

    // 0x182d7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182d80: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x182d84: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x182d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x182d88: 0x24638d00  addiu       $v1, $v1, -0x7300
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937856));
    // 0x182d8c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x182d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x182d90: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x182d90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x182d94: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x182d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x182d98: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x182d98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x182d9c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x182d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x182da0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x182da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x182da4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x182da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182da8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x182dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x182dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x182db0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x182db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182db4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x182db4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182db8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x182db8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182dbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x182dbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182dc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x182DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DD4u;
        // 0x182dd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182DDCu;
}
