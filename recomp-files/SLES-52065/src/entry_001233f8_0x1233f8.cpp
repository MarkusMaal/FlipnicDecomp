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

// Function: entry_001233f8
// Address: 0x1233f8 - 0x123424
void entry_001233f8_0x1233f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001233f8_0x1233f8");
#endif

    ctx->pc = 0x1233f8u;

    // 0x1233f8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1233f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1233fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1233fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123400: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123404: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x123404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x123408: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x123408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x12340c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12340cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123410: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x123410u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x123414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123418: 0xc38026  xor         $s0, $a2, $v1
    ctx->pc = 0x123418u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x12341c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12341Cu;
    {
        const bool branch_taken_0x12341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12341Cu;
        // 0x123420: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12341c) {
            ctx->pc = 0x1234E4u;
            return;
        }
    }
    ctx->pc = 0x123424u;
}
