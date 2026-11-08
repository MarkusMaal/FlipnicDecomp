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

// Function: entry_0010e2ec
// Address: 0x10e2ec - 0x10e304
void entry_0010e2ec_0x10e2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e2ec_0x10e2ec");
#endif

    ctx->pc = 0x10e2ecu;

    // 0x10e2ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10e2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e2f0: 0x14900004  bne         $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E2F0u;
    {
        const bool branch_taken_0x10e2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x10E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2F0u;
        // 0x10e2f4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2f0) {
            ctx->pc = 0x10E304u;
            return;
        }
    }
    ctx->pc = 0x10E2F8u;
    // 0x10e2f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10E2F8u;
    {
        const bool branch_taken_0x10e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2F8u;
        // 0x10e2fc: 0x9383848c  lbu         $v1, -0x7B74($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2f8) {
            ctx->pc = 0x10E35Cu;
            return;
        }
    }
    ctx->pc = 0x10E300u;
    // 0x10e300: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x10e304u;
}
