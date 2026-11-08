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

// Function: entry_001d9058
// Address: 0x1d9058 - 0x1d907c
void entry_001d9058_0x1d9058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9058_0x1d9058");
#endif

    ctx->pc = 0x1d9058u;

    // 0x1d9058: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d905c: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1d9060: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1d9060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d9064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9064u;
    {
        const bool branch_taken_0x1d9064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9064u;
        // 0x1d9068: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9064) {
            ctx->pc = 0x1D907Cu;
            return;
        }
    }
    ctx->pc = 0x1D906Cu;
    // 0x1d906c: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x1d9070: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d9070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d9074: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9078: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x1d9078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    ctx->pc = 0x1d907cu;
}
