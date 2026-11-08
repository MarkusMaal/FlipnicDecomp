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

// Function: entry_0015cf78
// Address: 0x15cf78 - 0x15cfb4
void entry_0015cf78_0x15cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cf78_0x15cf78");
#endif

    switch (ctx->pc) {
        case 0x15cf94u: goto label_15cf94;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15cfa4u: goto label_15cfa4;
        case 0x15cfacu: goto label_15cfac;
        default: break;
    }

    ctx->pc = 0x15cf78u;

    // 0x15cf78: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x15cf78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x15cf7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15cf80: 0x86630228  lh          $v1, 0x228($s3)
    ctx->pc = 0x15cf80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 552)));
    // 0x15cf84: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15CF84u;
    {
        const bool branch_taken_0x15cf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF84u;
        // 0x15cf88: 0x26740040  addiu       $s4, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf84) {
            ctx->pc = 0x15CFB4u;
            return;
        }
    }
    ctx->pc = 0x15CF8Cu;
    // 0x15cf8c: 0xc055dd8  jal         func_157760
    ctx->pc = 0x15CF8Cu;
    SET_GPR_U32(ctx, 31, 0x15CF94u);
    ctx->pc = 0x15CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF8Cu;
    // 0x15cf90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x15CF8Cu, 0x15CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF94u;
label_15cf94:
    // 0x15cf94: 0xc0562bc  jal         func_158AF0
    ctx->pc = 0x15CF94u;
    SET_GPR_U32(ctx, 31, 0x15CF9Cu);
    ctx->pc = 0x15CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF94u;
    // 0x15cf98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AF0u, 0x15CF94u, 0x15CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF9Cu;
label_15cf9c:
    // 0x15cf9c: 0xc055d98  jal         func_157660
    ctx->pc = 0x15CF9Cu;
    SET_GPR_U32(ctx, 31, 0x15CFA4u);
    ctx->pc = 0x15CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF9Cu;
    // 0x15cfa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157660u, 0x15CF9Cu, 0x15CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFA4u;
label_15cfa4:
    // 0x15cfa4: 0xc056250  jal         func_158940
    ctx->pc = 0x15CFA4u;
    SET_GPR_U32(ctx, 31, 0x15CFACu);
    ctx->pc = 0x15CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFA4u;
    // 0x15cfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158940u, 0x15CFA4u, 0x15CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFACu;
label_15cfac:
    // 0x15cfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cfb0: 0xa26200ab  sb          $v0, 0xAB($s3)
    ctx->pc = 0x15cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 171), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15cfb4u;
}
