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

// Function: entry_00114198
// Address: 0x114198 - 0x1141c0
void entry_00114198_0x114198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114198_0x114198");
#endif

    ctx->pc = 0x114198u;

    // 0x114198: 0x8f83824c  lw          $v1, -0x7DB4($gp)
    ctx->pc = 0x114198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
    // 0x11419c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11419Cu;
    {
        const bool branch_taken_0x11419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1141A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11419Cu;
        // 0x1141a0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11419c) {
            ctx->pc = 0x1141C0u;
            return;
        }
    }
    ctx->pc = 0x1141A4u;
    // 0x1141a4: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x1141a4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1141a8: 0xae230260  sw          $v1, 0x260($s1)
    ctx->pc = 0x1141a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 3));
    // 0x1141ac: 0x92250255  lbu         $a1, 0x255($s1)
    ctx->pc = 0x1141acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 597)));
    // 0x1141b0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1141b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1141b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1141b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1141b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1141b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1141bc: 0xa2230255  sb          $v1, 0x255($s1)
    ctx->pc = 0x1141bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 597), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1141c0u;
}
