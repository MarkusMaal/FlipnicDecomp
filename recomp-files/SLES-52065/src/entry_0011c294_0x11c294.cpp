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

// Function: entry_0011c294
// Address: 0x11c294 - 0x11c2f0
void entry_0011c294_0x11c294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c294_0x11c294");
#endif

    ctx->pc = 0x11c294u;

    // 0x11c294: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x11c294u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x11c298: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11c298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c29c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x11c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c2a0: 0x10300a  movz        $a2, $zero, $s0
    ctx->pc = 0x11c2a0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x11c2a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11c2a8: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x11c2a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11c2ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11c2b0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x11c2b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x11c2b4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x11c2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11c2b8: 0x73f38  dsll        $a3, $a3, 28
    ctx->pc = 0x11c2b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 28);
    // 0x11c2bc: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x11c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x11c2c0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x11c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x11c2c4: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x11c2c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11c2c8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x11c2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11c2cc: 0x53102  srl         $a2, $a1, 4
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x11c2d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11c2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11c2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c2d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11c2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11c2dc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x11c2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11c2e0: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x11c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x11c2e4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11C2E4u;
    {
        const bool branch_taken_0x11c2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2E4u;
        // 0x11c2e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2e4) {
            ctx->pc = 0x11C370u;
            return;
        }
    }
    ctx->pc = 0x11C2ECu;
    // 0x11c2ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11c2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11c2f0u;
}
