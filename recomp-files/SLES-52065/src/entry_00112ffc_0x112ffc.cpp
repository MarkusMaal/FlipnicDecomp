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

// Function: entry_00112ffc
// Address: 0x112ffc - 0x113038
void entry_00112ffc_0x112ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ffc_0x112ffc");
#endif

    switch (ctx->pc) {
        case 0x113030u: goto label_113030;
        default: break;
    }

    ctx->pc = 0x112ffcu;

    // 0x112ffc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113000: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x113004: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11300c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x113010: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x113010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x113014: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x113014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x113018: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x11301c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x11301cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x113020: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113020u;
    {
        const bool branch_taken_0x113020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113020) {
            ctx->pc = 0x113038u;
            return;
        }
    }
    ctx->pc = 0x113028u;
    // 0x113028: 0xc042118  jal         func_108460
    ctx->pc = 0x113028u;
    SET_GPR_U32(ctx, 31, 0x113030u);
    ctx->pc = 0x11302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113028u;
    // 0x11302c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x113028u, 0x113030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113030u;
label_113030:
    // 0x113030: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113030u;
    {
        const bool branch_taken_0x113030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113030) {
            ctx->pc = 0x11304Cu;
            return;
        }
    }
    ctx->pc = 0x113038u;
}
