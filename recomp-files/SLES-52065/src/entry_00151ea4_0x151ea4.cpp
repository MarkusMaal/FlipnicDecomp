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

// Function: entry_00151ea4
// Address: 0x151ea4 - 0x151ebc
void entry_00151ea4_0x151ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ea4_0x151ea4");
#endif

    ctx->pc = 0x151ea4u;

    // 0x151ea4: 0x1a60005d  blez        $s3, . + 4 + (0x5D << 2)
    ctx->pc = 0x151EA4u;
    {
        const bool branch_taken_0x151ea4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x151ea4) {
            ctx->pc = 0x15201Cu;
            return;
        }
    }
    ctx->pc = 0x151EACu;
    // 0x151eac: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151eb0: 0x8c752c10  lw          $s5, 0x2C10($v1)
    ctx->pc = 0x151eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x151eb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x151EB4u;
    {
        const bool branch_taken_0x151eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EB4u;
        // 0x151eb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151eb4) {
            ctx->pc = 0x151F04u;
            return;
        }
    }
    ctx->pc = 0x151EBCu;
}
