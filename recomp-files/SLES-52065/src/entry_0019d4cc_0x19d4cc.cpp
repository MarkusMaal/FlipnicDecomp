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

// Function: entry_0019d4cc
// Address: 0x19d4cc - 0x19d510
void entry_0019d4cc_0x19d4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d4cc_0x19d4cc");
#endif

    switch (ctx->pc) {
        case 0x19d4e0u: goto label_19d4e0;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d508u: goto label_19d508;
        default: break;
    }

    ctx->pc = 0x19d4ccu;

label_19d4cc:
    // 0x19d4cc: 0x0  nop
    ctx->pc = 0x19d4ccu;
    // NOP
label_19d4d0:
    // 0x19d4d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19d4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d4d4:
    // 0x19d4d4: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19d4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19d4d8:
    // 0x19d4d8: 0x320f809  jalr        $t9
label_19d4dc:
    if (ctx->pc == 0x19D4DCu) {
        ctx->pc = 0x19D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D8u;
        // 0x19d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4E0u;
        goto label_19d4e0;
    }
    ctx->pc = 0x19D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D4E0u);
        ctx->pc = 0x19D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D8u;
        // 0x19d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4D8u, 0x19D4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D4E0u;
label_19d4e0:
    // 0x19d4e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19d4e4:
    if (ctx->pc == 0x19D4E4u) {
        ctx->pc = 0x19D4E8u;
        goto label_19d4e8;
    }
    ctx->pc = 0x19D4E0u;
    {
        const bool branch_taken_0x19d4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d4e0) {
            ctx->pc = 0x19D510u;
            return;
        }
    }
    ctx->pc = 0x19D4E8u;
label_19d4e8:
    // 0x19d4e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d4ec:
    // 0x19d4ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d4f0:
    // 0x19d4f0: 0xc064c20  jal         func_193080
label_19d4f4:
    if (ctx->pc == 0x19D4F4u) {
        ctx->pc = 0x19D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4F0u;
        // 0x19d4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4F8u;
        goto label_19d4f8;
    }
    ctx->pc = 0x19D4F0u;
    SET_GPR_U32(ctx, 31, 0x19D4F8u);
    ctx->pc = 0x19D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4F0u;
    // 0x19d4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19D4F0u, 0x19D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4F8u;
label_19d4f8:
    // 0x19d4f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d4fc:
    // 0x19d4fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d500:
    // 0x19d500: 0xc064c4c  jal         func_193130
label_19d504:
    if (ctx->pc == 0x19D504u) {
        ctx->pc = 0x19D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D500u;
        // 0x19d504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D508u;
        goto label_19d508;
    }
    ctx->pc = 0x19D500u;
    SET_GPR_U32(ctx, 31, 0x19D508u);
    ctx->pc = 0x19D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D500u;
    // 0x19d504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19D500u, 0x19D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D508u;
label_19d508:
    // 0x19d508: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d50c:
    // 0x19d50c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19d510u;
}
