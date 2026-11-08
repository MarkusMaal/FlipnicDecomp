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

// Function: entry_001134a0
// Address: 0x1134a0 - 0x1134e8
void entry_001134a0_0x1134a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001134a0_0x1134a0");
#endif

    switch (ctx->pc) {
        case 0x1134a8u: goto label_1134a8;
        default: break;
    }

    ctx->pc = 0x1134a0u;

    // 0x1134a0: 0xc044254  jal         func_110950
    ctx->pc = 0x1134A0u;
    SET_GPR_U32(ctx, 31, 0x1134A8u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x1134A0u, 0x1134A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134A8u;
label_1134a8:
    // 0x1134a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1134a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1134ac: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x1134acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x1134b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1134b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1134b4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1134b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1134b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1134b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1134bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1134bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1134c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1134c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1134c4: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x1134c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1134c8: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x1134c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x1134cc: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x1134ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x1134d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1134D0u;
    {
        const bool branch_taken_0x1134d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134d0) {
            ctx->pc = 0x1134E8u;
            return;
        }
    }
    ctx->pc = 0x1134D8u;
    // 0x1134d8: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x1134d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x1134dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1134DCu;
    {
        const bool branch_taken_0x1134dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134DCu;
        // 0x1134e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134dc) {
            ctx->pc = 0x1134E8u;
            return;
        }
    }
    ctx->pc = 0x1134E4u;
    // 0x1134e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1134e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x1134e8u;
}
