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

// Function: entry_001705f8
// Address: 0x1705f8 - 0x170614
void entry_001705f8_0x1705f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001705f8_0x1705f8");
#endif

    ctx->pc = 0x1705f8u;

    // 0x1705f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1705fc: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x170600: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x170600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170604: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x170604u;
    {
        const bool branch_taken_0x170604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x170604) {
            ctx->pc = 0x170614u;
            return;
        }
    }
    ctx->pc = 0x17060Cu;
    // 0x17060c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17060Cu;
    {
        const bool branch_taken_0x17060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17060Cu;
        // 0x170610: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17060c) {
            ctx->pc = 0x170618u;
            return;
        }
    }
    ctx->pc = 0x170614u;
}
