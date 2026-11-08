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

// Function: entry_001fddd0
// Address: 0x1fddd0 - 0x1fddf0
void entry_001fddd0_0x1fddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fddd0_0x1fddd0");
#endif

    ctx->pc = 0x1fddd0u;

    // 0x1fddd0: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FDDD0u;
    {
        const bool branch_taken_0x1fddd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD0u;
        // 0x1fddd4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddd0) {
            ctx->pc = 0x1FDE00u;
            return;
        }
    }
    ctx->pc = 0x1FDDD8u;
    // 0x1fddd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDDD8u;
    {
        const bool branch_taken_0x1fddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD8u;
        // 0x1fdddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddd8) {
            ctx->pc = 0x1FDDF0u;
            return;
        }
    }
    ctx->pc = 0x1FDDE0u;
    // 0x1fdde0: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1FDDE0u;
    {
        const bool branch_taken_0x1fdde0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE0u;
        // 0x1fdde4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde0) {
            ctx->pc = 0x1FDEA0u;
            return;
        }
    }
    ctx->pc = 0x1FDDE8u;
    // 0x1fdde8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FDDE8u;
    {
        const bool branch_taken_0x1fdde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE8u;
        // 0x1fddec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde8) {
            ctx->pc = 0x1FDEB0u;
            return;
        }
    }
    ctx->pc = 0x1FDDF0u;
}
