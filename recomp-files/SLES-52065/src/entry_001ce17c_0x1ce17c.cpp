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

// Function: entry_001ce17c
// Address: 0x1ce17c - 0x1ce1a4
void entry_001ce17c_0x1ce17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce17c_0x1ce17c");
#endif

    ctx->pc = 0x1ce17cu;

    // 0x1ce17c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce180: 0x8022fae8  lb          $v0, -0x518($at)
    ctx->pc = 0x1ce180u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAE8u));
    // 0x1ce184: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE184u;
    {
        const bool branch_taken_0x1ce184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce184) {
            ctx->pc = 0x1CE1A4u;
            return;
        }
    }
    ctx->pc = 0x1CE18Cu;
    // 0x1ce18c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ce190: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce194: 0xac23fae0  sw          $v1, -0x520($at)
    ctx->pc = 0x1ce194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAE0u, _value); } while (0);
    // 0x1ce198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce19c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1a0: 0xa022fae8  sb          $v0, -0x518($at)
    ctx->pc = 0x1ce1a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAE8u, _value); } while (0);
    ctx->pc = 0x1ce1a4u;
}
