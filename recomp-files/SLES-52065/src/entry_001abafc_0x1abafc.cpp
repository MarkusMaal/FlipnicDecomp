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

// Function: entry_001abafc
// Address: 0x1abafc - 0x1abb7c
void entry_001abafc_0x1abafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abafc_0x1abafc");
#endif

    switch (ctx->pc) {
        case 0x1abb04u: goto label_1abb04;
        case 0x1abb10u: goto label_1abb10;
        case 0x1abb28u: goto label_1abb28;
        case 0x1abb38u: goto label_1abb38;
        case 0x1abb58u: goto label_1abb58;
        case 0x1abb70u: goto label_1abb70;
        default: break;
    }

    ctx->pc = 0x1abafcu;

    // 0x1abafc: 0xc055c40  jal         func_157100
    ctx->pc = 0x1ABAFCu;
    SET_GPR_U32(ctx, 31, 0x1ABB04u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1ABAFCu, 0x1ABB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB04u;
label_1abb04:
    // 0x1abb04: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb08: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1ABB08u;
    SET_GPR_U32(ctx, 31, 0x1ABB10u);
    ctx->pc = 0x1ABB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB08u;
    // 0x1abb0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1ABB08u, 0x1ABB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB10u;
label_1abb10:
    // 0x1abb10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1abb10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb14: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1abb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1abb18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1abb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1abb1c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb20: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1ABB20u;
    SET_GPR_U32(ctx, 31, 0x1ABB28u);
    ctx->pc = 0x1ABB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB20u;
    // 0x1abb24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1ABB20u, 0x1ABB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB28u;
label_1abb28:
    // 0x1abb28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1abb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1abb2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb30: 0xc062858  jal         func_18A160
    ctx->pc = 0x1ABB30u;
    SET_GPR_U32(ctx, 31, 0x1ABB38u);
    ctx->pc = 0x1ABB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB30u;
    // 0x1abb34: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1ABB30u, 0x1ABB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB38u;
label_1abb38:
    // 0x1abb38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1abb3c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb44: 0x0  nop
    ctx->pc = 0x1abb44u;
    // NOP
    // 0x1abb48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1abb48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1abb4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1abb4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1abb50: 0xc062860  jal         func_18A180
    ctx->pc = 0x1ABB50u;
    SET_GPR_U32(ctx, 31, 0x1ABB58u);
    ctx->pc = 0x1ABB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB50u;
    // 0x1abb54: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1ABB50u, 0x1ABB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB58u;
label_1abb58:
    // 0x1abb58: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1abb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1abb5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1abb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1abb60: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x1abb60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1abb64: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abb68: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1ABB68u;
    SET_GPR_U32(ctx, 31, 0x1ABB70u);
    ctx->pc = 0x1ABB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB68u;
    // 0x1abb6c: 0x24a50920  addiu       $a1, $a1, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1ABB68u, 0x1ABB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB70u;
label_1abb70:
    // 0x1abb70: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb74: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1ABB74u;
    SET_GPR_U32(ctx, 31, 0x1ABB7Cu);
    ctx->pc = 0x1ABB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB74u;
    // 0x1abb78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1ABB74u, 0x1ABB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB7Cu;
}
