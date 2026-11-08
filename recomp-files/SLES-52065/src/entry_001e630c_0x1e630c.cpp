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

// Function: entry_001e630c
// Address: 0x1e630c - 0x1e6334
void entry_001e630c_0x1e630c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e630c_0x1e630c");
#endif

    ctx->pc = 0x1e630cu;

    // 0x1e630c: 0x0  nop
    ctx->pc = 0x1e630cu;
    // NOP
    // 0x1e6310: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e6314: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1e6314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e6318: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1e6318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e631c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1E631Cu;
    {
        const bool branch_taken_0x1e631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E631Cu;
        // 0x1e6320: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e631c) {
            ctx->pc = 0x1E6218u;
            return;
        }
    }
    ctx->pc = 0x1E6324u;
    // 0x1e6324: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6324u;
    {
        const bool branch_taken_0x1e6324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6324) {
            ctx->pc = 0x1E6368u;
            return;
        }
    }
    ctx->pc = 0x1E632Cu;
    // 0x1e632c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E632Cu;
    {
        const bool branch_taken_0x1e632c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e632c) {
            ctx->pc = 0x1E6368u;
            return;
        }
    }
    ctx->pc = 0x1E6334u;
}
