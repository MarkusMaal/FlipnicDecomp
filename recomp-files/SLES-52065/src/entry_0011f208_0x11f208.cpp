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

// Function: entry_0011f208
// Address: 0x11f208 - 0x11f228
void entry_0011f208_0x11f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f208_0x11f208");
#endif

    ctx->pc = 0x11f208u;

    // 0x11f208: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x11f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x11f20c: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x11f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x11f210: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11f210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f214: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x11f214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f218: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F218u;
    {
        const bool branch_taken_0x11f218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f218) {
            ctx->pc = 0x11F228u;
            return;
        }
    }
    ctx->pc = 0x11F220u;
    // 0x11f220: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11F220u;
    {
        const bool branch_taken_0x11f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F220u;
        // 0x11f224: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f220) {
            ctx->pc = 0x11F25Cu;
            return;
        }
    }
    ctx->pc = 0x11F228u;
}
