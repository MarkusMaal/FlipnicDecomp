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

// Function: entry_001781c4
// Address: 0x1781c4 - 0x1781cc
void entry_001781c4_0x1781c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781c4_0x1781c4");
#endif

    ctx->pc = 0x1781c4u;

    // 0x1781c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1781c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1781c8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1781c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    ctx->pc = 0x1781ccu;
}
