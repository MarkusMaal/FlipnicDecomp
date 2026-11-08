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

// Function: entry_001ff44c
// Address: 0x1ff44c - 0x1ff480
void entry_001ff44c_0x1ff44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff44c_0x1ff44c");
#endif

    ctx->pc = 0x1ff44cu;

    // 0x1ff44c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff450: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ff454: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1ff458: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff45c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ff45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff460: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x1ff460u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff464: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF464u;
    {
        const bool branch_taken_0x1ff464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff464) {
            ctx->pc = 0x1FF468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF464u;
            // 0x1ff468: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF480u;
            return;
        }
    }
    ctx->pc = 0x1FF46Cu;
    // 0x1ff46c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1ff46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ff470: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff474: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF478u;
    {
        const bool branch_taken_0x1ff478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF478u;
        // 0x1ff47c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff478) {
            ctx->pc = 0x1FF488u;
            return;
        }
    }
    ctx->pc = 0x1FF480u;
}
