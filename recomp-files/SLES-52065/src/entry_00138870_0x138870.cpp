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

// Function: entry_00138870
// Address: 0x138870 - 0x1388a8
void entry_00138870_0x138870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138870_0x138870");
#endif

    ctx->pc = 0x138870u;

    // 0x138870: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x138870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x138874: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x138874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x138878: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x138878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x13887c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x13887cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138880: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x138880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138884: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x138884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138888: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13888c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x13888cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x138890: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138894: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x138894u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x138898: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13889c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13889cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1388a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1388A0u;
    {
        const bool branch_taken_0x1388a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A0u;
        // 0x1388a4: 0xfe840018  sd          $a0, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a0) {
            ctx->pc = 0x138924u;
            return;
        }
    }
    ctx->pc = 0x1388A8u;
}
