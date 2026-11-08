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

// Function: entry_001414d0
// Address: 0x1414d0 - 0x141514
void entry_001414d0_0x1414d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001414d0_0x1414d0");
#endif

    ctx->pc = 0x1414d0u;

    // 0x1414d0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1414d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414d4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1414d8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1414d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1414dc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1414dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1414e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1414e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1414e4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1414e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1414e8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1414e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414ec: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x1414ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1414f0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1414f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1414f4: 0x8fa70200  lw          $a3, 0x200($sp)
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1414f8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1414f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1414fc: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x1414fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x141500: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141504: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x141508: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x141508u;
    {
        const bool branch_taken_0x141508 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x141508) {
            ctx->pc = 0x141514u;
            return;
        }
    }
    ctx->pc = 0x141510u;
    // 0x141510: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x141510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x141514u;
}
