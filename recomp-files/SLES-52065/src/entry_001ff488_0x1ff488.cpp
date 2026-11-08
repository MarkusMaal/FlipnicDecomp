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

// Function: entry_001ff488
// Address: 0x1ff488 - 0x1ff4b8
void entry_001ff488_0x1ff488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff488_0x1ff488");
#endif

    ctx->pc = 0x1ff488u;

    // 0x1ff488: 0x2692d9c8  addiu       $s2, $s4, -0x2638
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff48c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff490: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ff490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ff494: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x1ff494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x1ff498: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff49c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1ff49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1ff4a0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ff4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff4a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF4A4u;
    {
        const bool branch_taken_0x1ff4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4A4u;
        // 0x1ff4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4a4) {
            ctx->pc = 0x1FF4B8u;
            return;
        }
    }
    ctx->pc = 0x1FF4ACu;
    // 0x1ff4ac: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff4b0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1FF4B0u;
    {
        const bool branch_taken_0x1ff4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4B0u;
        // 0x1ff4b4: 0x2686d9c8  addiu       $a2, $s4, -0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4b0) {
            ctx->pc = 0x1FF5E8u;
            return;
        }
    }
    ctx->pc = 0x1FF4B8u;
}
