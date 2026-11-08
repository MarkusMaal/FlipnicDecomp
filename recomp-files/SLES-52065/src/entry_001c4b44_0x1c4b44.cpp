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

// Function: entry_001c4b44
// Address: 0x1c4b44 - 0x1c4b6c
void entry_001c4b44_0x1c4b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4b44_0x1c4b44");
#endif

    ctx->pc = 0x1c4b44u;

    // 0x1c4b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b48: 0x8022f818  lb          $v0, -0x7E8($at)
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F818u));
    // 0x1c4b4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4B4Cu;
    {
        const bool branch_taken_0x1c4b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b4c) {
            ctx->pc = 0x1C4B6Cu;
            return;
        }
    }
    ctx->pc = 0x1C4B54u;
    // 0x1c4b54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c4b58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b5c: 0xac23f810  sw          $v1, -0x7F0($at)
    ctx->pc = 0x1c4b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F810u, _value); } while (0);
    // 0x1c4b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4b64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b68: 0xa022f818  sb          $v0, -0x7E8($at)
    ctx->pc = 0x1c4b68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F818u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F818u, _value); } while (0);
    ctx->pc = 0x1c4b6cu;
}
