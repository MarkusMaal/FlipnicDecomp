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

// Function: entry_00117520
// Address: 0x117520 - 0x117530
void entry_00117520_0x117520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117520_0x117520");
#endif

    ctx->pc = 0x117520u;

    // 0x117520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117524: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x117524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x117528: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0
    ctx->pc = 0x117528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    // 0x11752c: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x11752cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x117530u;
}
