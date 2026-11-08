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

// Function: entry_001241f0
// Address: 0x1241f0 - 0x12422c
void entry_001241f0_0x1241f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001241f0_0x1241f0");
#endif

    ctx->pc = 0x1241f0u;

    // 0x1241f0: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x1241f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1241f4: 0x4133c  dsll32      $v0, $a0, 12
    ctx->pc = 0x1241f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 12));
    // 0x1241f8: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x1241f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1241fc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1241fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x124200: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x124200u;
    {
        const bool branch_taken_0x124200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124200) {
            ctx->pc = 0x124298u;
            return;
        }
    }
    ctx->pc = 0x124208u;
    // 0x124208: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x124208u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x12420c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x12420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x124210: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x124210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x124214: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x124214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x124218: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12421c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x12421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x124220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124224: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x124224u;
    {
        const bool branch_taken_0x124224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124224u;
        // 0x124228: 0xfe820060  sd          $v0, 0x60($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124224) {
            ctx->pc = 0x124298u;
            return;
        }
    }
    ctx->pc = 0x12422Cu;
}
