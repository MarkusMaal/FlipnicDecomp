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

// Function: entry_00201f40
// Address: 0x201f40 - 0x201f78
void entry_00201f40_0x201f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201f40_0x201f40");
#endif

    ctx->pc = 0x201f40u;

    // 0x201f40: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x201f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x201f44: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x201F44u;
    {
        const bool branch_taken_0x201f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F44u;
        // 0x201f48: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f44) {
            ctx->pc = 0x201FB8u;
            return;
        }
    }
    ctx->pc = 0x201F4Cu;
    // 0x201f4c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201f50: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x201f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201f54: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x201F54u;
    {
        const bool branch_taken_0x201f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F54u;
        // 0x201f58: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f54) {
            ctx->pc = 0x201FC4u;
            return;
        }
    }
    ctx->pc = 0x201F5Cu;
    // 0x201f5c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x201f60: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x201f64: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x201f64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x201f68: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x201f68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x201f6c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x201f6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x201f70: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x201f70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x201f74: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    ctx->pc = 0x201f78u;
}
