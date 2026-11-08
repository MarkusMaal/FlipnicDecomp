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

// Function: entry_001926cc
// Address: 0x1926cc - 0x1926dc
void entry_001926cc_0x1926cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001926cc_0x1926cc");
#endif

    ctx->pc = 0x1926ccu;

    // 0x1926cc: 0x0  nop
    ctx->pc = 0x1926ccu;
    // NOP
    // 0x1926d0: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1926d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1926d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1926D4u;
    {
        const bool branch_taken_0x1926d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1926d4) {
            ctx->pc = 0x192688u;
            return;
        }
    }
    ctx->pc = 0x1926DCu;
}
