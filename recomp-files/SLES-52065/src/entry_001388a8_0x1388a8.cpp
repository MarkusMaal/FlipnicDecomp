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

// Function: entry_001388a8
// Address: 0x1388a8 - 0x1388f0
void entry_001388a8_0x1388a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388a8_0x1388a8");
#endif

    ctx->pc = 0x1388a8u;

    // 0x1388a8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1388ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1388ACu;
    {
        const bool branch_taken_0x1388ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388ACu;
        // 0x1388b0: 0x3c033026  lui         $v1, 0x3026 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12326 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388ac) {
            ctx->pc = 0x1388F0u;
            return;
        }
    }
    ctx->pc = 0x1388B4u;
    // 0x1388b4: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x1388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x1388b8: 0x34028022  ori         $v0, $zero, 0x8022
    ctx->pc = 0x1388b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1388bc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1388bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1388c0: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1388c4: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1388c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1388c8: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x1388c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1388cc: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x1388ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1388d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1388d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1388d4: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x1388d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x1388d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1388d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1388dc: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x1388dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x1388e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1388e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1388e4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1388e4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1388e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1388E8u;
    {
        const bool branch_taken_0x1388e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388E8u;
        // 0x1388ec: 0xfe840018  sd          $a0, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388e8) {
            ctx->pc = 0x138924u;
            return;
        }
    }
    ctx->pc = 0x1388F0u;
}
