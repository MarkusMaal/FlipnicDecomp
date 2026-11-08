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

// Function: entry_00110144
// Address: 0x110144 - 0x110180
void entry_00110144_0x110144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110144_0x110144");
#endif

    ctx->pc = 0x110144u;

    // 0x110144: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110148: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x110148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11014c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x11014cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110154: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x110154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110158: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x110158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11015c: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x11015cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x110160: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110164: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110168u;
    {
        const bool branch_taken_0x110168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110168) {
            ctx->pc = 0x110180u;
            return;
        }
    }
    ctx->pc = 0x110170u;
    // 0x110170: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x110170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x110174: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110174u;
    {
        const bool branch_taken_0x110174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110174u;
        // 0x110178: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110174) {
            ctx->pc = 0x110180u;
            return;
        }
    }
    ctx->pc = 0x11017Cu;
    // 0x11017c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x110180u;
}
