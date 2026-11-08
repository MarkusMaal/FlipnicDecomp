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

// Function: entry_002061b0
// Address: 0x2061b0 - 0x20620c
void entry_002061b0_0x2061b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002061b0_0x2061b0");
#endif

    ctx->pc = 0x2061b0u;

    // 0x2061b0: 0x9203f  dsra32      $a0, $t1, 0
    ctx->pc = 0x2061b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2061b4: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2061B4u;
    {
        const bool branch_taken_0x2061b4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2061b4) {
            ctx->pc = 0x20620Cu;
            return;
        }
    }
    ctx->pc = 0x2061BCu;
    // 0x2061bc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2061bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2061c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2061c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2061c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2061c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2061c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2061c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2061cc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2061ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2061d0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2061d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2061d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2061d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2061d8: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2061d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2061dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2061dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2061e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2061e4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2061e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2061e8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2061e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2061ec: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x2061ecu;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x2061f0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2061f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2061f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2061f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2061f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2061f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2061fc: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2061fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x206200: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x206200u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206204: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206208: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x206208u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    ctx->pc = 0x20620cu;
}
