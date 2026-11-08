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

// Function: entry_001aaf44
// Address: 0x1aaf44 - 0x1aaf98
void entry_001aaf44_0x1aaf44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf44_0x1aaf44");
#endif

    switch (ctx->pc) {
        case 0x1aaf60u: goto label_1aaf60;
        case 0x1aaf90u: goto label_1aaf90;
        default: break;
    }

    ctx->pc = 0x1aaf44u;

    // 0x1aaf44: 0x0  nop
    ctx->pc = 0x1aaf44u;
    // NOP
    // 0x1aaf48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aaf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aaf4c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aaf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aaf50: 0x1062ffcd  beq         $v1, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1AAF50u;
    {
        const bool branch_taken_0x1aaf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaf50) {
            ctx->pc = 0x1AAE88u;
            return;
        }
    }
    ctx->pc = 0x1AAF58u;
    // 0x1aaf58: 0xc046458  jal         func_119160
    ctx->pc = 0x1AAF58u;
    SET_GPR_U32(ctx, 31, 0x1AAF60u);
    ctx->pc = 0x1AAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF58u;
    // 0x1aaf5c: 0x8f848108  lw          $a0, -0x7EF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AAF58u, 0x1AAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF60u;
label_1aaf60:
    // 0x1aaf60: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1aaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1aaf64: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aaf68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1aaf6c: 0x26840710  addiu       $a0, $s4, 0x710
    ctx->pc = 0x1aaf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    // 0x1aaf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aaf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aaf74: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1aaf78: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1aaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1aaf7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1aaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aaf80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaf84: 0xae8206e4  sw          $v0, 0x6E4($s4)
    ctx->pc = 0x1aaf84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1764), GPR_U32(ctx, 2));
    // 0x1aaf88: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1AAF88u;
    SET_GPR_U32(ctx, 31, 0x1AAF90u);
    ctx->pc = 0x1AAF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF88u;
    // 0x1aaf8c: 0xae9407c0  sw          $s4, 0x7C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1984), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AAF88u, 0x1AAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF90u;
label_1aaf90:
    // 0x1aaf90: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AAF90u;
    SET_GPR_U32(ctx, 31, 0x1AAF98u);
    ctx->pc = 0x1AAF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF90u;
    // 0x1aaf94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AAF90u, 0x1AAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF98u;
}
