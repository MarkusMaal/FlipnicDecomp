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

// Function: entry_001082bc
// Address: 0x1082bc - 0x1082dc
void entry_001082bc_0x1082bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001082bc_0x1082bc");
#endif

    ctx->pc = 0x1082bcu;

    // 0x1082bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1082c0: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1082c4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1082C4u;
    {
        const bool branch_taken_0x1082c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C4u;
        // 0x1082c8: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082c4) {
            ctx->pc = 0x10824Cu;
            return;
        }
    }
    ctx->pc = 0x1082CCu;
    // 0x1082cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1082ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1082d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1082d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1082d8: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x1082d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
    ctx->pc = 0x1082dcu;
}
