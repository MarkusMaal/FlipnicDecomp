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

// Function: entry_002067c4
// Address: 0x2067c4 - 0x206824
void entry_002067c4_0x2067c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002067c4_0x2067c4");
#endif

    ctx->pc = 0x2067c4u;

    // 0x2067c4: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x2067c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2067c8: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x2067c8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2067cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2067ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2067d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2067d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2067d4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x2067D4u;
    {
        const bool branch_taken_0x2067d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067D4u;
        // 0x2067d8: 0x3032025  or          $a0, $t8, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067d4) {
            ctx->pc = 0x206824u;
            return;
        }
    }
    ctx->pc = 0x2067DCu;
    // 0x2067dc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2067dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2067e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2067e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2067e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2067e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2067e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2067e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2067ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2067f0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x2067f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x2067f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2067f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2067f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2067f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2067fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2067fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206800: 0x42023  negu        $a0, $a0
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x206804: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x206804u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x206808: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x206808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x20680c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20680cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206810: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x206810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x206814: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x206814u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x206818: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20681c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20681cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x206820: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x206820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    ctx->pc = 0x206824u;
}
