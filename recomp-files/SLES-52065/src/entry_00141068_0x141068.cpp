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

// Function: entry_00141068
// Address: 0x141068 - 0x1410ac
void entry_00141068_0x141068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141068_0x141068");
#endif

    ctx->pc = 0x141068u;

    // 0x141068: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14106c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141070: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x141070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x141074: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x141074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x141078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14107c: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x14107cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x141080: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x141080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141084: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x141088: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x141088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x14108c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x141090: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141094: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x141094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x141098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14109c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1410a0: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1410A0u;
    {
        const bool branch_taken_0x1410a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1410a0) {
            ctx->pc = 0x1410ACu;
            return;
        }
    }
    ctx->pc = 0x1410A8u;
    // 0x1410a8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1410a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1410acu;
}
