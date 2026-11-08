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

// Function: entry_00136878
// Address: 0x136878 - 0x13688c
void entry_00136878_0x136878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136878_0x136878");
#endif

    ctx->pc = 0x136878u;

    // 0x136878: 0x83828554  lb          $v0, -0x7AAC($gp)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x13687c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13687Cu;
    {
        const bool branch_taken_0x13687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13687Cu;
        // 0x136880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13687c) {
            ctx->pc = 0x13688Cu;
            return;
        }
    }
    ctx->pc = 0x136884u;
    // 0x136884: 0xa3828550  sb          $v0, -0x7AB0($gp)
    ctx->pc = 0x136884u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935888), (uint8_t)GPR_U32(ctx, 2));
    // 0x136888: 0xa3828554  sb          $v0, -0x7AAC($gp)
    ctx->pc = 0x136888u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935892), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13688cu;
}
