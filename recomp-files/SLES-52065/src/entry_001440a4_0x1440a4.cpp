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

// Function: entry_001440a4
// Address: 0x1440a4 - 0x1440ec
void entry_001440a4_0x1440a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001440a4_0x1440a4");
#endif

    ctx->pc = 0x1440a4u;

    // 0x1440a4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1440A4u;
    {
        const bool branch_taken_0x1440a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440a4) {
            ctx->pc = 0x1440ECu;
            return;
        }
    }
    ctx->pc = 0x1440ACu;
    // 0x1440ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1440b0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1440b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1440b4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1440b8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1440b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1440bc: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1440bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1440c0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1440c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1440c4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1440c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1440c8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1440cc: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x1440ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1440d0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1440d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1440d4: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1440d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1440d8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1440d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1440dc: 0x90a60018  lbu         $a2, 0x18($a1)
    ctx->pc = 0x1440dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1440e0: 0xa0860018  sb          $a2, 0x18($a0)
    ctx->pc = 0x1440e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x1440e4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1440e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1440e8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1440e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    ctx->pc = 0x1440ecu;
}
