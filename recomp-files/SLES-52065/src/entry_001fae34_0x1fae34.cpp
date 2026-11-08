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

// Function: entry_001fae34
// Address: 0x1fae34 - 0x1fae3c
void entry_001fae34_0x1fae34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae34_0x1fae34");
#endif

    ctx->pc = 0x1fae34u;

    // 0x1fae34: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x1fae34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fae38: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x1fae38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->pc = 0x1fae3cu;
}
