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

// Function: entry_00139e68
// Address: 0x139e68 - 0x139e9c
void entry_00139e68_0x139e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e68_0x139e68");
#endif

    ctx->pc = 0x139e68u;

    // 0x139e68: 0x8e2d0058  lw          $t5, 0x58($s1)
    ctx->pc = 0x139e68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x139e6c: 0xd082b  sltu        $at, $zero, $t5
    ctx->pc = 0x139e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x139e70: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x139E70u;
    {
        const bool branch_taken_0x139e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E70u;
        // 0x139e74: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e70) {
            ctx->pc = 0x139F7Cu;
            return;
        }
    }
    ctx->pc = 0x139E78u;
    // 0x139e78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x139e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e7c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x139e80: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x139e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x139e84: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x139e84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139e88: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x139e88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x139e8c: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x139e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139e90: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x139e94: 0x34a58120  ori         $a1, $a1, 0x8120
    ctx->pc = 0x139e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33056);
    // 0x139e98: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x139e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->pc = 0x139e9cu;
}
