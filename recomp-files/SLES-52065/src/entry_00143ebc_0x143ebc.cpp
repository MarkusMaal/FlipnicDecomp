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

// Function: entry_00143ebc
// Address: 0x143ebc - 0x143f04
void entry_00143ebc_0x143ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ebc_0x143ebc");
#endif

    ctx->pc = 0x143ebcu;

    // 0x143ebc: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x143EBCu;
    {
        const bool branch_taken_0x143ebc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ebc) {
            ctx->pc = 0x143F04u;
            return;
        }
    }
    ctx->pc = 0x143EC4u;
    // 0x143ec4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143ec8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x143ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x143ecc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x143eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x143ed0: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x143ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x143ed4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x143ed8: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x143ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x143edc: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x143edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143ee0: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x143ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x143ee4: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x143ee8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x143ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x143eec: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x143ef0: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x143ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x143ef4: 0x90c40018  lbu         $a0, 0x18($a2)
    ctx->pc = 0x143ef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x143ef8: 0xa0e40018  sb          $a0, 0x18($a3)
    ctx->pc = 0x143ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x143efc: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x143f00: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x143f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    ctx->pc = 0x143f04u;
}
