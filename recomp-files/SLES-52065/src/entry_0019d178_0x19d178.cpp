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

// Function: entry_0019d178
// Address: 0x19d178 - 0x19d224
void entry_0019d178_0x19d178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d178_0x19d178");
#endif

    switch (ctx->pc) {
        case 0x19d188u: goto label_19d188;
        case 0x19d1ccu: goto label_19d1cc;
        case 0x19d214u: goto label_19d214;
        default: break;
    }

    ctx->pc = 0x19d178u;

    // 0x19d178: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19d17c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d180: 0xc057040  jal         func_15C100
    ctx->pc = 0x19D180u;
    SET_GPR_U32(ctx, 31, 0x19D188u);
    ctx->pc = 0x19D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D180u;
    // 0x19d184: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D180u, 0x19D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D188u;
label_19d188:
    // 0x19d188: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d18c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d190: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19d194: 0xac620774  sw          $v0, 0x774($v1)
    ctx->pc = 0x19d194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 2));
    // 0x19d198: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d19c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d1a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d1a4: 0xac5007b4  sw          $s0, 0x7B4($v0)
    ctx->pc = 0x19d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 16));
    // 0x19d1a8: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d1ac: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19d1b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d1b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d1b8: 0xac400734  sw          $zero, 0x734($v0)
    ctx->pc = 0x19d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1844), GPR_U32(ctx, 0));
    // 0x19d1bc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19d1c0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d1c4: 0xc057040  jal         func_15C100
    ctx->pc = 0x19D1C4u;
    SET_GPR_U32(ctx, 31, 0x19D1CCu);
    ctx->pc = 0x19D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D1C4u;
    // 0x19d1c8: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D1C4u, 0x19D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D1CCu;
label_19d1cc:
    // 0x19d1cc: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d1d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d1d4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19d1d8: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x19d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
    // 0x19d1dc: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d1e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d1e8: 0xac4006b4  sw          $zero, 0x6B4($v0)
    ctx->pc = 0x19d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1716), GPR_U32(ctx, 0));
    // 0x19d1ec: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d1f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d1f8: 0xac5006f4  sw          $s0, 0x6F4($v0)
    ctx->pc = 0x19d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1780), GPR_U32(ctx, 16));
    // 0x19d1fc: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d204: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d208: 0x8c450674  lw          $a1, 0x674($v0)
    ctx->pc = 0x19d208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
    // 0x19d20c: 0xc064c0c  jal         func_193030
    ctx->pc = 0x19D20Cu;
    SET_GPR_U32(ctx, 31, 0x19D214u);
    ctx->pc = 0x19D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D20Cu;
    // 0x19d210: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19D20Cu, 0x19D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D214u;
label_19d214:
    // 0x19d214: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d21c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x19D21Cu;
    {
        const bool branch_taken_0x19d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D21Cu;
        // 0x19d220: 0xaea20670  sw          $v0, 0x670($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d21c) {
            ctx->pc = 0x19D2C8u;
            return;
        }
    }
    ctx->pc = 0x19D224u;
}
