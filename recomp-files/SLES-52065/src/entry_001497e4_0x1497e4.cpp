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

// Function: entry_001497e4
// Address: 0x1497e4 - 0x149814
void entry_001497e4_0x1497e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001497e4_0x1497e4");
#endif

    ctx->pc = 0x1497e4u;

    // 0x1497e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1497e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1497e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1497ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1497ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1497f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1497f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1497f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1497f8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1497f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1497fc: 0x14460005  bne         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1497FCu;
    {
        const bool branch_taken_0x1497fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1497fc) {
            ctx->pc = 0x149814u;
            return;
        }
    }
    ctx->pc = 0x149804u;
    // 0x149804: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14980c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x149810: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x149810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x149814u;
}
