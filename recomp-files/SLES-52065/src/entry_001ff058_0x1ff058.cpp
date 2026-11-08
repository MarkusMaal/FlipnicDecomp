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

// Function: entry_001ff058
// Address: 0x1ff058 - 0x1ff098
void entry_001ff058_0x1ff058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff058_0x1ff058");
#endif

    ctx->pc = 0x1ff058u;

    // 0x1ff058: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x1ff05c: 0x25c2d9d0  addiu       $v0, $t6, -0x2630
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294957520));
    // 0x1ff060: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D9D8u));
    // 0x1ff064: 0x1202008e  beq         $s0, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1FF064u;
    {
        const bool branch_taken_0x1ff064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF064u;
        // 0x1ff068: 0x25660003  addiu       $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff064) {
            ctx->pc = 0x1FF2A0u;
            return;
        }
    }
    ctx->pc = 0x1FF06Cu;
    // 0x1ff06c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff070: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff074: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1ff074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1ff078: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x1ff078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ff07c: 0x111202b  sltu        $a0, $t0, $s1
    ctx->pc = 0x1ff07cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff080: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF080u;
    {
        const bool branch_taken_0x1ff080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF080u;
        // 0x1ff084: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff080) {
            ctx->pc = 0x1FF098u;
            return;
        }
    }
    ctx->pc = 0x1FF088u;
    // 0x1ff088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff08c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF090u;
    {
        const bool branch_taken_0x1ff090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF090u;
        // 0x1ff094: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff090) {
            ctx->pc = 0x1FF0A4u;
            return;
        }
    }
    ctx->pc = 0x1FF098u;
}
