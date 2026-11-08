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

// Function: entry_001fed88
// Address: 0x1fed88 - 0x1feda4
void entry_001fed88_0x1fed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed88_0x1fed88");
#endif

    ctx->pc = 0x1fed88u;

    // 0x1fed88: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1fed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1fed8c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1fed8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1fed90: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FED90u;
    {
        const bool branch_taken_0x1fed90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED90u;
        // 0x1fed94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed90) {
            ctx->pc = 0x1FEDA4u;
            return;
        }
    }
    ctx->pc = 0x1FED98u;
    // 0x1fed98: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1fed98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fed9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FED9Cu;
    {
        const bool branch_taken_0x1fed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED9Cu;
        // 0x1feda0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed9c) {
            ctx->pc = 0x1FEDA8u;
            return;
        }
    }
    ctx->pc = 0x1FEDA4u;
}
