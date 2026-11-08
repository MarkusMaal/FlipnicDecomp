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

// Function: entry_001ff4f4
// Address: 0x1ff4f4 - 0x1ff520
void entry_001ff4f4_0x1ff4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff4f4_0x1ff4f4");
#endif

    ctx->pc = 0x1ff4f4u;

    // 0x1ff4f4: 0x2682d9c8  addiu       $v0, $s4, -0x2638
    ctx->pc = 0x1ff4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff4f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff4fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ff500: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1ff500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1ff504: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ff508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ff50c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ff50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF510u;
    {
        const bool branch_taken_0x1ff510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF510u;
        // 0x1ff514: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff510) {
            ctx->pc = 0x1FF520u;
            return;
        }
    }
    ctx->pc = 0x1FF518u;
    // 0x1ff518: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FF518u;
    {
        const bool branch_taken_0x1ff518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF518u;
        // 0x1ff51c: 0x2686d9c8  addiu       $a2, $s4, -0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff518) {
            ctx->pc = 0x1FF5E8u;
            return;
        }
    }
    ctx->pc = 0x1FF520u;
}
