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

// Function: entry_001ad374
// Address: 0x1ad374 - 0x1ad3c8
void entry_001ad374_0x1ad374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad374_0x1ad374");
#endif

    switch (ctx->pc) {
        case 0x1ad390u: goto label_1ad390;
        case 0x1ad3c0u: goto label_1ad3c0;
        default: break;
    }

    ctx->pc = 0x1ad374u;

    // 0x1ad374: 0x0  nop
    ctx->pc = 0x1ad374u;
    // NOP
    // 0x1ad378: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ad378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ad37c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ad380: 0x1062ffbb  beq         $v1, $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1AD380u;
    {
        const bool branch_taken_0x1ad380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad380) {
            ctx->pc = 0x1AD270u;
            return;
        }
    }
    ctx->pc = 0x1AD388u;
    // 0x1ad388: 0xc046458  jal         func_119160
    ctx->pc = 0x1AD388u;
    SET_GPR_U32(ctx, 31, 0x1AD390u);
    ctx->pc = 0x1AD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD388u;
    // 0x1ad38c: 0x8f848118  lw          $a0, -0x7EE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AD388u, 0x1AD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD390u;
label_1ad390:
    // 0x1ad390: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1ad394: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ad394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ad398: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ad398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ad39c: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ad39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ad3a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ad3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad3a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad3a8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ad3ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ad3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ad3b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad3b4: 0xae2206d8  sw          $v0, 0x6D8($s1)
    ctx->pc = 0x1ad3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1752), GPR_U32(ctx, 2));
    // 0x1ad3b8: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1AD3B8u;
    SET_GPR_U32(ctx, 31, 0x1AD3C0u);
    ctx->pc = 0x1AD3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3B8u;
    // 0x1ad3bc: 0xae3107b0  sw          $s1, 0x7B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1968), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AD3B8u, 0x1AD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3C0u;
label_1ad3c0:
    // 0x1ad3c0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD3C0u;
    SET_GPR_U32(ctx, 31, 0x1AD3C8u);
    ctx->pc = 0x1AD3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3C0u;
    // 0x1ad3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD3C0u, 0x1AD3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3C8u;
}
