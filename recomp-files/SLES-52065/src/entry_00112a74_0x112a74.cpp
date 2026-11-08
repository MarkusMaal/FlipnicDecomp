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

// Function: entry_00112a74
// Address: 0x112a74 - 0x112ab0
void entry_00112a74_0x112a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a74_0x112a74");
#endif

    ctx->pc = 0x112a74u;

    // 0x112a74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112a78: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x112a7c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112a84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112a88: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x112a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112a8c: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x112a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x112a90: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x112a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x112a94: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x112a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112a98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112A98u;
    {
        const bool branch_taken_0x112a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112a98) {
            ctx->pc = 0x112AB0u;
            return;
        }
    }
    ctx->pc = 0x112AA0u;
    // 0x112aa0: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x112aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x112aa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x112AA4u;
    {
        const bool branch_taken_0x112aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA4u;
        // 0x112aa8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa4) {
            ctx->pc = 0x112AB0u;
            return;
        }
    }
    ctx->pc = 0x112AACu;
    // 0x112aac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x112aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x112ab0u;
}
