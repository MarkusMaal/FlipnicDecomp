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

// Function: entry_001fc2c4
// Address: 0x1fc2c4 - 0x1fc304
void entry_001fc2c4_0x1fc2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc2c4_0x1fc2c4");
#endif

    ctx->pc = 0x1fc2c4u;

    // 0x1fc2c4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1fc2c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc2c8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1fc2cc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1fc2d0: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1fc2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1fc2d4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FC2D4u;
    {
        const bool branch_taken_0x1fc2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2D4u;
        // 0x1fc2d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2d4) {
            ctx->pc = 0x1FC330u;
            return;
        }
    }
    ctx->pc = 0x1FC2DCu;
    // 0x1fc2dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc2e0: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1fc2e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc2e8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1fc2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1fc2ec: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1fc2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1fc2f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC2F0u;
    {
        const bool branch_taken_0x1fc2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F0u;
        // 0x1fc2f4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f0) {
            ctx->pc = 0x1FC304u;
            return;
        }
    }
    ctx->pc = 0x1FC2F8u;
    // 0x1fc2f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc2fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC2FCu;
    {
        const bool branch_taken_0x1fc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2FCu;
        // 0x1fc300: 0x24554ee0  addiu       $s5, $v0, 0x4EE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2fc) {
            ctx->pc = 0x1FC30Cu;
            return;
        }
    }
    ctx->pc = 0x1FC304u;
}
