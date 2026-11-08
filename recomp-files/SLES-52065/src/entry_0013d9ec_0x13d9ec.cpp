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

// Function: entry_0013d9ec
// Address: 0x13d9ec - 0x13da0c
void entry_0013d9ec_0x13d9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d9ec_0x13d9ec");
#endif

    ctx->pc = 0x13d9ecu;

    // 0x13d9ec: 0x8c860124  lw          $a2, 0x124($a0)
    ctx->pc = 0x13d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13d9f0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D9F0u;
    {
        const bool branch_taken_0x13d9f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d9f0) {
            ctx->pc = 0x13DA0Cu;
            return;
        }
    }
    ctx->pc = 0x13D9F8u;
    // 0x13d9f8: 0x8c85017c  lw          $a1, 0x17C($a0)
    ctx->pc = 0x13d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13d9fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13da00: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DA00u;
    {
        const bool branch_taken_0x13da00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13da00) {
            ctx->pc = 0x13DA0Cu;
            return;
        }
    }
    ctx->pc = 0x13DA08u;
    // 0x13da08: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x13da08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x13da0cu;
}
