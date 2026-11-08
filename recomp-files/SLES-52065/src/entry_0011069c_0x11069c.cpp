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

// Function: entry_0011069c
// Address: 0x11069c - 0x1106d8
void entry_0011069c_0x11069c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011069c_0x11069c");
#endif

    ctx->pc = 0x11069cu;

    // 0x11069c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1106a0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1106a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1106a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1106a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1106a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1106a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1106ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1106acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1106b0: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1106b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1106b4: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1106b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1106b8: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1106b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1106bc: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1106bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1106c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1106C0u;
    {
        const bool branch_taken_0x1106c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1106c0) {
            ctx->pc = 0x1106D8u;
            return;
        }
    }
    ctx->pc = 0x1106C8u;
    // 0x1106c8: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x1106c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x1106cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1106CCu;
    {
        const bool branch_taken_0x1106cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106CCu;
        // 0x1106d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106cc) {
            ctx->pc = 0x1106D8u;
            return;
        }
    }
    ctx->pc = 0x1106D4u;
    // 0x1106d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1106d8u;
}
