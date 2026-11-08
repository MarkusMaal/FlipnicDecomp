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

// Function: entry_0019d490
// Address: 0x19d490 - 0x19d4cc
void entry_0019d490_0x19d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d490_0x19d490");
#endif

    switch (ctx->pc) {
        case 0x19d49cu: goto label_19d49c;
        case 0x19d4acu: goto label_19d4ac;
        case 0x19d4c0u: goto label_19d4c0;
        default: break;
    }

    ctx->pc = 0x19d490u;

label_19d490:
    // 0x19d490: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d494:
    // 0x19d494: 0xc064c20  jal         func_193080
label_19d498:
    if (ctx->pc == 0x19D498u) {
        ctx->pc = 0x19D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D494u;
        // 0x19d498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D49Cu;
        goto label_19d49c;
    }
    ctx->pc = 0x19D494u;
    SET_GPR_U32(ctx, 31, 0x19D49Cu);
    ctx->pc = 0x19D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D494u;
    // 0x19d498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19D494u, 0x19D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D49Cu;
label_19d49c:
    // 0x19d49c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d4a0:
    // 0x19d4a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d4a4:
    // 0x19d4a4: 0xc064c4c  jal         func_193130
label_19d4a8:
    if (ctx->pc == 0x19D4A8u) {
        ctx->pc = 0x19D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4A4u;
        // 0x19d4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4ACu;
        goto label_19d4ac;
    }
    ctx->pc = 0x19D4A4u;
    SET_GPR_U32(ctx, 31, 0x19D4ACu);
    ctx->pc = 0x19D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4A4u;
    // 0x19d4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19D4A4u, 0x19D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4ACu;
label_19d4ac:
    // 0x19d4ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19d4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d4b0:
    // 0x19d4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d4b4:
    // 0x19d4b4: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19d4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19d4b8:
    // 0x19d4b8: 0x320f809  jalr        $t9
label_19d4bc:
    if (ctx->pc == 0x19D4BCu) {
        ctx->pc = 0x19D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4B8u;
        // 0x19d4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4C0u;
        goto label_19d4c0;
    }
    ctx->pc = 0x19D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D4C0u);
        ctx->pc = 0x19D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4B8u;
        // 0x19d4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4B8u, 0x19D4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D4C0u;
label_19d4c0:
    // 0x19d4c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d4c4:
    // 0x19d4c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_19d4c8:
    if (ctx->pc == 0x19D4C8u) {
        ctx->pc = 0x19D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4C4u;
        // 0x19d4c8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4CCu;
        goto label_fallthrough_0x19d4c4;
    }
    ctx->pc = 0x19D4C4u;
    {
        const bool branch_taken_0x19d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4C4u;
        // 0x19d4c8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4c4) {
            ctx->pc = 0x19D510u;
            return;
        }
    }
label_fallthrough_0x19d4c4:
    ctx->pc = 0x19D4CCu;
}
