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

// Function: entry_00139668
// Address: 0x139668 - 0x1396e4
void entry_00139668_0x139668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139668_0x139668");
#endif

    switch (ctx->pc) {
        case 0x139670u: goto label_139670;
        case 0x139688u: goto label_139688;
        case 0x139698u: goto label_139698;
        case 0x1396b4u: goto label_1396b4;
        default: break;
    }

    ctx->pc = 0x139668u;

    // 0x139668: 0xc04e5d4  jal         func_139750
    ctx->pc = 0x139668u;
    SET_GPR_U32(ctx, 31, 0x139670u);
    ctx->pc = 0x139750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139750u, 0x139668u, 0x139670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139670u;
label_139670:
    // 0x139670: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x139674: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x139678: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x13967c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x139680: 0xc04e668  jal         func_1399A0
    ctx->pc = 0x139680u;
    SET_GPR_U32(ctx, 31, 0x139688u);
    ctx->pc = 0x139684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139680u;
    // 0x139684: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1399A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1399A0u, 0x139680u, 0x139688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139688u;
label_139688:
    // 0x139688: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13968c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x139690: 0xc04e5ec  jal         func_1397B0
    ctx->pc = 0x139690u;
    SET_GPR_U32(ctx, 31, 0x139698u);
    ctx->pc = 0x139694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139690u;
    // 0x139694: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1397B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1397B0u, 0x139690u, 0x139698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139698u;
label_139698:
    // 0x139698: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13969c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1396a0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1396a4: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1396a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1396a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1396ac: 0xc04e678  jal         func_1399E0
    ctx->pc = 0x1396ACu;
    SET_GPR_U32(ctx, 31, 0x1396B4u);
    ctx->pc = 0x1396B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396ACu;
    // 0x1396b0: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1399E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1399E0u, 0x1396ACu, 0x1396B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396B4u;
label_1396b4:
    // 0x1396b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1396b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1396b8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1396b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1396bc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1396bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1396c0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1396c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1396c4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1396c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1396c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1396c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1396cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1396ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1396d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1396d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1396d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1396d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1396d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1396d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1396dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1396DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1396E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396DCu;
        // 0x1396e0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1396DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1396E4u;
}
