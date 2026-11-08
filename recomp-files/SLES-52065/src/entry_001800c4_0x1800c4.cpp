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

// Function: entry_001800c4
// Address: 0x1800c4 - 0x180150
void entry_001800c4_0x1800c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001800c4_0x1800c4");
#endif

    switch (ctx->pc) {
        case 0x1800d0u: goto label_1800d0;
        case 0x1800e4u: goto label_1800e4;
        case 0x180128u: goto label_180128;
        default: break;
    }

    ctx->pc = 0x1800c4u;

    // 0x1800c4: 0xaf828660  sw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 2));
    // 0x1800c8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1800C8u;
    SET_GPR_U32(ctx, 31, 0x1800D0u);
    ctx->pc = 0x1800CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800C8u;
    // 0x1800cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1800C8u, 0x1800D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800D0u;
label_1800d0:
    // 0x1800d0: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1800d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1800d8: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x1800dc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1800DCu;
    SET_GPR_U32(ctx, 31, 0x1800E4u);
    ctx->pc = 0x1800E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800DCu;
    // 0x1800e0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1800DCu, 0x1800E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800E4u;
label_1800e4:
    // 0x1800e4: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800e8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1800ec: 0xac520040  sw          $s2, 0x40($v0)
    ctx->pc = 0x1800ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 18));
    // 0x1800f0: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800f4: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1800f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1800f8: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800fc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1800fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x180100: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180104: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x180104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x180108: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x18010c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x18010cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x180110: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180114: 0xac510060  sw          $s1, 0x60($v0)
    ctx->pc = 0x180114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 17));
    // 0x180118: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x18011c: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x18011cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    // 0x180120: 0xc060064  jal         func_180190
    ctx->pc = 0x180120u;
    SET_GPR_U32(ctx, 31, 0x180128u);
    ctx->pc = 0x180124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180120u;
    // 0x180124: 0x8f848660  lw          $a0, -0x79A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x180120u, 0x180128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180128u;
label_180128:
    // 0x180128: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x180128u;
    {
        const bool branch_taken_0x180128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180128) {
            ctx->pc = 0x180164u;
            return;
        }
    }
    ctx->pc = 0x180130u;
    // 0x180130: 0x8f908660  lw          $s0, -0x79A0($gp)
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180134: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180134u;
    {
        const bool branch_taken_0x180134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x180134) {
            ctx->pc = 0x180158u;
            return;
        }
    }
    ctx->pc = 0x18013Cu;
    // 0x18013c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x18013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x180140: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180140u;
    {
        const bool branch_taken_0x180140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x180140) {
            ctx->pc = 0x180150u;
            return;
        }
    }
    ctx->pc = 0x180148u;
    // 0x180148: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x180148u;
    SET_GPR_U32(ctx, 31, 0x180150u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x180148u, 0x180150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180150u;
}
