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

// Function: entry_00124198
// Address: 0x124198 - 0x1241f0
void entry_00124198_0x124198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124198_0x124198");
#endif

    ctx->pc = 0x124198u;

    // 0x124198: 0xde860060  ld          $a2, 0x60($s4)
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x12419c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1241a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1241a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1241a4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1241a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1241a8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1241a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1241ac: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x1241acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
    // 0x1241b0: 0x34453fff  ori         $a1, $v0, 0x3FFF
    ctx->pc = 0x1241b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1241b4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1241b8: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1241b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1241bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1241bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1241c0: 0x16e2001a  bne         $s7, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1241C0u;
    {
        const bool branch_taken_0x1241c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C0u;
        // 0x1241c4: 0xfe830060  sd          $v1, 0x60($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241c0) {
            ctx->pc = 0x12422Cu;
            return;
        }
    }
    ctx->pc = 0x1241C8u;
    // 0x1241c8: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1241c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1241cc: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1241d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1241D0u;
    {
        const bool branch_taken_0x1241d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241d0) {
            ctx->pc = 0x1241F0u;
            return;
        }
    }
    ctx->pc = 0x1241D8u;
    // 0x1241d8: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x1241d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1241dc: 0x64020004  daddiu      $v0, $zero, 0x4
    ctx->pc = 0x1241dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1241e0: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1241e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x1241e4: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1241e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1241e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1241ec: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x1241ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
    ctx->pc = 0x1241f0u;
}
