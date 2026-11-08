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

// Function: entry_001bfad4
// Address: 0x1bfad4 - 0x1bfafc
void entry_001bfad4_0x1bfad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfad4_0x1bfad4");
#endif

    ctx->pc = 0x1bfad4u;

    // 0x1bfad4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfad8: 0x8022f528  lb          $v0, -0xAD8($at)
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F528u));
    // 0x1bfadc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFADCu;
    {
        const bool branch_taken_0x1bfadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfadc) {
            ctx->pc = 0x1BFAFCu;
            return;
        }
    }
    ctx->pc = 0x1BFAE4u;
    // 0x1bfae4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bfae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfaec: 0xac23f520  sw          $v1, -0xAE0($at)
    ctx->pc = 0x1bfaecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F520u, _value); } while (0);
    // 0x1bfaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfaf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfaf8: 0xa022f528  sb          $v0, -0xAD8($at)
    ctx->pc = 0x1bfaf8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F528u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F528u, _value); } while (0);
    ctx->pc = 0x1bfafcu;
}
