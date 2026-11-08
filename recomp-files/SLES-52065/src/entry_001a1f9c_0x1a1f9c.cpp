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

// Function: entry_001a1f9c
// Address: 0x1a1f9c - 0x1a1fb4
void entry_001a1f9c_0x1a1f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1f9c_0x1a1f9c");
#endif

    ctx->pc = 0x1a1f9cu;

    // 0x1a1f9c: 0x2919821  addu        $s3, $s4, $s1
    ctx->pc = 0x1a1f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1a1fa0: 0x926209fc  lbu         $v0, 0x9FC($s3)
    ctx->pc = 0x1a1fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2556)));
    // 0x1a1fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1FA4u;
    {
        const bool branch_taken_0x1a1fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FA4u;
        // 0x1a1fa8: 0x267209dc  addiu       $s2, $s3, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fa4) {
            ctx->pc = 0x1A1FB4u;
            return;
        }
    }
    ctx->pc = 0x1A1FACu;
    // 0x1a1fac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1FACu;
    {
        const bool branch_taken_0x1a1fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FACu;
        // 0x1a1fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fac) {
            ctx->pc = 0x1A1FCCu;
            return;
        }
    }
    ctx->pc = 0x1A1FB4u;
}
