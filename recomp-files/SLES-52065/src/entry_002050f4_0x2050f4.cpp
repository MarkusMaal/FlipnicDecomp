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

// Function: entry_002050f4
// Address: 0x2050f4 - 0x205108
void entry_002050f4_0x2050f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002050f4_0x2050f4");
#endif

    ctx->pc = 0x2050f4u;

    // 0x2050f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2050f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2050f8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2050f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2050fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2050FCu;
    {
        const bool branch_taken_0x2050fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050FCu;
        // 0x205100: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050fc) {
            ctx->pc = 0x205134u;
            return;
        }
    }
    ctx->pc = 0x205104u;
    // 0x205104: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x205104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x205108u;
}
