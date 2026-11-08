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

// Function: entry_001a41bc
// Address: 0x1a41bc - 0x1a4214
void entry_001a41bc_0x1a41bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a41bc_0x1a41bc");
#endif

    switch (ctx->pc) {
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41e4u: goto label_1a41e4;
        default: break;
    }

    ctx->pc = 0x1a41bcu;

    // 0x1a41bc: 0x0  nop
    ctx->pc = 0x1a41bcu;
    // NOP
    // 0x1a41c0: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1a41c4: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1a41c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a41c8: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A41C8u;
    SET_GPR_U32(ctx, 31, 0x1A41D0u);
    ctx->pc = 0x1A41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41C8u;
    // 0x1a41cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A41C8u, 0x1A41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41D0u;
label_1a41d0:
    // 0x1a41d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a41d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a41d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a41d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a41d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a41d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a41dc: 0xc064c20  jal         func_193080
    ctx->pc = 0x1A41DCu;
    SET_GPR_U32(ctx, 31, 0x1A41E4u);
    ctx->pc = 0x1A41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41DCu;
    // 0x1a41e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1A41DCu, 0x1A41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41E4u;
label_1a41e4:
    // 0x1a41e4: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1a41e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a41ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a41f0: 0xac520450  sw          $s2, 0x450($v0)
    ctx->pc = 0x1a41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1104), GPR_U32(ctx, 18));
    // 0x1a41f4: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1a41f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a41fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4200: 0xac540490  sw          $s4, 0x490($v0)
    ctx->pc = 0x1a4200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 20));
    // 0x1a4204: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1a4208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a420c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1A420Cu;
    {
        const bool branch_taken_0x1a420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A420Cu;
        // 0x1a4210: 0xae220340  sw          $v0, 0x340($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a420c) {
            ctx->pc = 0x1A431Cu;
            return;
        }
    }
    ctx->pc = 0x1A4214u;
}
