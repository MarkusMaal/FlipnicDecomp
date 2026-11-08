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

// Function: entry_001993e0
// Address: 0x1993e0 - 0x1994e4
void entry_001993e0_0x1993e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001993e0_0x1993e0");
#endif

    switch (ctx->pc) {
        case 0x199400u: goto label_199400;
        case 0x19940cu: goto label_19940c;
        case 0x199414u: goto label_199414;
        case 0x199434u: goto label_199434;
        case 0x19943cu: goto label_19943c;
        case 0x199454u: goto label_199454;
        case 0x19946cu: goto label_19946c;
        case 0x199488u: goto label_199488;
        case 0x1994a0u: goto label_1994a0;
        case 0x1994bcu: goto label_1994bc;
        default: break;
    }

    ctx->pc = 0x1993e0u;

    // 0x1993e0: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1993e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1993e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1993e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993e8: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1993ec: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1993ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1993f0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1993f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1993f8: 0xc0649c8  jal         func_192720
    ctx->pc = 0x1993F8u;
    SET_GPR_U32(ctx, 31, 0x199400u);
    ctx->pc = 0x1993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993F8u;
    // 0x1993fc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192720u, 0x1993F8u, 0x199400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199400u;
label_199400:
    // 0x199400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199404: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x199404u;
    SET_GPR_U32(ctx, 31, 0x19940Cu);
    ctx->pc = 0x199408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199404u;
    // 0x199408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x199404u, 0x19940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19940Cu;
label_19940c:
    // 0x19940c: 0xc0649c8  jal         func_192720
    ctx->pc = 0x19940Cu;
    SET_GPR_U32(ctx, 31, 0x199414u);
    ctx->pc = 0x199410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19940Cu;
    // 0x199410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192720u, 0x19940Cu, 0x199414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199414u;
label_199414:
    // 0x199414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19941c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199420: 0x0  nop
    ctx->pc = 0x199420u;
    // NOP
    // 0x199424: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x199424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x199428: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x199428u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x19942c: 0xc062860  jal         func_18A180
    ctx->pc = 0x19942Cu;
    SET_GPR_U32(ctx, 31, 0x199434u);
    ctx->pc = 0x199430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19942Cu;
    // 0x199430: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x19942Cu, 0x199434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199434u;
label_199434:
    // 0x199434: 0xc0649c8  jal         func_192720
    ctx->pc = 0x199434u;
    SET_GPR_U32(ctx, 31, 0x19943Cu);
    ctx->pc = 0x199438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199434u;
    // 0x199438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192720u, 0x199434u, 0x19943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19943Cu;
label_19943c:
    // 0x19943c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199440: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x199444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x199444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199448: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19944c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x19944Cu;
    SET_GPR_U32(ctx, 31, 0x199454u);
    ctx->pc = 0x199450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19944Cu;
    // 0x199450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x19944Cu, 0x199454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199454u;
label_199454:
    // 0x199454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199458: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x199458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x19945c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19945cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199464: 0xc0657e0  jal         func_195F80
    ctx->pc = 0x199464u;
    SET_GPR_U32(ctx, 31, 0x19946Cu);
    ctx->pc = 0x199468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199464u;
    // 0x199468: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195F80u, 0x199464u, 0x19946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19946Cu;
label_19946c:
    // 0x19946c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19946cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x199470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199474: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x199478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19947c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19947cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199480: 0xc065834  jal         func_1960D0
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 31, 0x199488u);
    ctx->pc = 0x199484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199480u;
    // 0x199484: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x199480u, 0x199488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199488u;
label_199488:
    // 0x199488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19948c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x19948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x199490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199498: 0xc0657e0  jal         func_195F80
    ctx->pc = 0x199498u;
    SET_GPR_U32(ctx, 31, 0x1994A0u);
    ctx->pc = 0x19949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199498u;
    // 0x19949c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195F80u, 0x199498u, 0x1994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994A0u;
label_1994a0:
    // 0x1994a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1994a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1994a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1994a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994a8: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x1994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x1994ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1994acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1994b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994b4: 0xc065834  jal         func_1960D0
    ctx->pc = 0x1994B4u;
    SET_GPR_U32(ctx, 31, 0x1994BCu);
    ctx->pc = 0x1994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994B4u;
    // 0x1994b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x1994B4u, 0x1994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994BCu;
label_1994bc:
    // 0x1994bc: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1994c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1994c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1994c4: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1994C4u;
    {
        const bool branch_taken_0x1994c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1994c4) {
            ctx->pc = 0x1994E4u;
            return;
        }
    }
    ctx->pc = 0x1994CCu;
    // 0x1994cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1994ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1994d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1994d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994d4: 0x24a50108  addiu       $a1, $a1, 0x108
    ctx->pc = 0x1994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
    // 0x1994d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1994d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994dc: 0xc065834  jal         func_1960D0
    ctx->pc = 0x1994DCu;
    SET_GPR_U32(ctx, 31, 0x1994E4u);
    ctx->pc = 0x1994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994DCu;
    // 0x1994e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x1994DCu, 0x1994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994E4u;
}
