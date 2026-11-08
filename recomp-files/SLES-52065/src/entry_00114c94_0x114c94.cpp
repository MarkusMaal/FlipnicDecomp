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

// Function: entry_00114c94
// Address: 0x114c94 - 0x114ce0
void entry_00114c94_0x114c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c94_0x114c94");
#endif

    ctx->pc = 0x114c94u;

    // 0x114c94: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x114c94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x114c98: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x114c9c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x114c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x114ca0: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x114ca0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x114ca4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x114ca8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x114cac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x114cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114cb0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x114cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x114cb4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x114cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x114cb8: 0xa2440255  sb          $a0, 0x255($s2)
    ctx->pc = 0x114cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 4));
    // 0x114cbc: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114cbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x114cc0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x114cc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x114cc8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    // 0x114ccc: 0xae47026c  sw          $a3, 0x26C($s2)
    ctx->pc = 0x114cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 7));
    // 0x114cd0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x114cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114cd8: 0x100003a9  b           . + 4 + (0x3A9 << 2)
    ctx->pc = 0x114CD8u;
    {
        const bool branch_taken_0x114cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD8u;
        // 0x114cdc: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cd8) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114CE0u;
}
