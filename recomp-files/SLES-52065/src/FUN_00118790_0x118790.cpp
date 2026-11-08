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

// Function: FUN_00118790
// Address: 0x118790 - 0x11882c
void FUN_00118790_0x118790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118790_0x118790");
#endif

    switch (ctx->pc) {
        case 0x1187acu: goto label_1187ac;
        case 0x1187ccu: goto label_1187cc;
        case 0x1187d4u: goto label_1187d4;
        case 0x1187e4u: goto label_1187e4;
        case 0x1187f0u: goto label_1187f0;
        case 0x118814u: goto label_118814;
        default: break;
    }

    ctx->pc = 0x118790u;

    // 0x118790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118798: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x118798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11879c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1187a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1187a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187a4: 0xc045c98  jal         func_117260
    ctx->pc = 0x1187A4u;
    SET_GPR_U32(ctx, 31, 0x1187ACu);
    ctx->pc = 0x1187A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187A4u;
    // 0x1187a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1187A4u, 0x1187ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187ACu;
label_1187ac:
    // 0x1187ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1187acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1187b0: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x1187b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1187b4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1187b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1187b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1187b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1187bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1187bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1187c0: 0x24428710  addiu       $v0, $v0, -0x78F0
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936336));
    // 0x1187c4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1187C4u;
    SET_GPR_U32(ctx, 31, 0x1187CCu);
    ctx->pc = 0x1187C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187C4u;
    // 0x1187c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1187C4u, 0x1187CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187CCu;
label_1187cc:
    // 0x1187cc: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x1187CCu;
    SET_GPR_U32(ctx, 31, 0x1187D4u);
    ctx->pc = 0x1187D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187CCu;
    // 0x1187d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE00u, 0x1187CCu, 0x1187D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187D4u;
label_1187d4:
    // 0x1187d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1187d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1187d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187dc: 0xc0607f8  jal         func_181FE0
    ctx->pc = 0x1187DCu;
    SET_GPR_U32(ctx, 31, 0x1187E4u);
    ctx->pc = 0x1187E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187DCu;
    // 0x1187e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181FE0u, 0x1187DCu, 0x1187E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187E4u;
label_1187e4:
    // 0x1187e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1187e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1187e8: 0xc054660  jal         func_151980
    ctx->pc = 0x1187E8u;
    SET_GPR_U32(ctx, 31, 0x1187F0u);
    ctx->pc = 0x1187ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187E8u;
    // 0x1187ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1187E8u, 0x1187F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187F0u;
label_1187f0:
    // 0x1187f0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1187f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1187f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1187f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1187f8: 0x24638710  addiu       $v1, $v1, -0x78F0
    ctx->pc = 0x1187f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936336));
    // 0x1187fc: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1187fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x118800: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118804: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x118804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118808: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11880c: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x11880Cu;
    SET_GPR_U32(ctx, 31, 0x118814u);
    ctx->pc = 0x118810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11880Cu;
    // 0x118810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x11880Cu, 0x118814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118814u;
label_118814:
    // 0x118814: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11881c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11881cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118824: 0x3e00008  jr          $ra
    ctx->pc = 0x118824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118824u;
        // 0x118828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11882Cu;
}
