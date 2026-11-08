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

// Function: entry_001d0a28
// Address: 0x1d0a28 - 0x1d0a50
void entry_001d0a28_0x1d0a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0a28_0x1d0a28");
#endif

    ctx->pc = 0x1d0a28u;

    // 0x1d0a28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a2c: 0x8023fc50  lb          $v1, -0x3B0($at)
    ctx->pc = 0x1d0a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36FC50u));
    // 0x1d0a30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0A30u;
    {
        const bool branch_taken_0x1d0a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a30) {
            ctx->pc = 0x1D0A50u;
            return;
        }
    }
    ctx->pc = 0x1D0A38u;
    // 0x1d0a38: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d0a3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a40: 0xfc24fc68  sd          $a0, -0x398($at)
    ctx->pc = 0x1d0a40u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36FC68u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x36FC68u, _value); } while (0);
    // 0x1d0a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a4c: 0xa023fc50  sb          $v1, -0x3B0($at)
    ctx->pc = 0x1d0a4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FC50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC50u, _value); } while (0);
    ctx->pc = 0x1d0a50u;
}
