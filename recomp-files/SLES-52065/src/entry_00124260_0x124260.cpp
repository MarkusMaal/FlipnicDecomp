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

// Function: entry_00124260
// Address: 0x124260 - 0x124298
void entry_00124260_0x124260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124260_0x124260");
#endif

    ctx->pc = 0x124260u;

    // 0x124260: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x124260u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x124264: 0x4133c  dsll32      $v0, $a0, 12
    ctx->pc = 0x124264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 12));
    // 0x124268: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x12426c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x124270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124270u;
    {
        const bool branch_taken_0x124270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124270) {
            ctx->pc = 0x124298u;
            return;
        }
    }
    ctx->pc = 0x124278u;
    // 0x124278: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x124278u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x12427c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x12427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x124280: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x124280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x124284: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x124288: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12428c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x12428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x124290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124294: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x124294u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
    ctx->pc = 0x124298u;
}
