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

// Function: entry_001c12a0
// Address: 0x1c12a0 - 0x1c1308
void entry_001c12a0_0x1c12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c12a0_0x1c12a0");
#endif

    switch (ctx->pc) {
        case 0x1c12c4u: goto label_1c12c4;
        case 0x1c12dcu: goto label_1c12dc;
        case 0x1c12ecu: goto label_1c12ec;
        case 0x1c1300u: goto label_1c1300;
        default: break;
    }

    ctx->pc = 0x1c12a0u;

    // 0x1c12a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c12a4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c12a8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1c12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1c12ac: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1c12acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1c12b0: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1c12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c12b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1c12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1c12b8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x1c12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x1c12bc: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C12BCu;
    SET_GPR_U32(ctx, 31, 0x1C12C4u);
    ctx->pc = 0x1C12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12BCu;
    // 0x1c12c0: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C12BCu, 0x1C12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12C4u;
label_1c12c4:
    // 0x1c12c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c12c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c12c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c12cc: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C12CCu;
    {
        const bool branch_taken_0x1c12cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12CCu;
        // 0x1c12d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12cc) {
            ctx->pc = 0x1C133Cu;
            return;
        }
    }
    ctx->pc = 0x1C12D4u;
    // 0x1c12d4: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1C12D4u;
    SET_GPR_U32(ctx, 31, 0x1C12DCu);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1C12D4u, 0x1C12DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12DCu;
label_1c12dc:
    // 0x1c12dc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c12e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e4: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1C12E4u;
    SET_GPR_U32(ctx, 31, 0x1C12ECu);
    ctx->pc = 0x1C12E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12E4u;
    // 0x1c12e8: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1C12E4u, 0x1C12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12ECu;
label_1c12ec:
    // 0x1c12ec: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c12f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c12f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12f4: 0x24a53ec0  addiu       $a1, $a1, 0x3EC0
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16064));
    // 0x1c12f8: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C12F8u;
    SET_GPR_U32(ctx, 31, 0x1C1300u);
    ctx->pc = 0x1C12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12F8u;
    // 0x1c12fc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C12F8u, 0x1C1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1300u;
label_1c1300:
    // 0x1c1300: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C1300u;
    {
        const bool branch_taken_0x1c1300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1300) {
            ctx->pc = 0x1C1338u;
            return;
        }
    }
    ctx->pc = 0x1C1308u;
}
