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

// Function: entry_001a305c
// Address: 0x1a305c - 0x1a30d0
void entry_001a305c_0x1a305c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a305c_0x1a305c");
#endif

    switch (ctx->pc) {
        case 0x1a3094u: goto label_1a3094;
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30c4u: goto label_1a30c4;
        default: break;
    }

    ctx->pc = 0x1a305cu;

    // 0x1a305c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a3060: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a3064: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a3064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a3068: 0x24a50460  addiu       $a1, $a1, 0x460
    ctx->pc = 0x1a3068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
    // 0x1a306c: 0x24c60470  addiu       $a2, $a2, 0x470
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1136));
    // 0x1a3070: 0xa04328f5  sb          $v1, 0x28F5($v0)
    ctx->pc = 0x1a3070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10485), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a3074: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a3078: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a307c: 0xaf82862c  sw          $v0, -0x79D4($gp)
    ctx->pc = 0x1a307cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936108), GPR_U32(ctx, 2));
    // 0x1a3080: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
    // 0x1a3084: 0xa220067c  sb          $zero, 0x67C($s1)
    ctx->pc = 0x1a3084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1660), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3088: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a3088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1a308c: 0xc06cf34  jal         func_1B3CD0
    ctx->pc = 0x1A308Cu;
    SET_GPR_U32(ctx, 31, 0x1A3094u);
    ctx->pc = 0x1A3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A308Cu;
    // 0x1a3090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A308Cu, 0x1A3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3094u;
label_1a3094:
    // 0x1a3094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a3094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3098: 0xc0699f0  jal         func_1A67C0
    ctx->pc = 0x1A3098u;
    SET_GPR_U32(ctx, 31, 0x1A30A0u);
    ctx->pc = 0x1A309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3098u;
    // 0x1a309c: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A67C0u, 0x1A3098u, 0x1A30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30A0u;
label_1a30a0:
    // 0x1a30a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1a30a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a30a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a30a8: 0xc0699e0  jal         func_1A6780
    ctx->pc = 0x1A30A8u;
    SET_GPR_U32(ctx, 31, 0x1A30B0u);
    ctx->pc = 0x1A30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30A8u;
    // 0x1a30ac: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x1A30A8u, 0x1A30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30B0u;
label_1a30b0:
    // 0x1a30b0: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a30b4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a30b8: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a30b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a30bc: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A30BCu;
    SET_GPR_U32(ctx, 31, 0x1A30C4u);
    ctx->pc = 0x1A30C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30BCu;
    // 0x1a30c0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A30BCu, 0x1A30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30C4u;
label_1a30c4:
    // 0x1a30c4: 0xae220684  sw          $v0, 0x684($s1)
    ctx->pc = 0x1a30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 2));
    // 0x1a30c8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A30C8u;
    SET_GPR_U32(ctx, 31, 0x1A30D0u);
    ctx->pc = 0x1A30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30C8u;
    // 0x1a30cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A30C8u, 0x1A30D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30D0u;
}
