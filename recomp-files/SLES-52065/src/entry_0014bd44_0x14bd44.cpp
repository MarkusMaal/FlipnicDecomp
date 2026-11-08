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

// Function: entry_0014bd44
// Address: 0x14bd44 - 0x14bd88
void entry_0014bd44_0x14bd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd44_0x14bd44");
#endif

    ctx->pc = 0x14bd44u;

    // 0x14bd44: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bd48: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14bd4c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x14bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x14bd50: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x14bd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bd54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14bd58: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x14bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x14bd5c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14bd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bd60: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x14bd60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14bd64: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x14bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x14bd68: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14bd6c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14bd70: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x14bd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14bd74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14bd74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14bd78: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14bd7c: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14BD7Cu;
    {
        const bool branch_taken_0x14bd7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x14bd7c) {
            ctx->pc = 0x14BD88u;
            return;
        }
    }
    ctx->pc = 0x14BD84u;
    // 0x14bd84: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x14bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x14bd88u;
}
