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

// Function: entry_00140c3c
// Address: 0x140c3c - 0x140c78
void entry_00140c3c_0x140c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c3c_0x140c3c");
#endif

    ctx->pc = 0x140c3cu;

    // 0x140c3c: 0x0  nop
    ctx->pc = 0x140c3cu;
    // NOP
    // 0x140c40: 0x8faa0084  lw          $t2, 0x84($sp)
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x140c44: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x140c48: 0xafaa0084  sw          $t2, 0x84($sp)
    ctx->pc = 0x140c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 10));
    // 0x140c4c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x140c50: 0x254c0004  addiu       $t4, $t2, 0x4
    ctx->pc = 0x140c50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x140c54: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x140c54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x140c58: 0x8fab0080  lw          $t3, 0x80($sp)
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140c5c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x140c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140c60: 0x8d6b000c  lw          $t3, 0xC($t3)
    ctx->pc = 0x140c60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x140c64: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140c68: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x140c6c: 0x158a0002  bne         $t4, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x140C6Cu;
    {
        const bool branch_taken_0x140c6c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x140c6c) {
            ctx->pc = 0x140C78u;
            return;
        }
    }
    ctx->pc = 0x140C74u;
    // 0x140c74: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x140c74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    ctx->pc = 0x140c78u;
}
