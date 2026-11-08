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

// Function: FUN_001c20d0
// Address: 0x1c20d0 - 0x1c21cc
void FUN_001c20d0_0x1c20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c20d0_0x1c20d0");
#endif

    switch (ctx->pc) {
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c2100u: goto label_1c2100;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2198u: goto label_1c2198;
        default: break;
    }

    ctx->pc = 0x1c20d0u;

    // 0x1c20d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c20d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c20d8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c20dc: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C20DCu;
    SET_GPR_U32(ctx, 31, 0x1C20E4u);
    ctx->pc = 0x1C20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20DCu;
    // 0x1c20e0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C20DCu, 0x1C20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E4u;
label_1c20e4:
    // 0x1c20e4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c20e8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c20ec: 0x2463bb00  addiu       $v1, $v1, -0x4500
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949632));
    // 0x1c20f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c20f4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c20f8: 0xc0745e4  jal         func_1D1790
    ctx->pc = 0x1C20F8u;
    SET_GPR_U32(ctx, 31, 0x1C2100u);
    ctx->pc = 0x1C20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F8u;
    // 0x1c20fc: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1790u, 0x1C20F8u, 0x1C2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2100u;
label_1c2100:
    // 0x1c2100: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2108: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c210c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c210cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c2110: 0x24a519e0  addiu       $a1, $a1, 0x19E0
    ctx->pc = 0x1c2110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6624));
    // 0x1c2114: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c2114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c2118: 0xac430250  sw          $v1, 0x250($v0)
    ctx->pc = 0x1c2118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 3));
    // 0x1c211c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2120: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2120u;
    SET_GPR_U32(ctx, 31, 0x1C2128u);
    ctx->pc = 0x1C2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2120u;
    // 0x1c2124: 0xac430254  sw          $v1, 0x254($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 596), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2120u, 0x1C2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2128u;
label_1c2128:
    // 0x1c2128: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c212c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C212Cu;
    SET_GPR_U32(ctx, 31, 0x1C2134u);
    ctx->pc = 0x1C2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C212Cu;
    // 0x1c2130: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C212Cu, 0x1C2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2134u;
label_1c2134:
    // 0x1c2134: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c2138: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2138u;
    SET_GPR_U32(ctx, 31, 0x1C2140u);
    ctx->pc = 0x1C213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2138u;
    // 0x1c213c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2138u, 0x1C2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2140u;
label_1c2140:
    // 0x1c2140: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2144: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c2144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c2148: 0x24a51a00  addiu       $a1, $a1, 0x1A00
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6656));
    // 0x1c214c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C214Cu;
    SET_GPR_U32(ctx, 31, 0x1C2154u);
    ctx->pc = 0x1C2150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C214Cu;
    // 0x1c2150: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C214Cu, 0x1C2154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2154u;
label_1c2154:
    // 0x1c2154: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2158: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2158u;
    SET_GPR_U32(ctx, 31, 0x1C2160u);
    ctx->pc = 0x1C215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2158u;
    // 0x1c215c: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2158u, 0x1C2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2160u;
label_1c2160:
    // 0x1c2160: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c2160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c2164: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2164u;
    SET_GPR_U32(ctx, 31, 0x1C216Cu);
    ctx->pc = 0x1C2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2164u;
    // 0x1c2168: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2164u, 0x1C216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C216Cu;
label_1c216c:
    // 0x1c216c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c216cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2170: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c2170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c2174: 0x24a51a20  addiu       $a1, $a1, 0x1A20
    ctx->pc = 0x1c2174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6688));
    // 0x1c2178: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2178u;
    SET_GPR_U32(ctx, 31, 0x1C2180u);
    ctx->pc = 0x1C217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2178u;
    // 0x1c217c: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2178u, 0x1C2180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2180u;
label_1c2180:
    // 0x1c2180: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2184: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2184u;
    SET_GPR_U32(ctx, 31, 0x1C218Cu);
    ctx->pc = 0x1C2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2184u;
    // 0x1c2188: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2184u, 0x1C218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C218Cu;
label_1c218c:
    // 0x1c218c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c2190: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2190u;
    SET_GPR_U32(ctx, 31, 0x1C2198u);
    ctx->pc = 0x1C2194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2190u;
    // 0x1c2194: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2190u, 0x1C2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2198u;
label_1c2198:
    // 0x1c2198: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c219c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21a0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1c21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1c21a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c21a8: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x1c21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
    // 0x1c21ac: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c21b0: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1c21b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c21b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c21b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c21bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c21c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21C4u;
        // 0x1c21c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21CCu;
}
