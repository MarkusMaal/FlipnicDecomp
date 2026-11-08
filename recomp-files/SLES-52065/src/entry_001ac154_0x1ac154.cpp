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

// Function: entry_001ac154
// Address: 0x1ac154 - 0x1ac1a8
void entry_001ac154_0x1ac154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac154_0x1ac154");
#endif

    switch (ctx->pc) {
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac1a0u: goto label_1ac1a0;
        default: break;
    }

    ctx->pc = 0x1ac154u;

    // 0x1ac154: 0x0  nop
    ctx->pc = 0x1ac154u;
    // NOP
    // 0x1ac158: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac15c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ac160: 0x1062ffd9  beq         $v1, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC0C8u;
            return;
        }
    }
    ctx->pc = 0x1AC168u;
    // 0x1ac168: 0xc046458  jal         func_119160
    ctx->pc = 0x1AC168u;
    SET_GPR_U32(ctx, 31, 0x1AC170u);
    ctx->pc = 0x1AC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC168u;
    // 0x1ac16c: 0x8f848110  lw          $a0, -0x7EF0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AC168u, 0x1AC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC170u;
label_1ac170:
    // 0x1ac170: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1ac174: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ac174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac178: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ac178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ac17c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1ac180: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac184: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ac188: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ac188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ac18c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac190: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac194: 0xae2206e4  sw          $v0, 0x6E4($s1)
    ctx->pc = 0x1ac194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 2));
    // 0x1ac198: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1AC198u;
    SET_GPR_U32(ctx, 31, 0x1AC1A0u);
    ctx->pc = 0x1AC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC198u;
    // 0x1ac19c: 0xae3107c0  sw          $s1, 0x7C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AC198u, 0x1AC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1A0u;
label_1ac1a0:
    // 0x1ac1a0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC1A0u;
    SET_GPR_U32(ctx, 31, 0x1AC1A8u);
    ctx->pc = 0x1AC1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1A0u;
    // 0x1ac1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC1A0u, 0x1AC1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1A8u;
}
