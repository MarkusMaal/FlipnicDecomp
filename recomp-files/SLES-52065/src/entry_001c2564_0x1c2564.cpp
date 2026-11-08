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

// Function: entry_001c2564
// Address: 0x1c2564 - 0x1c2570
void entry_001c2564_0x1c2564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2564_0x1c2564");
#endif

    ctx->pc = 0x1c2564u;

    // 0x1c2564: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2568: 0xac22f5c0  sw          $v0, -0xA40($at)
    ctx->pc = 0x1c2568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5C0u, _value); } while (0);
    // 0x1c256c: 0xae200248  sw          $zero, 0x248($s1)
    ctx->pc = 0x1c256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
    ctx->pc = 0x1c2570u;
}
