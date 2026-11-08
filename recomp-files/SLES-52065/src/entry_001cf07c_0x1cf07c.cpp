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

// Function: entry_001cf07c
// Address: 0x1cf07c - 0x1cf0a4
void entry_001cf07c_0x1cf07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf07c_0x1cf07c");
#endif

    ctx->pc = 0x1cf07cu;

    // 0x1cf07c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf080: 0x8022fb70  lb          $v0, -0x490($at)
    ctx->pc = 0x1cf080u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB70u));
    // 0x1cf084: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF084u;
    {
        const bool branch_taken_0x1cf084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf084) {
            ctx->pc = 0x1CF0A4u;
            return;
        }
    }
    ctx->pc = 0x1CF08Cu;
    // 0x1cf08c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cf08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf090: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf094: 0xac23fb68  sw          $v1, -0x498($at)
    ctx->pc = 0x1cf094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB68u, _value); } while (0);
    // 0x1cf098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf09c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf0a0: 0xa022fb70  sb          $v0, -0x490($at)
    ctx->pc = 0x1cf0a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB70u, _value); } while (0);
    ctx->pc = 0x1cf0a4u;
}
