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

// Function: entry_00146360
// Address: 0x146360 - 0x146388
void entry_00146360_0x146360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146360_0x146360");
#endif

    ctx->pc = 0x146360u;

    // 0x146360: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x146364: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x146364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x146368: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x146368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14636c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x14636cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x146370: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x146374: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146378: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146378u;
    {
        const bool branch_taken_0x146378 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146378u;
        // 0x14637c: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146378) {
            ctx->pc = 0x146388u;
            return;
        }
    }
    ctx->pc = 0x146380u;
    // 0x146380: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x146380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x146384: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x146388u;
}
