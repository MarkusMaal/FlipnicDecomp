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

// Function: entry_001cdef0
// Address: 0x1cdef0 - 0x1cdf18
void entry_001cdef0_0x1cdef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdef0_0x1cdef0");
#endif

    ctx->pc = 0x1cdef0u;

    // 0x1cdef0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdef4: 0x8022fa70  lb          $v0, -0x590($at)
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA70u));
    // 0x1cdef8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDEF8u;
    {
        const bool branch_taken_0x1cdef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdef8) {
            ctx->pc = 0x1CDF18u;
            return;
        }
    }
    ctx->pc = 0x1CDF00u;
    // 0x1cdf00: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x1cdf04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf08: 0xac23fa68  sw          $v1, -0x598($at)
    ctx->pc = 0x1cdf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA68u, _value); } while (0);
    // 0x1cdf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdf10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf14: 0xa022fa70  sb          $v0, -0x590($at)
    ctx->pc = 0x1cdf14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA70u, _value); } while (0);
    ctx->pc = 0x1cdf18u;
}
