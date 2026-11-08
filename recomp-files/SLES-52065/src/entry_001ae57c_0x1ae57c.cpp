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

// Function: entry_001ae57c
// Address: 0x1ae57c - 0x1ae5d0
void entry_001ae57c_0x1ae57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae57c_0x1ae57c");
#endif

    switch (ctx->pc) {
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae5c8u: goto label_1ae5c8;
        default: break;
    }

    ctx->pc = 0x1ae57cu;

    // 0x1ae57c: 0x0  nop
    ctx->pc = 0x1ae57cu;
    // NOP
    // 0x1ae580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae584: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ae588: 0x1062ffc7  beq         $v1, $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1AE588u;
    {
        const bool branch_taken_0x1ae588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae588) {
            ctx->pc = 0x1AE4A8u;
            return;
        }
    }
    ctx->pc = 0x1AE590u;
    // 0x1ae590: 0xc046458  jal         func_119160
    ctx->pc = 0x1AE590u;
    SET_GPR_U32(ctx, 31, 0x1AE598u);
    ctx->pc = 0x1AE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE590u;
    // 0x1ae594: 0x8f848120  lw          $a0, -0x7EE0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AE590u, 0x1AE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE598u;
label_1ae598:
    // 0x1ae598: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1ae598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1ae59c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ae59cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ae5a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ae5a4: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    // 0x1ae5a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ae5ac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ae5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ae5b0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ae5b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ae5b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae5bc: 0xae8206c4  sw          $v0, 0x6C4($s4)
    ctx->pc = 0x1ae5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1732), GPR_U32(ctx, 2));
    // 0x1ae5c0: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1AE5C0u;
    SET_GPR_U32(ctx, 31, 0x1AE5C8u);
    ctx->pc = 0x1AE5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5C0u;
    // 0x1ae5c4: 0xae9407a0  sw          $s4, 0x7A0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AE5C0u, 0x1AE5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5C8u;
label_1ae5c8:
    // 0x1ae5c8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE5C8u;
    SET_GPR_U32(ctx, 31, 0x1AE5D0u);
    ctx->pc = 0x1AE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5C8u;
    // 0x1ae5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE5C8u, 0x1AE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5D0u;
}
