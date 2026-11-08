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

// Function: entry_0011c938
// Address: 0x11c938 - 0x11c9e4
void entry_0011c938_0x11c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c938_0x11c938");
#endif

    switch (ctx->pc) {
        case 0x11c940u: goto label_11c940;
        case 0x11c94cu: goto label_11c94c;
        case 0x11c954u: goto label_11c954;
        case 0x11c95cu: goto label_11c95c;
        case 0x11c964u: goto label_11c964;
        case 0x11c980u: goto label_11c980;
        case 0x11c994u: goto label_11c994;
        case 0x11c9d4u: goto label_11c9d4;
        default: break;
    }

    ctx->pc = 0x11c938u;

    // 0x11c938: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C938u;
    SET_GPR_U32(ctx, 31, 0x11C940u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C938u, 0x11C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C940u;
label_11c940:
    // 0x11c940: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c944: 0xc046f94  jal         func_11BE50
    ctx->pc = 0x11C944u;
    SET_GPR_U32(ctx, 31, 0x11C94Cu);
    ctx->pc = 0x11C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C944u;
    // 0x11c948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE50u, 0x11C944u, 0x11C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C94Cu;
label_11c94c:
    // 0x11c94c: 0xc047090  jal         func_11C240
    ctx->pc = 0x11C94Cu;
    SET_GPR_U32(ctx, 31, 0x11C954u);
    ctx->pc = 0x11C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C94Cu;
    // 0x11c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C240u, 0x11C94Cu, 0x11C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C954u;
label_11c954:
    // 0x11c954: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C954u;
    SET_GPR_U32(ctx, 31, 0x11C95Cu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C954u, 0x11C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C95Cu;
label_11c95c:
    // 0x11c95c: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11C95Cu;
    SET_GPR_U32(ctx, 31, 0x11C964u);
    ctx->pc = 0x11C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C95Cu;
    // 0x11c960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11C95Cu, 0x11C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C964u;
label_11c964:
    // 0x11c964: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c968: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11c96c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11c970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c974: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c974u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11c978: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C978u;
    SET_GPR_U32(ctx, 31, 0x11C980u);
    ctx->pc = 0x11C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C978u;
    // 0x11c97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C978u, 0x11C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C980u;
label_11c980:
    // 0x11c980: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c98c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C98Cu;
    SET_GPR_U32(ctx, 31, 0x11C994u);
    ctx->pc = 0x11C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C98Cu;
    // 0x11c990: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C98Cu, 0x11C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C994u;
label_11c994:
    // 0x11c994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c998: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c99c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11c9a0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11c9a4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11c9a8: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11c9ac: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11c9b0: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11c9b4: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11c9b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c9bc: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11c9bcu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11c9c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c9c4: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11c9c4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11c9c8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c9cc: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11C9CCu;
    SET_GPR_U32(ctx, 31, 0x11C9D4u);
    ctx->pc = 0x11C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9CCu;
    // 0x11c9d0: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11C9CCu, 0x11C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9D4u;
label_11c9d4:
    // 0x11c9d4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C9D4u;
    {
        const bool branch_taken_0x11c9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9d4) {
            ctx->pc = 0x11C9E4u;
            return;
        }
    }
    ctx->pc = 0x11C9DCu;
    // 0x11c9dc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C9DCu;
    SET_GPR_U32(ctx, 31, 0x11C9E4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C9DCu, 0x11C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9E4u;
}
