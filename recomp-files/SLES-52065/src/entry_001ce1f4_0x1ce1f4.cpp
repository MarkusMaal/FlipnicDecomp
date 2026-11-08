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

// Function: entry_001ce1f4
// Address: 0x1ce1f4 - 0x1ce21c
void entry_001ce1f4_0x1ce1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce1f4_0x1ce1f4");
#endif

    ctx->pc = 0x1ce1f4u;

    // 0x1ce1f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1f8: 0x8022fb18  lb          $v0, -0x4E8($at)
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB18u));
    // 0x1ce1fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1FCu;
    {
        const bool branch_taken_0x1ce1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1fc) {
            ctx->pc = 0x1CE21Cu;
            return;
        }
    }
    ctx->pc = 0x1CE204u;
    // 0x1ce204: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce208: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce20c: 0xac23fb10  sw          $v1, -0x4F0($at)
    ctx->pc = 0x1ce20cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB10u, _value); } while (0);
    // 0x1ce210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce214: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce218: 0xa022fb18  sb          $v0, -0x4E8($at)
    ctx->pc = 0x1ce218u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB18u, _value); } while (0);
    ctx->pc = 0x1ce21cu;
}
