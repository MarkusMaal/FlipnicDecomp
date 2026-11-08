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

// Function: entry_0019bdd0
// Address: 0x19bdd0 - 0x19bde4
void entry_0019bdd0_0x19bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bdd0_0x19bdd0");
#endif

    ctx->pc = 0x19bdd0u;

    // 0x19bdd0: 0x8e22093c  lw          $v0, 0x93C($s1)
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2364)));
    // 0x19bdd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BDD4u;
    {
        const bool branch_taken_0x19bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bdd4) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BDDCu;
    // 0x19bddc: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x19bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x19bde0: 0xae22093c  sw          $v0, 0x93C($s1)
    ctx->pc = 0x19bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 2));
    ctx->pc = 0x19bde4u;
}
