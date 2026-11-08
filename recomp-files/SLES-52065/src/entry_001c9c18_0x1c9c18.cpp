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

// Function: entry_001c9c18
// Address: 0x1c9c18 - 0x1c9c40
void entry_001c9c18_0x1c9c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c18_0x1c9c18");
#endif

    ctx->pc = 0x1c9c18u;

    // 0x1c9c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c1c: 0x8022f918  lb          $v0, -0x6E8($at)
    ctx->pc = 0x1c9c1cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F918u));
    // 0x1c9c20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9C20u;
    {
        const bool branch_taken_0x1c9c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c20) {
            ctx->pc = 0x1C9C40u;
            return;
        }
    }
    ctx->pc = 0x1C9C28u;
    // 0x1c9c28: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c9c2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c30: 0xac23f910  sw          $v1, -0x6F0($at)
    ctx->pc = 0x1c9c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F910u, _value); } while (0);
    // 0x1c9c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c3c: 0xa022f918  sb          $v0, -0x6E8($at)
    ctx->pc = 0x1c9c3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F918u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F918u, _value); } while (0);
    ctx->pc = 0x1c9c40u;
}
