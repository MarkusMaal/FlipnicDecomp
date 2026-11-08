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

// Function: entry_0013881c
// Address: 0x13881c - 0x138870
void entry_0013881c_0x13881c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013881c_0x13881c");
#endif

    ctx->pc = 0x13881cu;

    // 0x13881c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x138820: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x138820u;
    {
        const bool branch_taken_0x138820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x138820) {
            ctx->pc = 0x1388A8u;
            return;
        }
    }
    ctx->pc = 0x138828u;
    // 0x138828: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x138828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13882c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13882Cu;
    {
        const bool branch_taken_0x13882c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13882Cu;
        // 0x138830: 0x3c033024  lui         $v1, 0x3024 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12324 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13882c) {
            ctx->pc = 0x138870u;
            return;
        }
    }
    ctx->pc = 0x138834u;
    // 0x138834: 0x3c03302c  lui         $v1, 0x302C
    ctx->pc = 0x138834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12332 << 16));
    // 0x138838: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x138838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x13883c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x13883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x138840: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x138844: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x138844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138848: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x138848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13884c: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x13884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138850: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x138854: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x138854u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x138858: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13885c: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x13885cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x138860: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138864: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x138864u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x138868: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x138868u;
    {
        const bool branch_taken_0x138868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138868u;
        // 0x13886c: 0xfe840018  sd          $a0, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138868) {
            ctx->pc = 0x138924u;
            return;
        }
    }
    ctx->pc = 0x138870u;
}
