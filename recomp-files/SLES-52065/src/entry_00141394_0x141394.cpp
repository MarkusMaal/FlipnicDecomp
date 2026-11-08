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

// Function: entry_00141394
// Address: 0x141394 - 0x1413d8
void entry_00141394_0x141394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141394_0x141394");
#endif

    ctx->pc = 0x141394u;

    // 0x141394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x141394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141398: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14139c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14139cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1413a0: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1413a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1413a8: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x1413a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
    // 0x1413ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1413b0: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1413b4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1413b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1413b8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1413b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1413bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1413c0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1413c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1413c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1413cc: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1413CCu;
    {
        const bool branch_taken_0x1413cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1413cc) {
            ctx->pc = 0x1413D8u;
            return;
        }
    }
    ctx->pc = 0x1413D4u;
    // 0x1413d4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1413d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1413d8u;
}
