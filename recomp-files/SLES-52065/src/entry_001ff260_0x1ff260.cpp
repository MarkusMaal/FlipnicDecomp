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

// Function: entry_001ff260
// Address: 0x1ff260 - 0x1ff28c
void entry_001ff260_0x1ff260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff260_0x1ff260");
#endif

    ctx->pc = 0x1ff260u;

label_1ff260:
    // 0x1ff260: 0x512a000b  beql        $t1, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF260u;
    {
        const bool branch_taken_0x1ff260 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x1ff260) {
            ctx->pc = 0x1FF264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF260u;
            // 0x1ff264: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF290u;
            return;
        }
    }
    ctx->pc = 0x1FF268u;
    // 0x1ff268: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1ff26c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff270: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1ff270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1ff274: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ff274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ff278: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1ff278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ff27c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF27Cu;
    {
        const bool branch_taken_0x1ff27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff27c) {
            ctx->pc = 0x1FF280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF27Cu;
            // 0x1ff280: 0x8d290008  lw          $t1, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff260;
        }
    }
    ctx->pc = 0x1FF284u;
    // 0x1ff284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF284u;
    {
        const bool branch_taken_0x1ff284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF284u;
        // 0x1ff288: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff284) {
            ctx->pc = 0x1FF290u;
            return;
        }
    }
    ctx->pc = 0x1FF28Cu;
}
