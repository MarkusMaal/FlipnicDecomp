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

// Function: entry_001982a8
// Address: 0x1982a8 - 0x19830c
void entry_001982a8_0x1982a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001982a8_0x1982a8");
#endif

    switch (ctx->pc) {
        case 0x1982b8u: goto label_1982b8;
        case 0x1982c4u: goto label_1982c4;
        case 0x1982e8u: goto label_1982e8;
        case 0x1982fcu: goto label_1982fc;
        default: break;
    }

    ctx->pc = 0x1982a8u;

label_1982a8:
    // 0x1982a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1982a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1982ac:
    // 0x1982ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1982acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1982b0:
    // 0x1982b0: 0xc064c4c  jal         func_193130
label_1982b4:
    if (ctx->pc == 0x1982B4u) {
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982B8u;
        goto label_1982b8;
    }
    ctx->pc = 0x1982B0u;
    SET_GPR_U32(ctx, 31, 0x1982B8u);
    ctx->pc = 0x1982B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982B0u;
    // 0x1982b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1982B0u, 0x1982B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982B8u;
label_1982b8:
    // 0x1982b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1982b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1982bc:
    // 0x1982bc: 0xc064bf8  jal         func_192FE0
label_1982c0:
    if (ctx->pc == 0x1982C0u) {
        ctx->pc = 0x1982C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982BCu;
        // 0x1982c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982C4u;
        goto label_1982c4;
    }
    ctx->pc = 0x1982BCu;
    SET_GPR_U32(ctx, 31, 0x1982C4u);
    ctx->pc = 0x1982C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982BCu;
    // 0x1982c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x1982BCu, 0x1982C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982C4u;
label_1982c4:
    // 0x1982c4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1982c8:
    // 0x1982c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1982c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1982cc:
    // 0x1982cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1982d0:
    // 0x1982d0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1982d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1982d4:
    // 0x1982d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1982d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1982d8:
    // 0x1982d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1982dc:
    // 0x1982dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1982dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1982e0:
    // 0x1982e0: 0x320f809  jalr        $t9
label_1982e4:
    if (ctx->pc == 0x1982E4u) {
        ctx->pc = 0x1982E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982E0u;
        // 0x1982e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982E8u;
        goto label_1982e8;
    }
    ctx->pc = 0x1982E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1982E8u);
        ctx->pc = 0x1982E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982E0u;
        // 0x1982e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982E0u, 0x1982E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1982E8u;
label_1982e8:
    // 0x1982e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1982e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1982ec:
    // 0x1982ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1982f0:
    // 0x1982f0: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1982f4:
    // 0x1982f4: 0x320f809  jalr        $t9
label_1982f8:
    if (ctx->pc == 0x1982F8u) {
        ctx->pc = 0x1982F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982F4u;
        // 0x1982f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982FCu;
        goto label_1982fc;
    }
    ctx->pc = 0x1982F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1982FCu);
        ctx->pc = 0x1982F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982F4u;
        // 0x1982f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982F4u, 0x1982FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1982FCu;
label_1982fc:
    // 0x1982fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1982fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_198300:
    // 0x198300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_198304:
    // 0x198304: 0x10000046  b           . + 4 + (0x46 << 2)
label_198308:
    if (ctx->pc == 0x198308u) {
        ctx->pc = 0x198308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198304u;
        // 0x198308: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19830Cu;
        goto label_fallthrough_0x198304;
    }
    ctx->pc = 0x198304u;
    {
        const bool branch_taken_0x198304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198304u;
        // 0x198308: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198304) {
            ctx->pc = 0x198420u;
            return;
        }
    }
label_fallthrough_0x198304:
    ctx->pc = 0x19830Cu;
}
