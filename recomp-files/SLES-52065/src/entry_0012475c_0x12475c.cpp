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

// Function: entry_0012475c
// Address: 0x12475c - 0x1247cc
void entry_0012475c_0x12475c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012475c_0x12475c");
#endif

    ctx->pc = 0x12475cu;

    // 0x12475c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x12475cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x124760: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x124760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x124764: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x124764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x124768: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x124768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12476c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x124770: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0
    ctx->pc = 0x124770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
    // 0x124774: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124778: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x124778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12477c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124780: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x124780u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x124784: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x124784u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124788: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x124788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x12478c: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x12478cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x124790: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x124790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x124794: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x124794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x124798: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x124798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12479c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1247a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1247a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1247a4: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x1247a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1247a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1247a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1247ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1247acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1247b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1247b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1247b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1247b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1247b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1247b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1247bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1247bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1247c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1247c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1247c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1247C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1247C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247C4u;
        // 0x1247c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1247C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1247CCu;
}
