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

// Function: entry_00140bf4
// Address: 0x140bf4 - 0x140c3c
void entry_00140bf4_0x140bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140bf4_0x140bf4");
#endif

    ctx->pc = 0x140bf4u;

    // 0x140bf4: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x140bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140bf8: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140bfc: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x140bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140c00: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x140c00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x140c04: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x140c04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140c08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x140c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x140c0c: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x140c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x140c10: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140c14: 0x254c0004  addiu       $t4, $t2, 0x4
    ctx->pc = 0x140c14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x140c18: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x140c18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x140c1c: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x140c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x140c20: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140c24: 0x8d6b000c  lw          $t3, 0xC($t3)
    ctx->pc = 0x140c24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x140c28: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140c2c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x140c30: 0x158a0002  bne         $t4, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x140C30u;
    {
        const bool branch_taken_0x140c30 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x140c30) {
            ctx->pc = 0x140C3Cu;
            return;
        }
    }
    ctx->pc = 0x140C38u;
    // 0x140c38: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x140c38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    ctx->pc = 0x140c3cu;
}
