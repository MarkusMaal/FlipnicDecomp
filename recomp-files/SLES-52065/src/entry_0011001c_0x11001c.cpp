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

// Function: entry_0011001c
// Address: 0x11001c - 0x110058
void entry_0011001c_0x11001c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011001c_0x11001c");
#endif

    ctx->pc = 0x11001cu;

    // 0x11001c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110020: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x110020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x110024: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11002c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110030: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x110030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110034: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x110034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x110038: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11003c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110040u;
    {
        const bool branch_taken_0x110040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110040) {
            ctx->pc = 0x110058u;
            return;
        }
    }
    ctx->pc = 0x110048u;
    // 0x110048: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x110048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x11004c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11004Cu;
    {
        const bool branch_taken_0x11004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11004Cu;
        // 0x110050: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11004c) {
            ctx->pc = 0x110058u;
            return;
        }
    }
    ctx->pc = 0x110054u;
    // 0x110054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x110054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x110058u;
}
