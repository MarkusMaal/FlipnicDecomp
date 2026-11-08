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

// Function: entry_0016e5c8
// Address: 0x16e5c8 - 0x16e5f0
void entry_0016e5c8_0x16e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5c8_0x16e5c8");
#endif

    ctx->pc = 0x16e5c8u;

    // 0x16e5c8: 0x86240216  lh          $a0, 0x216($s1)
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
    // 0x16e5cc: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e5d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x16e5d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e5d4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E5D4u;
    {
        const bool branch_taken_0x16e5d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5D4u;
        // 0x16e5d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5d4) {
            ctx->pc = 0x16E5F4u;
            return;
        }
    }
    ctx->pc = 0x16E5DCu;
    // 0x16e5dc: 0x86240218  lh          $a0, 0x218($s1)
    ctx->pc = 0x16e5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x16e5e0: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x16e5e4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E5E4u;
    {
        const bool branch_taken_0x16e5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5E4u;
        // 0x16e5e8: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5e4) {
            ctx->pc = 0x16E5F0u;
            return;
        }
    }
    ctx->pc = 0x16E5ECu;
    // 0x16e5ec: 0xa6230218  sh          $v1, 0x218($s1)
    ctx->pc = 0x16e5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x16e5f0u;
}
