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

// Function: entry_0011cac8
// Address: 0x11cac8 - 0x11cb60
void entry_0011cac8_0x11cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cac8_0x11cac8");
#endif

    switch (ctx->pc) {
        case 0x11cad0u: goto label_11cad0;
        case 0x11cad8u: goto label_11cad8;
        case 0x11cae0u: goto label_11cae0;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb50u: goto label_11cb50;
        default: break;
    }

    ctx->pc = 0x11cac8u;

    // 0x11cac8: 0xc046fe8  jal         func_11BFA0
    ctx->pc = 0x11CAC8u;
    SET_GPR_U32(ctx, 31, 0x11CAD0u);
    ctx->pc = 0x11CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAC8u;
    // 0x11cacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFA0u, 0x11CAC8u, 0x11CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAD0u;
label_11cad0:
    // 0x11cad0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CAD0u;
    SET_GPR_U32(ctx, 31, 0x11CAD8u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CAD0u, 0x11CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAD8u;
label_11cad8:
    // 0x11cad8: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11CAD8u;
    SET_GPR_U32(ctx, 31, 0x11CAE0u);
    ctx->pc = 0x11CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAD8u;
    // 0x11cadc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11CAD8u, 0x11CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAE0u;
label_11cae0:
    // 0x11cae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11cae4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11cae8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11cae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11caec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11caf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11caf0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11caf4: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CAF4u;
    SET_GPR_U32(ctx, 31, 0x11CAFCu);
    ctx->pc = 0x11CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAF4u;
    // 0x11caf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CAF4u, 0x11CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAFCu;
label_11cafc:
    // 0x11cafc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11cb00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb08: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CB08u;
    SET_GPR_U32(ctx, 31, 0x11CB10u);
    ctx->pc = 0x11CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB08u;
    // 0x11cb0c: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CB08u, 0x11CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB10u;
label_11cb10:
    // 0x11cb10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cb14: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11cb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11cb18: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11cb1c: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11cb20: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11cb24: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11cb28: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11cb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11cb2c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11cb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11cb30: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11cb34: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11cb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11cb38: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11cb38u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11cb3c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11cb40: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11cb40u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11cb44: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11cb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11cb48: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CB48u;
    SET_GPR_U32(ctx, 31, 0x11CB50u);
    ctx->pc = 0x11CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB48u;
    // 0x11cb4c: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CB48u, 0x11CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB50u;
label_11cb50:
    // 0x11cb50: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CB50u;
    {
        const bool branch_taken_0x11cb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb50) {
            ctx->pc = 0x11CB60u;
            return;
        }
    }
    ctx->pc = 0x11CB58u;
    // 0x11cb58: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11CB58u;
    SET_GPR_U32(ctx, 31, 0x11CB60u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11CB58u, 0x11CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB60u;
}
