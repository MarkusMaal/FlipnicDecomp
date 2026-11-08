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

// Function: entry_0013fcb4
// Address: 0x13fcb4 - 0x13fcf8
void entry_0013fcb4_0x13fcb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fcb4_0x13fcb4");
#endif

    ctx->pc = 0x13fcb4u;

    // 0x13fcb4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fcb8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fcbc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13fcc0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x13fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fcc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13fcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13fcc8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x13fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x13fccc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fcd0: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13fcd4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x13fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x13fcd8: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fcdc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x13fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fce0: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13fce4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13fce4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13fce8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x13fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x13fcec: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FCECu;
    {
        const bool branch_taken_0x13fcec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fcec) {
            ctx->pc = 0x13FCF8u;
            return;
        }
    }
    ctx->pc = 0x13FCF4u;
    // 0x13fcf4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x13fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x13fcf8u;
}
