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

// Function: entry_00143e3c
// Address: 0x143e3c - 0x143e84
void entry_00143e3c_0x143e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e3c_0x143e3c");
#endif

    ctx->pc = 0x143e3cu;

    // 0x143e3c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143E3Cu;
    {
        const bool branch_taken_0x143e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e3c) {
            ctx->pc = 0x143E84u;
            return;
        }
    }
    ctx->pc = 0x143E44u;
    // 0x143e44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143e48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x143e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x143e4c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x143e50: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x143e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x143e54: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x143e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x143e58: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x143e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x143e5c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x143e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143e60: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x143e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x143e64: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x143e68: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x143e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x143e6c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x143e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x143e70: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x143e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x143e74: 0x90c30018  lbu         $v1, 0x18($a2)
    ctx->pc = 0x143e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x143e78: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x143e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x143e7c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x143e80: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x143e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x143e84u;
}
