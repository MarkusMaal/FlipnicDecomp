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

// Function: entry_001cf0a4
// Address: 0x1cf0a4 - 0x1cf0cc
void entry_001cf0a4_0x1cf0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf0a4_0x1cf0a4");
#endif

    ctx->pc = 0x1cf0a4u;

    // 0x1cf0a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0a8: 0x8022fb80  lb          $v0, -0x480($at)
    ctx->pc = 0x1cf0a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB80u));
    // 0x1cf0ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF0ACu;
    {
        const bool branch_taken_0x1cf0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf0ac) {
            ctx->pc = 0x1CF0CCu;
            return;
        }
    }
    ctx->pc = 0x1CF0B4u;
    // 0x1cf0b4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1cf0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1cf0b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0bc: 0xac23fb78  sw          $v1, -0x488($at)
    ctx->pc = 0x1cf0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB78u, _value); } while (0);
    // 0x1cf0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0c8: 0xa022fb80  sb          $v0, -0x480($at)
    ctx->pc = 0x1cf0c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB80u, _value); } while (0);
    ctx->pc = 0x1cf0ccu;
}
