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

// Function: FUN_001e6c80
// Address: 0x1e6c80 - 0x1e6eec
void FUN_001e6c80_0x1e6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6c80_0x1e6c80");
#endif

    switch (ctx->pc) {
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d54u: goto label_1e6d54;
        case 0x1e6d70u: goto label_1e6d70;
        case 0x1e6d8cu: goto label_1e6d8c;
        case 0x1e6da8u: goto label_1e6da8;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6de0u: goto label_1e6de0;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e34u: goto label_1e6e34;
        case 0x1e6e50u: goto label_1e6e50;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e88u: goto label_1e6e88;
        case 0x1e6ea4u: goto label_1e6ea4;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6edcu: goto label_1e6edc;
        default: break;
    }

    ctx->pc = 0x1e6c80u;

    // 0x1e6c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6c84: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e6c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6c8c: 0x27878130  addiu       $a3, $gp, -0x7ED0
    ctx->pc = 0x1e6c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934832));
    // 0x1e6c90: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1e6c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1e6c94: 0x2463c2d0  addiu       $v1, $v1, -0x3D30
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951632));
    // 0x1e6c98: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6c9c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1e6ca0: 0x24848850  addiu       $a0, $a0, -0x77B0
    ctx->pc = 0x1e6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936656));
    // 0x1e6ca4: 0x2786812c  addiu       $a2, $gp, -0x7ED4
    ctx->pc = 0x1e6ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934828));
    // 0x1e6ca8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6cac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e6cb0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6cb4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1e6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1e6cb8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6cbc: 0x27858128  addiu       $a1, $gp, -0x7ED8
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934824));
    // 0x1e6cc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e6cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e6cc4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6cc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e6ccc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e6cd0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e6cd4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6cd8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1e6cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1e6cdc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e6ce0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e6ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e6ce4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6ce8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e6ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e6cec: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e6cf0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1e6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1e6cf4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6cf8: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6CF8u;
    SET_GPR_U32(ctx, 31, 0x1E6D00u);
    ctx->pc = 0x1E6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CF8u;
    // 0x1e6cfc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6CF8u, 0x1E6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D00u;
label_1e6d00:
    // 0x1e6d00: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6d04: 0x2787813c  addiu       $a3, $gp, -0x7EC4
    ctx->pc = 0x1e6d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934844));
    // 0x1e6d08: 0x27858134  addiu       $a1, $gp, -0x7ECC
    ctx->pc = 0x1e6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934836));
    // 0x1e6d0c: 0x27868138  addiu       $a2, $gp, -0x7EC8
    ctx->pc = 0x1e6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934840));
    // 0x1e6d10: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d14: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6D14u;
    SET_GPR_U32(ctx, 31, 0x1E6D1Cu);
    ctx->pc = 0x1E6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D14u;
    // 0x1e6d18: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6D14u, 0x1E6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D1Cu;
label_1e6d1c:
    // 0x1e6d1c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6d20: 0x27878148  addiu       $a3, $gp, -0x7EB8
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934856));
    // 0x1e6d24: 0x27858140  addiu       $a1, $gp, -0x7EC0
    ctx->pc = 0x1e6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934848));
    // 0x1e6d28: 0x27868144  addiu       $a2, $gp, -0x7EBC
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934852));
    // 0x1e6d2c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d30: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6D30u;
    SET_GPR_U32(ctx, 31, 0x1E6D38u);
    ctx->pc = 0x1E6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D30u;
    // 0x1e6d34: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6D30u, 0x1E6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D38u;
label_1e6d38:
    // 0x1e6d38: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6d3c: 0x2785814c  addiu       $a1, $gp, -0x7EB4
    ctx->pc = 0x1e6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934860));
    // 0x1e6d40: 0x27878150  addiu       $a3, $gp, -0x7EB0
    ctx->pc = 0x1e6d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934864));
    // 0x1e6d44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e6d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d48: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d4c: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D54u);
    ctx->pc = 0x1E6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D4Cu;
    // 0x1e6d50: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6D4Cu, 0x1E6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D54u;
label_1e6d54:
    // 0x1e6d54: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6d58: 0x2787815c  addiu       $a3, $gp, -0x7EA4
    ctx->pc = 0x1e6d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934876));
    // 0x1e6d5c: 0x27858154  addiu       $a1, $gp, -0x7EAC
    ctx->pc = 0x1e6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934868));
    // 0x1e6d60: 0x27868158  addiu       $a2, $gp, -0x7EA8
    ctx->pc = 0x1e6d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934872));
    // 0x1e6d64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d68: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6D68u;
    SET_GPR_U32(ctx, 31, 0x1E6D70u);
    ctx->pc = 0x1E6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D68u;
    // 0x1e6d6c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6D68u, 0x1E6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D70u;
label_1e6d70:
    // 0x1e6d70: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6d74: 0x27878168  addiu       $a3, $gp, -0x7E98
    ctx->pc = 0x1e6d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934888));
    // 0x1e6d78: 0x27858160  addiu       $a1, $gp, -0x7EA0
    ctx->pc = 0x1e6d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934880));
    // 0x1e6d7c: 0x27868164  addiu       $a2, $gp, -0x7E9C
    ctx->pc = 0x1e6d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934884));
    // 0x1e6d80: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d84: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6D84u;
    SET_GPR_U32(ctx, 31, 0x1E6D8Cu);
    ctx->pc = 0x1E6D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D84u;
    // 0x1e6d88: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6D84u, 0x1E6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D8Cu;
label_1e6d8c:
    // 0x1e6d8c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6d90: 0x27878174  addiu       $a3, $gp, -0x7E8C
    ctx->pc = 0x1e6d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934900));
    // 0x1e6d94: 0x2785816c  addiu       $a1, $gp, -0x7E94
    ctx->pc = 0x1e6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934892));
    // 0x1e6d98: 0x27868170  addiu       $a2, $gp, -0x7E90
    ctx->pc = 0x1e6d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934896));
    // 0x1e6d9c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6da0: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6DA0u;
    SET_GPR_U32(ctx, 31, 0x1E6DA8u);
    ctx->pc = 0x1E6DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DA0u;
    // 0x1e6da4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6DA0u, 0x1E6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DA8u;
label_1e6da8:
    // 0x1e6da8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6dac: 0x27878180  addiu       $a3, $gp, -0x7E80
    ctx->pc = 0x1e6dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934912));
    // 0x1e6db0: 0x27858178  addiu       $a1, $gp, -0x7E88
    ctx->pc = 0x1e6db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934904));
    // 0x1e6db4: 0x2786817c  addiu       $a2, $gp, -0x7E84
    ctx->pc = 0x1e6db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934908));
    // 0x1e6db8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6dbc: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6DBCu;
    SET_GPR_U32(ctx, 31, 0x1E6DC4u);
    ctx->pc = 0x1E6DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DBCu;
    // 0x1e6dc0: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6DBCu, 0x1E6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DC4u;
label_1e6dc4:
    // 0x1e6dc4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6dc8: 0x2787818c  addiu       $a3, $gp, -0x7E74
    ctx->pc = 0x1e6dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934924));
    // 0x1e6dcc: 0x27858184  addiu       $a1, $gp, -0x7E7C
    ctx->pc = 0x1e6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934916));
    // 0x1e6dd0: 0x27868188  addiu       $a2, $gp, -0x7E78
    ctx->pc = 0x1e6dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
    // 0x1e6dd4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6dd8: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6DD8u;
    SET_GPR_U32(ctx, 31, 0x1E6DE0u);
    ctx->pc = 0x1E6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DD8u;
    // 0x1e6ddc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6DD8u, 0x1E6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DE0u;
label_1e6de0:
    // 0x1e6de0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6de4: 0x27878198  addiu       $a3, $gp, -0x7E68
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
    // 0x1e6de8: 0x27858190  addiu       $a1, $gp, -0x7E70
    ctx->pc = 0x1e6de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
    // 0x1e6dec: 0x27868194  addiu       $a2, $gp, -0x7E6C
    ctx->pc = 0x1e6decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934932));
    // 0x1e6df0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6df0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6df4: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6DF4u;
    SET_GPR_U32(ctx, 31, 0x1E6DFCu);
    ctx->pc = 0x1E6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DF4u;
    // 0x1e6df8: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6DF4u, 0x1E6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DFCu;
label_1e6dfc:
    // 0x1e6dfc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6e00: 0x278781a4  addiu       $a3, $gp, -0x7E5C
    ctx->pc = 0x1e6e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934948));
    // 0x1e6e04: 0x2785819c  addiu       $a1, $gp, -0x7E64
    ctx->pc = 0x1e6e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934940));
    // 0x1e6e08: 0x278681a0  addiu       $a2, $gp, -0x7E60
    ctx->pc = 0x1e6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934944));
    // 0x1e6e0c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e10: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6E10u;
    SET_GPR_U32(ctx, 31, 0x1E6E18u);
    ctx->pc = 0x1E6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E10u;
    // 0x1e6e14: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6E10u, 0x1E6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E18u;
label_1e6e18:
    // 0x1e6e18: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6e1c: 0x278781b0  addiu       $a3, $gp, -0x7E50
    ctx->pc = 0x1e6e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934960));
    // 0x1e6e20: 0x278581a8  addiu       $a1, $gp, -0x7E58
    ctx->pc = 0x1e6e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934952));
    // 0x1e6e24: 0x278681ac  addiu       $a2, $gp, -0x7E54
    ctx->pc = 0x1e6e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934956));
    // 0x1e6e28: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e2c: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E6E34u);
    ctx->pc = 0x1E6E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E2Cu;
    // 0x1e6e30: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6E2Cu, 0x1E6E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E34u;
label_1e6e34:
    // 0x1e6e34: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6e38: 0x278781bc  addiu       $a3, $gp, -0x7E44
    ctx->pc = 0x1e6e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934972));
    // 0x1e6e3c: 0x278581b4  addiu       $a1, $gp, -0x7E4C
    ctx->pc = 0x1e6e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934964));
    // 0x1e6e40: 0x278681b8  addiu       $a2, $gp, -0x7E48
    ctx->pc = 0x1e6e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934968));
    // 0x1e6e44: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e48: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6E48u;
    SET_GPR_U32(ctx, 31, 0x1E6E50u);
    ctx->pc = 0x1E6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E48u;
    // 0x1e6e4c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6E48u, 0x1E6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E50u;
label_1e6e50:
    // 0x1e6e50: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6e54: 0x278581c0  addiu       $a1, $gp, -0x7E40
    ctx->pc = 0x1e6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934976));
    // 0x1e6e58: 0x278781c4  addiu       $a3, $gp, -0x7E3C
    ctx->pc = 0x1e6e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934980));
    // 0x1e6e5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e6e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e60: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e6e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e64: 0xc079d28  jal         func_1E74A0
    ctx->pc = 0x1E6E64u;
    SET_GPR_U32(ctx, 31, 0x1E6E6Cu);
    ctx->pc = 0x1E6E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E64u;
    // 0x1e6e68: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74A0u, 0x1E6E64u, 0x1E6E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E6Cu;
label_1e6e6c:
    // 0x1e6e6c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6e70: 0x278581c8  addiu       $a1, $gp, -0x7E38
    ctx->pc = 0x1e6e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
    // 0x1e6e74: 0x278681cc  addiu       $a2, $gp, -0x7E34
    ctx->pc = 0x1e6e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934988));
    // 0x1e6e78: 0x278781d0  addiu       $a3, $gp, -0x7E30
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x1e6e7c: 0x278881d4  addiu       $t0, $gp, -0x7E2C
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934996));
    // 0x1e6e80: 0xc079da4  jal         func_1E7690
    ctx->pc = 0x1E6E80u;
    SET_GPR_U32(ctx, 31, 0x1E6E88u);
    ctx->pc = 0x1E6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E80u;
    // 0x1e6e84: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7690u, 0x1E6E80u, 0x1E6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E88u;
label_1e6e88:
    // 0x1e6e88: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6e8c: 0x278581d8  addiu       $a1, $gp, -0x7E28
    ctx->pc = 0x1e6e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935000));
    // 0x1e6e90: 0x278681dc  addiu       $a2, $gp, -0x7E24
    ctx->pc = 0x1e6e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935004));
    // 0x1e6e94: 0x278781e0  addiu       $a3, $gp, -0x7E20
    ctx->pc = 0x1e6e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935008));
    // 0x1e6e98: 0x278881e4  addiu       $t0, $gp, -0x7E1C
    ctx->pc = 0x1e6e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935012));
    // 0x1e6e9c: 0xc079da4  jal         func_1E7690
    ctx->pc = 0x1E6E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E6EA4u);
    ctx->pc = 0x1E6EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E9Cu;
    // 0x1e6ea0: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7690u, 0x1E6E9Cu, 0x1E6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EA4u;
label_1e6ea4:
    // 0x1e6ea4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6ea8: 0x278581e8  addiu       $a1, $gp, -0x7E18
    ctx->pc = 0x1e6ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
    // 0x1e6eac: 0x278681ec  addiu       $a2, $gp, -0x7E14
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935020));
    // 0x1e6eb0: 0x278781f0  addiu       $a3, $gp, -0x7E10
    ctx->pc = 0x1e6eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935024));
    // 0x1e6eb4: 0x278881f4  addiu       $t0, $gp, -0x7E0C
    ctx->pc = 0x1e6eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935028));
    // 0x1e6eb8: 0xc079da4  jal         func_1E7690
    ctx->pc = 0x1E6EB8u;
    SET_GPR_U32(ctx, 31, 0x1E6EC0u);
    ctx->pc = 0x1E6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EB8u;
    // 0x1e6ebc: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7690u, 0x1E6EB8u, 0x1E6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EC0u;
label_1e6ec0:
    // 0x1e6ec0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6ec4: 0x278581f8  addiu       $a1, $gp, -0x7E08
    ctx->pc = 0x1e6ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935032));
    // 0x1e6ec8: 0x278681fc  addiu       $a2, $gp, -0x7E04
    ctx->pc = 0x1e6ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935036));
    // 0x1e6ecc: 0x27878200  addiu       $a3, $gp, -0x7E00
    ctx->pc = 0x1e6eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935040));
    // 0x1e6ed0: 0x27888204  addiu       $t0, $gp, -0x7DFC
    ctx->pc = 0x1e6ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935044));
    // 0x1e6ed4: 0xc079da4  jal         func_1E7690
    ctx->pc = 0x1E6ED4u;
    SET_GPR_U32(ctx, 31, 0x1E6EDCu);
    ctx->pc = 0x1E6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6ED4u;
    // 0x1e6ed8: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7690u, 0x1E6ED4u, 0x1E6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EDCu;
label_1e6edc:
    // 0x1e6edc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e6ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EE4u;
        // 0x1e6ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6EECu;
}
