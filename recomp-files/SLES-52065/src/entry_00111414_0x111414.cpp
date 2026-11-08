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

// Function: entry_00111414
// Address: 0x111414 - 0x111460
void entry_00111414_0x111414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111414_0x111414");
#endif

    ctx->pc = 0x111414u;

    // 0x111414: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111418: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x111418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11141c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x11141cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x111420: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x111420u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111424: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x111424u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x111428: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x111428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11142c: 0x8c872cd8  lw          $a3, 0x2CD8($a0)
    ctx->pc = 0x11142cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x111430: 0x90e60224  lbu         $a2, 0x224($a3)
    ctx->pc = 0x111430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111434: 0x626fc  dsll32      $a0, $a2, 27
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 27));
    // 0x111438: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x111438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x11143c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x11143Cu;
    {
        const bool branch_taken_0x11143c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x111440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11143Cu;
        // 0x111440: 0x626bc  dsll32      $a0, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11143c) {
            ctx->pc = 0x111478u;
            return;
        }
    }
    ctx->pc = 0x111444u;
    // 0x111444: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x111444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x111448: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111448u;
    {
        const bool branch_taken_0x111448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x111448) {
            ctx->pc = 0x111460u;
            return;
        }
    }
    ctx->pc = 0x111450u;
    // 0x111450: 0x8ce40224  lw          $a0, 0x224($a3)
    ctx->pc = 0x111450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111454: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x111454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x111458: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111458u;
    {
        const bool branch_taken_0x111458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111458u;
        // 0x11145c: 0xace40224  sw          $a0, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111458) {
            ctx->pc = 0x111478u;
            return;
        }
    }
    ctx->pc = 0x111460u;
}
