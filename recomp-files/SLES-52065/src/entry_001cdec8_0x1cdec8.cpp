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

// Function: entry_001cdec8
// Address: 0x1cdec8 - 0x1cdef0
void entry_001cdec8_0x1cdec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdec8_0x1cdec8");
#endif

    ctx->pc = 0x1cdec8u;

    // 0x1cdec8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdecc: 0x8022fa60  lb          $v0, -0x5A0($at)
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA60u));
    // 0x1cded0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDED0u;
    {
        const bool branch_taken_0x1cded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cded0) {
            ctx->pc = 0x1CDEF0u;
            return;
        }
    }
    ctx->pc = 0x1CDED8u;
    // 0x1cded8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1cded8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1cdedc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdee0: 0xac23fa58  sw          $v1, -0x5A8($at)
    ctx->pc = 0x1cdee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA58u, _value); } while (0);
    // 0x1cdee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdee8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdeec: 0xa022fa60  sb          $v0, -0x5A0($at)
    ctx->pc = 0x1cdeecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA60u, _value); } while (0);
    ctx->pc = 0x1cdef0u;
}
