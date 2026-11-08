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

// Function: entry_0011ce20
// Address: 0x11ce20 - 0x11ced8
void entry_0011ce20_0x11ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ce20_0x11ce20");
#endif

    switch (ctx->pc) {
        case 0x11ce3cu: goto label_11ce3c;
        case 0x11ce48u: goto label_11ce48;
        case 0x11ce50u: goto label_11ce50;
        case 0x11ce58u: goto label_11ce58;
        case 0x11ce74u: goto label_11ce74;
        case 0x11ce88u: goto label_11ce88;
        case 0x11cec8u: goto label_11cec8;
        default: break;
    }

    ctx->pc = 0x11ce20u;

    // 0x11ce20: 0x8e2503e8  lw          $a1, 0x3E8($s1)
    ctx->pc = 0x11ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11ce24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ce24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce28: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11ce2c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x11ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11ce30: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x11ce34: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x11CE34u;
    SET_GPR_U32(ctx, 31, 0x11CE3Cu);
    ctx->pc = 0x11CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE34u;
    // 0x11ce38: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x11CE34u, 0x11CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE3Cu;
label_11ce3c:
    // 0x11ce3c: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11ce40: 0xc074f7a  jal         func_1D3DE8
    ctx->pc = 0x11CE40u;
    SET_GPR_U32(ctx, 31, 0x11CE48u);
    ctx->pc = 0x11CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE40u;
    // 0x11ce44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DE8u, 0x11CE40u, 0x11CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE48u;
label_11ce48:
    // 0x11ce48: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CE48u;
    SET_GPR_U32(ctx, 31, 0x11CE50u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CE48u, 0x11CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE50u;
label_11ce50:
    // 0x11ce50: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11CE50u;
    SET_GPR_U32(ctx, 31, 0x11CE58u);
    ctx->pc = 0x11CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE50u;
    // 0x11ce54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11CE50u, 0x11CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE58u;
label_11ce58:
    // 0x11ce58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11ce60: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11ce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11ce64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ce68u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11ce6c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CE6Cu;
    SET_GPR_U32(ctx, 31, 0x11CE74u);
    ctx->pc = 0x11CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE6Cu;
    // 0x11ce70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CE6Cu, 0x11CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE74u;
label_11ce74:
    // 0x11ce74: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11ce74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce80: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CE80u;
    SET_GPR_U32(ctx, 31, 0x11CE88u);
    ctx->pc = 0x11CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE80u;
    // 0x11ce84: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CE80u, 0x11CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE88u;
label_11ce88:
    // 0x11ce88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ce8c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ce90: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11ce94: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11ce98: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11ce9c: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11cea0: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11cea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11cea4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11cea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11cea8: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11ceac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ceb0: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11ceb0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11ceb4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ceb8: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11ceb8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11cebc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11cebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11cec0: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CEC0u;
    SET_GPR_U32(ctx, 31, 0x11CEC8u);
    ctx->pc = 0x11CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEC0u;
    // 0x11cec4: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CEC0u, 0x11CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEC8u;
label_11cec8:
    // 0x11cec8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CEC8u;
    {
        const bool branch_taken_0x11cec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cec8) {
            ctx->pc = 0x11CED8u;
            return;
        }
    }
    ctx->pc = 0x11CED0u;
    // 0x11ced0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11CED0u;
    SET_GPR_U32(ctx, 31, 0x11CED8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11CED0u, 0x11CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CED8u;
}
