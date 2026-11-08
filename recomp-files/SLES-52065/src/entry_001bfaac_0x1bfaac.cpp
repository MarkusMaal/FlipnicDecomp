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

// Function: entry_001bfaac
// Address: 0x1bfaac - 0x1bfad4
void entry_001bfaac_0x1bfaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfaac_0x1bfaac");
#endif

    ctx->pc = 0x1bfaacu;

    // 0x1bfaac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfab0: 0x8022f518  lb          $v0, -0xAE8($at)
    ctx->pc = 0x1bfab0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F518u));
    // 0x1bfab4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFAB4u;
    {
        const bool branch_taken_0x1bfab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfab4) {
            ctx->pc = 0x1BFAD4u;
            return;
        }
    }
    ctx->pc = 0x1BFABCu;
    // 0x1bfabc: 0x24030172  addiu       $v1, $zero, 0x172
    ctx->pc = 0x1bfabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x1bfac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfac4: 0xac23f510  sw          $v1, -0xAF0($at)
    ctx->pc = 0x1bfac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F510u, _value); } while (0);
    // 0x1bfac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfacc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfad0: 0xa022f518  sb          $v0, -0xAE8($at)
    ctx->pc = 0x1bfad0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F518u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F518u, _value); } while (0);
    ctx->pc = 0x1bfad4u;
}
