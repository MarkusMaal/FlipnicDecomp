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

// Function: entry_001ce3a4
// Address: 0x1ce3a4 - 0x1ce404
void entry_001ce3a4_0x1ce3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce3a4_0x1ce3a4");
#endif

    switch (ctx->pc) {
        case 0x1ce3dcu: goto label_1ce3dc;
        default: break;
    }

    ctx->pc = 0x1ce3a4u;

    // 0x1ce3a4: 0x0  nop
    ctx->pc = 0x1ce3a4u;
    // NOP
    // 0x1ce3a8: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce3ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1ce3b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce3b4: 0x24632cd0  addiu       $v1, $v1, 0x2CD0
    ctx->pc = 0x1ce3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11472));
    // 0x1ce3b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ce3bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce3c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ce3c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ce3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce3c8: 0x14c2fff0  bne         $a2, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CE3C8u;
    {
        const bool branch_taken_0x1ce3c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3C8u;
        // 0x1ce3cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3c8) {
            ctx->pc = 0x1CE38Cu;
            return;
        }
    }
    ctx->pc = 0x1CE3D0u;
    // 0x1ce3d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3d4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE3D4u;
    SET_GPR_U32(ctx, 31, 0x1CE3DCu);
    ctx->pc = 0x1CE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3D4u;
    // 0x1ce3d8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE3D4u, 0x1CE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3DCu;
label_1ce3dc:
    // 0x1ce3dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE3DCu;
    {
        const bool branch_taken_0x1ce3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3DCu;
        // 0x1ce3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3dc) {
            ctx->pc = 0x1CE404u;
            return;
        }
    }
    ctx->pc = 0x1CE3E4u;
    // 0x1ce3e4: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x1ce3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1ce3e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce3ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ce3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ce3f0: 0xa2a2006c  sb          $v0, 0x6C($s5)
    ctx->pc = 0x1ce3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce3f4: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x1ce3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1ce3f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce3fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ce3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ce400: 0xa2a20040  sb          $v0, 0x40($s5)
    ctx->pc = 0x1ce400u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 64), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ce404u;
}
