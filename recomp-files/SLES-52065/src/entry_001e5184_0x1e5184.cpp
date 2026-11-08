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

// Function: entry_001e5184
// Address: 0x1e5184 - 0x1e51a4
void entry_001e5184_0x1e5184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5184_0x1e5184");
#endif

    ctx->pc = 0x1e5184u;

    // 0x1e5184: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1e5184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5188: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e518c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e5190: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e5190u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5194: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5194u;
    {
        const bool branch_taken_0x1e5194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5194) {
            ctx->pc = 0x1E51A4u;
            return;
        }
    }
    ctx->pc = 0x1E519Cu;
    // 0x1e519c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1E519Cu;
    {
        const bool branch_taken_0x1e519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E519Cu;
        // 0x1e51a0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e519c) {
            ctx->pc = 0x1E52C4u;
            return;
        }
    }
    ctx->pc = 0x1E51A4u;
}
