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

// Function: entry_00144118
// Address: 0x144118 - 0x144160
void entry_00144118_0x144118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144118_0x144118");
#endif

    ctx->pc = 0x144118u;

    // 0x144118: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x144118u;
    {
        const bool branch_taken_0x144118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144118) {
            ctx->pc = 0x144160u;
            return;
        }
    }
    ctx->pc = 0x144120u;
    // 0x144120: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x144120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x144124: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x144124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x144128: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x144128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14412c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x14412cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x144130: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x144130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x144134: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x144134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x144138: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14413c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x14413cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x144140: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x144140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x144144: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x144144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x144148: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14414c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x14414cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x144150: 0x92460018  lbu         $a2, 0x18($s2)
    ctx->pc = 0x144150u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x144154: 0xa0860018  sb          $a2, 0x18($a0)
    ctx->pc = 0x144154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x144158: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x144158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14415c: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x14415cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    ctx->pc = 0x144160u;
}
