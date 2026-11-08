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

// Function: entry_00144184
// Address: 0x144184 - 0x1441cc
void entry_00144184_0x144184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144184_0x144184");
#endif

    ctx->pc = 0x144184u;

    // 0x144184: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x144184u;
    {
        const bool branch_taken_0x144184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144184) {
            ctx->pc = 0x1441CCu;
            return;
        }
    }
    ctx->pc = 0x14418Cu;
    // 0x14418c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14418cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144190: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x144190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x144194: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x144194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x144198: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x144198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x14419c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1441a0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1441a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1441a4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1441a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1441a8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1441a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1441ac: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x1441acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1441b0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1441b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1441b4: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1441b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1441b8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1441b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1441bc: 0x90a60018  lbu         $a2, 0x18($a1)
    ctx->pc = 0x1441bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1441c0: 0xa0860018  sb          $a2, 0x18($a0)
    ctx->pc = 0x1441c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x1441c4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1441c8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1441c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    ctx->pc = 0x1441ccu;
}
