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

// Function: entry_0011c6d0
// Address: 0x11c6d0 - 0x11c6f8
void entry_0011c6d0_0x11c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c6d0_0x11c6d0");
#endif

    ctx->pc = 0x11c6d0u;

    // 0x11c6d0: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x11c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c6d4: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c6d8: 0x8f8383dc  lw          $v1, -0x7C24($gp)
    ctx->pc = 0x11c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935516)));
    // 0x11c6dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C6DCu;
    {
        const bool branch_taken_0x11c6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6DCu;
        // 0x11c6e0: 0xa48023  subu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6dc) {
            ctx->pc = 0x11C6F8u;
            return;
        }
    }
    ctx->pc = 0x11C6E4u;
    // 0x11c6e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x11c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c6e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c6ec: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C6ECu;
    {
        const bool branch_taken_0x11c6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c6ec) {
            ctx->pc = 0x11C6F8u;
            return;
        }
    }
    ctx->pc = 0x11C6F4u;
    // 0x11c6f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11c6f8u;
}
