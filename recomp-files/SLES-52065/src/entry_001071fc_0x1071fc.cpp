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

// Function: entry_001071fc
// Address: 0x1071fc - 0x10722c
void entry_001071fc_0x1071fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001071fc_0x1071fc");
#endif

    ctx->pc = 0x1071fcu;

    // 0x1071fc: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x1071fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x107200: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x107200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107204: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x107204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x107208: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x107208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10720c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10720cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x107210: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x107210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x107214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107218: 0x845401fa  lh          $s4, 0x1FA($v0)
    ctx->pc = 0x107218u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 506)));
    // 0x10721c: 0x16850003  bne         $s4, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10721Cu;
    {
        const bool branch_taken_0x10721c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        ctx->pc = 0x107220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10721Cu;
        // 0x107220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10721c) {
            ctx->pc = 0x10722Cu;
            return;
        }
    }
    ctx->pc = 0x107224u;
    // 0x107224: 0xc042118  jal         func_108460
    ctx->pc = 0x107224u;
    SET_GPR_U32(ctx, 31, 0x10722Cu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x107224u, 0x10722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10722Cu;
}
