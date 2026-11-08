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

// Function: entry_0017e608
// Address: 0x17e608 - 0x17e62c
void entry_0017e608_0x17e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e608_0x17e608");
#endif

    ctx->pc = 0x17e608u;

    // 0x17e608: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E608u;
    {
        const bool branch_taken_0x17e608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e608) {
            ctx->pc = 0x17E674u;
            return;
        }
    }
    ctx->pc = 0x17E610u;
    // 0x17e610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e614: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E614u;
    {
        const bool branch_taken_0x17e614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e614) {
            ctx->pc = 0x17E650u;
            return;
        }
    }
    ctx->pc = 0x17E61Cu;
    // 0x17e61c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E61Cu;
    {
        const bool branch_taken_0x17e61c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e61c) {
            ctx->pc = 0x17E62Cu;
            return;
        }
    }
    ctx->pc = 0x17E624u;
    // 0x17e624: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x17E624u;
    {
        const bool branch_taken_0x17e624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E624u;
        // 0x17e628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e624) {
            ctx->pc = 0x17E6DCu;
            return;
        }
    }
    ctx->pc = 0x17E62Cu;
}
