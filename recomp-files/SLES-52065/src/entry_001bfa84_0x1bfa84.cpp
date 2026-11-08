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

// Function: entry_001bfa84
// Address: 0x1bfa84 - 0x1bfaac
void entry_001bfa84_0x1bfa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfa84_0x1bfa84");
#endif

    ctx->pc = 0x1bfa84u;

    // 0x1bfa84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa88: 0x8022f508  lb          $v0, -0xAF8($at)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F508u));
    // 0x1bfa8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFA8Cu;
    {
        const bool branch_taken_0x1bfa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa8c) {
            ctx->pc = 0x1BFAACu;
            return;
        }
    }
    ctx->pc = 0x1BFA94u;
    // 0x1bfa94: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1bfa98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa9c: 0xac23f500  sw          $v1, -0xB00($at)
    ctx->pc = 0x1bfa9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F500u, _value); } while (0);
    // 0x1bfaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfaa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfaa8: 0xa022f508  sb          $v0, -0xAF8($at)
    ctx->pc = 0x1bfaa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F508u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F508u, _value); } while (0);
    ctx->pc = 0x1bfaacu;
}
