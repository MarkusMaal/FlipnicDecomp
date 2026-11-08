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

// Function: entry_00121490
// Address: 0x121490 - 0x1214a4
void entry_00121490_0x121490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121490_0x121490");
#endif

    ctx->pc = 0x121490u;

    // 0x121490: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x121490u;
    {
        const bool branch_taken_0x121490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121490u;
        // 0x121494: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121490) {
            ctx->pc = 0x1214C0u;
            return;
        }
    }
    ctx->pc = 0x121498u;
    // 0x121498: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x121498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12149c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12149Cu;
    {
        const bool branch_taken_0x12149c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12149Cu;
        // 0x1214a0: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12149c) {
            ctx->pc = 0x1214C0u;
            return;
        }
    }
    ctx->pc = 0x1214A4u;
}
