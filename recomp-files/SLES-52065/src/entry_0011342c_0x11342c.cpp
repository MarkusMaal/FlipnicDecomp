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

// Function: entry_0011342c
// Address: 0x11342c - 0x113468
void entry_0011342c_0x11342c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011342c_0x11342c");
#endif

    switch (ctx->pc) {
        case 0x113460u: goto label_113460;
        default: break;
    }

    ctx->pc = 0x11342cu;

    // 0x11342c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113430: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x113430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x113434: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11343c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x113440: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x113444: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x113444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x113448: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x11344c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x11344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x113450: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113450u;
    {
        const bool branch_taken_0x113450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113450) {
            ctx->pc = 0x113468u;
            return;
        }
    }
    ctx->pc = 0x113458u;
    // 0x113458: 0xc042118  jal         func_108460
    ctx->pc = 0x113458u;
    SET_GPR_U32(ctx, 31, 0x113460u);
    ctx->pc = 0x11345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113458u;
    // 0x11345c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x113458u, 0x113460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113460u;
label_113460:
    // 0x113460: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113460u;
    {
        const bool branch_taken_0x113460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113460) {
            ctx->pc = 0x11347Cu;
            return;
        }
    }
    ctx->pc = 0x113468u;
}
