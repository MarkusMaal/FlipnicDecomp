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

// Function: entry_001230cc
// Address: 0x1230cc - 0x1230d4
void entry_001230cc_0x1230cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001230cc_0x1230cc");
#endif

    ctx->pc = 0x1230ccu;

    // 0x1230cc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x1230ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x1230d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1230d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1230d4u;
}
